#pragma once


#include "antlr4-runtime.h"
#include "gpsrBaseVisitor.h"

#include <string>
#include <vector>
#include <iostream>

const bool DEBUGGING = true;

enum TASK_TYPE {FIND_PEOPLE, FIND_OBJECT, GUIDE, FOLLOW, FOLLLOW_OUT, INCOMPLETE,
            MANIPULATION, COMPLEX_MANIPULATION, PARTY_HOST};

struct Task{
    TASK_TYPE type;
    std::string category = "";
    std::string object = "";
    std::string gesture = "";
    std::string room = "";
    std::string location_except_rooms = "";
    std::string name = "";
    std::string question = "";
};

class gpsrCustomVisitor : public gpsrBaseVisitor{
private:
    std::vector<Task> tasks;
    int idx=0;
public:
    // 开启任务
    std::any visitInstruction(gpsrParser::InstructionContext *ctx) override final{
        return visitChildren(ctx);
    }

    /**
     * 任务分类
    */
    // 对应一个小任务 （还未分类）
    std::any visitMain(gpsrParser::MainContext *ctx) override final{
        if (DEBUGGING) std::cout << "Main detected, id: " << idx << std::endl;
        idx ++;
        return visitChildren(ctx);
    }
    // 找东西
    std::any visitFndobj(gpsrParser::FndobjContext *ctx) override final{
        tasks.push_back(Task{FIND_OBJECT});
        if (DEBUGGING) std::cout << "Task type: FIND_OBJECT" << std::endl;
        
        return NULL;
        // return visitChildren(ctx);
    }
    // 找人
    std::any visitFndppl(gpsrParser::FndpplContext *ctx) override final{
        tasks.push_back(Task{FIND_PEOPLE});
        if (DEBUGGING) std::cout << "Task type: FIND_PEOPLE" << std::endl;
        return visitChildren(ctx);
    }
    // 跟随
    std::any visitFollow(gpsrParser::FollowContext *ctx) override final{
        tasks.push_back(Task{FOLLOW});
        if (DEBUGGING) std::cout << "Task type: FOLLOW" << std::endl;
        return visitChildren(ctx);
    }
    // 引导
    std::any visitGuide(gpsrParser::GuideContext *ctx) override final{
        tasks.push_back(Task{GUIDE});
        if (DEBUGGING) std::cout << "Task type: GUIDE" << std::endl;
        return visitChildren(ctx);
    }
    // 跟随出场地
    std::any visitFollowout(gpsrParser::FollowoutContext *ctx) override {
        tasks.push_back(Task{FOLLLOW_OUT});
        if (DEBUGGING) std::cout << "Task type: FOLLLOW_OUT" << std::endl;
        return visitChildren(ctx);
    }
    // Incomplete
    std::any visitIncomplete(gpsrParser::IncompleteContext *ctx) override {
        tasks.push_back(Task{INCOMPLETE});
        if (DEBUGGING) std::cout << "Task type: INCOMPLETE" << std::endl;
        
        return NULL;
        // return visitChildren(ctx);
    }
    // Party Host
    std::any visitPartyhost(gpsrParser::PartyhostContext *ctx) override {
        tasks.push_back(Task{PARTY_HOST});
        if (DEBUGGING) std::cout << "Task type: PARTY_HOST" << std::endl;
        
        return NULL;
        // return visitChildren(ctx);
    }
    // 抓取
    std::any visitMan(gpsrParser::ManContext *ctx) override {
        tasks.push_back(Task{MANIPULATION});
        if (DEBUGGING) std::cout << "Task type: MANIPULATION" << std::endl;
        
        return NULL;
        // return visitChildren(ctx);
    }
    // 复杂的抓取
    std::any visitComplexman(gpsrParser::ComplexmanContext *ctx) override {
        tasks.push_back(Task{COMPLEX_MANIPULATION});
        if (DEBUGGING) std::cout << "Task type: COMPLEX_MANIPULATION" << std::endl;
        
        return NULL;
        // return visitChildren(ctx);
    }

    /**
     * 终结符识别（具体的房间、家具位置、人物等）
    */

};