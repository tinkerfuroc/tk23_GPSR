#pragma once


#include "antlr4-runtime.h"
#include "gpsrBaseVisitor.h"

#include <string>
#include <vector>

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
        return visitChildren(ctx);
    }
    // 找东西
    std::any visitFndobj(gpsrParser::FndobjContext *ctx) override final{
        tasks.push_back(Task{FIND_OBJECT});
        return visitChildren(ctx);
    }
    // 找人
    std::any visitFndppl(gpsrParser::FndpplContext *ctx) override final{
        return visitChildren(ctx);
    }
    // 跟随
    std::any visitFollow(gpsrParser::FollowContext *ctx) override final{
        return visitChildren(ctx);
    }
    // 引导
    std::any visitGuide(gpsrParser::GuideContext *ctx) override final{
        return visitChildren(ctx);
    }
    // 跟随出场地
    std::any visitFollowout(gpsrParser::FollowoutContext *ctx) override {
        return visitChildren(ctx);
    }
    // Incomplete
    std::any visitIncomplete(gpsrParser::IncompleteContext *ctx) override {
        return visitChildren(ctx);
    }
    // Party Host
    std::any visitPartyhost(gpsrParser::PartyhostContext *ctx) override {
        return visitChildren(ctx);
    }
    // 抓取
    std::any visitMan(gpsrParser::ManContext *ctx) override {
        return visitChildren(ctx);
    }
    // 复杂的抓取
    std::any visitComplexman(gpsrParser::ComplexmanContext *ctx) override {
        return visitChildren(ctx);
    }
};