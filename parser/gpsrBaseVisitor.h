
// Generated from gpsr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "gpsrVisitor.h"


/**
 * This class provides an empty implementation of gpsrVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  gpsrBaseVisitor : public gpsrVisitor {
public:

  virtual std::any visitInstruction(gpsrParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMainSentence(gpsrParser::MainSentenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPmain(gpsrParser::PmainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMain(gpsrParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFindp(gpsrParser::FindpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhoWhere(gpsrParser::WhoWhereContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMan(gpsrParser::ManContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeliver(gpsrParser::DeliverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexman(gpsrParser::ComplexmanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmancmd(gpsrParser::CmancmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmanobjsrc(gpsrParser::CmanobjsrcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFndobj(gpsrParser::FndobjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFndppl(gpsrParser::FndpplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFollow(gpsrParser::FollowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFllmeet(gpsrParser::FllmeetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFllwdest(gpsrParser::FllwdestContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGuide(gpsrParser::GuideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGdcmd(gpsrParser::GdcmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGuideto(gpsrParser::GuidetoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGdwhere(gpsrParser::GdwhereContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFollowout(gpsrParser::FollowoutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncomplete(gpsrParser::IncompleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInguidewho(gpsrParser::InguidewhoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartyhost(gpsrParser::PartyhostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPhpeople(gpsrParser::PhpeopleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeopletype(gpsrParser::PeopletypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPhpeopler(gpsrParser::PhpeoplerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPgenders(gpsrParser::PgendersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPgenderp(gpsrParser::PgenderpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPose(gpsrParser::PoseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbspos(gpsrParser::AbsposContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelpos(gpsrParser::RelposContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGarbage(gpsrParser::GarbageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLuggage(gpsrParser::LuggageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTaxi(gpsrParser::TaxiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoor(gpsrParser::DoorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoorpos(gpsrParser::DoorposContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbtakeout(gpsrParser::VbtakeoutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbcleanup(gpsrParser::VbcleanupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbserve(gpsrParser::VbserveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbmeet(gpsrParser::VbmeetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSomeone(gpsrParser::SomeoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlace(gpsrParser::PlaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOprop(gpsrParser::OpropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoplace(gpsrParser::GoplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGobeacon(gpsrParser::GobeaconContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoroom(gpsrParser::GoroomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTake(gpsrParser::TakeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTakefrom(gpsrParser::TakefromContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelivme(gpsrParser::DelivmeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelivto(gpsrParser::DelivtoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelivat(gpsrParser::DelivatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTalk(gpsrParser::TalkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnswer(gpsrParser::AnswerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpeak(gpsrParser::SpeakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhattosay(gpsrParser::WhattosayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbbtake(gpsrParser::VbbtakeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbplace(gpsrParser::VbplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbbring(gpsrParser::VbbringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbdeliver(gpsrParser::VbdeliverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbtake(gpsrParser::VbtakeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbspeak(gpsrParser::VbspeakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbgopl(gpsrParser::VbgoplContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbgor(gpsrParser::VbgorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbfind(gpsrParser::VbfindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbguide(gpsrParser::VbguideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVbfollow(gpsrParser::VbfollowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPolite(gpsrParser::PoliteContext *ctx) override {
    return visitChildren(ctx);
  }


};

