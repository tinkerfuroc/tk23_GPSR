
// Generated from gpsr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "gpsrParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by gpsrParser.
 */
class  gpsrVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by gpsrParser.
   */
    virtual std::any visitInstruction(gpsrParser::InstructionContext *context) = 0;

    virtual std::any visitMainSentence(gpsrParser::MainSentenceContext *context) = 0;

    virtual std::any visitPmain(gpsrParser::PmainContext *context) = 0;

    virtual std::any visitMain(gpsrParser::MainContext *context) = 0;

    virtual std::any visitFindp(gpsrParser::FindpContext *context) = 0;

    virtual std::any visitWhoWhere(gpsrParser::WhoWhereContext *context) = 0;

    virtual std::any visitMan(gpsrParser::ManContext *context) = 0;

    virtual std::any visitDeliver(gpsrParser::DeliverContext *context) = 0;

    virtual std::any visitComplexman(gpsrParser::ComplexmanContext *context) = 0;

    virtual std::any visitCmancmd(gpsrParser::CmancmdContext *context) = 0;

    virtual std::any visitCmanobjsrc(gpsrParser::CmanobjsrcContext *context) = 0;

    virtual std::any visitFndobj(gpsrParser::FndobjContext *context) = 0;

    virtual std::any visitFndppl(gpsrParser::FndpplContext *context) = 0;

    virtual std::any visitFollow(gpsrParser::FollowContext *context) = 0;

    virtual std::any visitFllmeet(gpsrParser::FllmeetContext *context) = 0;

    virtual std::any visitFllwdest(gpsrParser::FllwdestContext *context) = 0;

    virtual std::any visitGuide(gpsrParser::GuideContext *context) = 0;

    virtual std::any visitGdcmd(gpsrParser::GdcmdContext *context) = 0;

    virtual std::any visitGuideto(gpsrParser::GuidetoContext *context) = 0;

    virtual std::any visitGdwhere(gpsrParser::GdwhereContext *context) = 0;

    virtual std::any visitFollowout(gpsrParser::FollowoutContext *context) = 0;

    virtual std::any visitIncomplete(gpsrParser::IncompleteContext *context) = 0;

    virtual std::any visitInguidewho(gpsrParser::InguidewhoContext *context) = 0;

    virtual std::any visitPartyhost(gpsrParser::PartyhostContext *context) = 0;

    virtual std::any visitPhpeople(gpsrParser::PhpeopleContext *context) = 0;

    virtual std::any visitPeopletype(gpsrParser::PeopletypeContext *context) = 0;

    virtual std::any visitPhpeopler(gpsrParser::PhpeoplerContext *context) = 0;

    virtual std::any visitPgenders(gpsrParser::PgendersContext *context) = 0;

    virtual std::any visitPgenderp(gpsrParser::PgenderpContext *context) = 0;

    virtual std::any visitPose(gpsrParser::PoseContext *context) = 0;

    virtual std::any visitAbspos(gpsrParser::AbsposContext *context) = 0;

    virtual std::any visitRelpos(gpsrParser::RelposContext *context) = 0;

    virtual std::any visitGarbage(gpsrParser::GarbageContext *context) = 0;

    virtual std::any visitLuggage(gpsrParser::LuggageContext *context) = 0;

    virtual std::any visitTaxi(gpsrParser::TaxiContext *context) = 0;

    virtual std::any visitDoor(gpsrParser::DoorContext *context) = 0;

    virtual std::any visitDoorpos(gpsrParser::DoorposContext *context) = 0;

    virtual std::any visitVbtakeout(gpsrParser::VbtakeoutContext *context) = 0;

    virtual std::any visitVbcleanup(gpsrParser::VbcleanupContext *context) = 0;

    virtual std::any visitVbserve(gpsrParser::VbserveContext *context) = 0;

    virtual std::any visitVbmeet(gpsrParser::VbmeetContext *context) = 0;

    virtual std::any visitSomeone(gpsrParser::SomeoneContext *context) = 0;

    virtual std::any visitPlace(gpsrParser::PlaceContext *context) = 0;

    virtual std::any visitOprop(gpsrParser::OpropContext *context) = 0;

    virtual std::any visitGoplace(gpsrParser::GoplaceContext *context) = 0;

    virtual std::any visitGobeacon(gpsrParser::GobeaconContext *context) = 0;

    virtual std::any visitGoroom(gpsrParser::GoroomContext *context) = 0;

    virtual std::any visitTake(gpsrParser::TakeContext *context) = 0;

    virtual std::any visitTakefrom(gpsrParser::TakefromContext *context) = 0;

    virtual std::any visitDelivme(gpsrParser::DelivmeContext *context) = 0;

    virtual std::any visitDelivto(gpsrParser::DelivtoContext *context) = 0;

    virtual std::any visitDelivat(gpsrParser::DelivatContext *context) = 0;

    virtual std::any visitTalk(gpsrParser::TalkContext *context) = 0;

    virtual std::any visitAnswer(gpsrParser::AnswerContext *context) = 0;

    virtual std::any visitSpeak(gpsrParser::SpeakContext *context) = 0;

    virtual std::any visitWhattosay(gpsrParser::WhattosayContext *context) = 0;

    virtual std::any visitVbbtake(gpsrParser::VbbtakeContext *context) = 0;

    virtual std::any visitVbplace(gpsrParser::VbplaceContext *context) = 0;

    virtual std::any visitVbbring(gpsrParser::VbbringContext *context) = 0;

    virtual std::any visitVbdeliver(gpsrParser::VbdeliverContext *context) = 0;

    virtual std::any visitVbtake(gpsrParser::VbtakeContext *context) = 0;

    virtual std::any visitVbspeak(gpsrParser::VbspeakContext *context) = 0;

    virtual std::any visitVbgopl(gpsrParser::VbgoplContext *context) = 0;

    virtual std::any visitVbgor(gpsrParser::VbgorContext *context) = 0;

    virtual std::any visitVbfind(gpsrParser::VbfindContext *context) = 0;

    virtual std::any visitVbguide(gpsrParser::VbguideContext *context) = 0;

    virtual std::any visitVbfollow(gpsrParser::VbfollowContext *context) = 0;

    virtual std::any visitPolite(gpsrParser::PoliteContext *context) = 0;


};

