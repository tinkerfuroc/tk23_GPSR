
// Generated from gpsr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  gpsrParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, T__93 = 94, T__94 = 95, T__95 = 96, T__96 = 97, T__97 = 98, 
    T__98 = 99, T__99 = 100, T__100 = 101, T__101 = 102, T__102 = 103, T__103 = 104, 
    T__104 = 105, T__105 = 106, T__106 = 107, T__107 = 108, T__108 = 109, 
    T__109 = 110, T__110 = 111, T__111 = 112, T__112 = 113, T__113 = 114, 
    T__114 = 115, T__115 = 116, T__116 = 117, T__117 = 118, T__118 = 119, 
    T__119 = 120, T__120 = 121, T__121 = 122, T__122 = 123, T__123 = 124, 
    T__124 = 125, T__125 = 126, T__126 = 127, T__127 = 128, T__128 = 129, 
    T__129 = 130, T__130 = 131, T__131 = 132, T__132 = 133, T__133 = 134, 
    T__134 = 135, T__135 = 136, T__136 = 137, T__137 = 138, T__138 = 139, 
    T__139 = 140, T__140 = 141, T__141 = 142, T__142 = 143, T__143 = 144, 
    T__144 = 145, T__145 = 146, T__146 = 147, T__147 = 148, T__148 = 149, 
    T__149 = 150, T__150 = 151, T__151 = 152, T__152 = 153, Comma = 154, 
    Category = 155, Object = 156, Object_alike = 157, Object_known = 158, 
    Object_alike_obfuscated = 159, Object_obfuscated = 160, Pron = 161, 
    Gesture = 162, Room = 163, Beacon = 164, Placement = 165, Location_except_room = 166, 
    Name = 167, Question = 168
  };

  enum {
    RuleInstruction = 0, RuleMainSentence = 1, RulePmain = 2, RuleMain = 3, 
    RuleFindp = 4, RuleWhoWhere = 5, RuleMan = 6, RuleDeliver = 7, RuleComplexman = 8, 
    RuleCmancmd = 9, RuleCmanobjsrc = 10, RuleFndobj = 11, RuleFndppl = 12, 
    RuleFollow = 13, RuleFllmeet = 14, RuleFllwdest = 15, RuleGuide = 16, 
    RuleGdcmd = 17, RuleGuideto = 18, RuleGdwhere = 19, RuleFollowout = 20, 
    RuleIncomplete = 21, RuleInguidewho = 22, RulePartyhost = 23, RulePhpeople = 24, 
    RulePeopletype = 25, RulePhpeopler = 26, RulePgenders = 27, RulePgenderp = 28, 
    RulePose = 29, RuleAbspos = 30, RuleRelpos = 31, RuleGarbage = 32, RuleLuggage = 33, 
    RuleTaxi = 34, RuleDoor = 35, RuleDoorpos = 36, RuleVbtakeout = 37, 
    RuleVbcleanup = 38, RuleVbserve = 39, RuleVbmeet = 40, RuleSomeone = 41, 
    RulePlace = 42, RuleOprop = 43, RuleGoplace = 44, RuleGobeacon = 45, 
    RuleGoroom = 46, RuleTake = 47, RuleTakefrom = 48, RuleDelivme = 49, 
    RuleDelivto = 50, RuleDelivat = 51, RuleTalk = 52, RuleAnswer = 53, 
    RuleSpeak = 54, RuleWhattosay = 55, RuleVbbtake = 56, RuleVbplace = 57, 
    RuleVbbring = 58, RuleVbdeliver = 59, RuleVbtake = 60, RuleVbspeak = 61, 
    RuleVbgopl = 62, RuleVbgor = 63, RuleVbfind = 64, RuleVbguide = 65, 
    RuleVbfollow = 66, RulePolite = 67
  };

  explicit gpsrParser(antlr4::TokenStream *input);

  gpsrParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~gpsrParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class InstructionContext;
  class MainSentenceContext;
  class PmainContext;
  class MainContext;
  class FindpContext;
  class WhoWhereContext;
  class ManContext;
  class DeliverContext;
  class ComplexmanContext;
  class CmancmdContext;
  class CmanobjsrcContext;
  class FndobjContext;
  class FndpplContext;
  class FollowContext;
  class FllmeetContext;
  class FllwdestContext;
  class GuideContext;
  class GdcmdContext;
  class GuidetoContext;
  class GdwhereContext;
  class FollowoutContext;
  class IncompleteContext;
  class InguidewhoContext;
  class PartyhostContext;
  class PhpeopleContext;
  class PeopletypeContext;
  class PhpeoplerContext;
  class PgendersContext;
  class PgenderpContext;
  class PoseContext;
  class AbsposContext;
  class RelposContext;
  class GarbageContext;
  class LuggageContext;
  class TaxiContext;
  class DoorContext;
  class DoorposContext;
  class VbtakeoutContext;
  class VbcleanupContext;
  class VbserveContext;
  class VbmeetContext;
  class SomeoneContext;
  class PlaceContext;
  class OpropContext;
  class GoplaceContext;
  class GobeaconContext;
  class GoroomContext;
  class TakeContext;
  class TakefromContext;
  class DelivmeContext;
  class DelivtoContext;
  class DelivatContext;
  class TalkContext;
  class AnswerContext;
  class SpeakContext;
  class WhattosayContext;
  class VbbtakeContext;
  class VbplaceContext;
  class VbbringContext;
  class VbdeliverContext;
  class VbtakeContext;
  class VbspeakContext;
  class VbgoplContext;
  class VbgorContext;
  class VbfindContext;
  class VbguideContext;
  class VbfollowContext;
  class PoliteContext; 

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MainSentenceContext *> mainSentence();
    MainSentenceContext* mainSentence(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  MainSentenceContext : public antlr4::ParserRuleContext {
  public:
    MainSentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PmainContext *pmain();
    MainContext *main();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainSentenceContext* mainSentence();

  class  PmainContext : public antlr4::ParserRuleContext {
  public:
    PmainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MainContext *main();
    PoliteContext *polite();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PmainContext* pmain();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FndpplContext *fndppl();
    FndobjContext *fndobj();
    GuideContext *guide();
    FollowContext *follow();
    FollowoutContext *followout();
    IncompleteContext *incomplete();
    ManContext *man();
    ComplexmanContext *complexman();
    PartyhostContext *partyhost();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  FindpContext : public antlr4::ParserRuleContext {
  public:
    FindpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbfindContext *vbfind();
    PgendersContext *pgenders();
    antlr4::tree::TerminalNode *Gesture();
    PoseContext *pose();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FindpContext* findp();

  class  WhoWhereContext : public antlr4::ParserRuleContext {
  public:
    WhoWhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Gesture();
    antlr4::tree::TerminalNode *Room();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhoWhereContext* whoWhere();

  class  ManContext : public antlr4::ParserRuleContext {
  public:
    ManContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeliverContext *deliver();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ManContext* man();

  class  DeliverContext : public antlr4::ParserRuleContext {
  public:
    DeliverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TakeContext *take();
    VbplaceContext *vbplace();
    antlr4::tree::TerminalNode *Placement();
    antlr4::tree::TerminalNode *Object_known();
    VbbringContext *vbbring();
    VbdeliverContext *vbdeliver();
    SomeoneContext *someone();
    TakefromContext *takefrom();
    GoplaceContext *goplace();
    VbfindContext *vbfind();
    antlr4::tree::TerminalNode *Object();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    PlaceContext *place();
    VbbtakeContext *vbbtake();
    antlr4::tree::TerminalNode *Object_alike();
    antlr4::tree::TerminalNode *Room();
    DelivmeContext *delivme();
    DelivatContext *delivat();
    LuggageContext *luggage();
    TaxiContext *taxi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeliverContext* deliver();

  class  ComplexmanContext : public antlr4::ParserRuleContext {
  public:
    ComplexmanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CmancmdContext *cmancmd();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexmanContext* complexman();

  class  CmancmdContext : public antlr4::ParserRuleContext {
  public:
    CmancmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbbtakeContext *vbbtake();
    antlr4::tree::TerminalNode *Object_known();
    antlr4::tree::TerminalNode *Placement();
    VbbringContext *vbbring();
    AbsposContext *abspos();
    CmanobjsrcContext *cmanobjsrc();
    RelposContext *relpos();
    antlr4::tree::TerminalNode *Object();
    OpropContext *oprop();
    antlr4::tree::TerminalNode *Category();
    VbcleanupContext *vbcleanup();
    antlr4::tree::TerminalNode *Room();
    VbtakeoutContext *vbtakeout();
    GarbageContext *garbage();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmancmdContext* cmancmd();

  class  CmanobjsrcContext : public antlr4::ParserRuleContext {
  public:
    CmanobjsrcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Placement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmanobjsrcContext* cmanobjsrc();

  class  FndobjContext : public antlr4::ParserRuleContext {
  public:
    FndobjContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Object();
    antlr4::tree::TerminalNode *Placement();
    VbfindContext *vbfind();
    antlr4::tree::TerminalNode *Room();
    antlr4::tree::TerminalNode *Object_alike_obfuscated();
    antlr4::tree::TerminalNode *Category();
    OpropContext *oprop();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FndobjContext* fndobj();

  class  FndpplContext : public antlr4::ParserRuleContext {
  public:
    FndpplContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TalkContext *talk();
    WhoWhereContext *whoWhere();
    FindpContext *findp();
    antlr4::tree::TerminalNode *Room();
    GoroomContext *goroom();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Beacon();
    PgenderpContext *pgenderp();
    PoseContext *pose();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FndpplContext* fndppl();

  class  FollowContext : public antlr4::ParserRuleContext {
  public:
    FollowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbfollowContext *vbfollow();
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Beacon();
    antlr4::tree::TerminalNode *Room();
    antlr4::tree::TerminalNode *Pron();
    FllwdestContext *fllwdest();
    GobeaconContext *gobeacon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FollowContext* follow();

  class  FllmeetContext : public antlr4::ParserRuleContext {
  public:
    FllmeetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FllmeetContext* fllmeet();

  class  FllwdestContext : public antlr4::ParserRuleContext {
  public:
    FllwdestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Room();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FllwdestContext* fllwdest();

  class  GuideContext : public antlr4::ParserRuleContext {
  public:
    GuideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GdcmdContext *gdcmd();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GuideContext* guide();

  class  GdcmdContext : public antlr4::ParserRuleContext {
  public:
    GdcmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbguideContext *vbguide();
    antlr4::tree::TerminalNode *Name();
    std::vector<antlr4::tree::TerminalNode *> Beacon();
    antlr4::tree::TerminalNode* Beacon(size_t i);
    GuidetoContext *guideto();
    GobeaconContext *gobeacon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    GdwhereContext *gdwhere();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GdcmdContext* gdcmd();

  class  GuidetoContext : public antlr4::ParserRuleContext {
  public:
    GuidetoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbguideContext *vbguide();
    antlr4::tree::TerminalNode *Pron();
    antlr4::tree::TerminalNode *Beacon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GuidetoContext* guideto();

  class  GdwhereContext : public antlr4::ParserRuleContext {
  public:
    GdwhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pron();
    antlr4::tree::TerminalNode *Beacon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GdwhereContext* gdwhere();

  class  FollowoutContext : public antlr4::ParserRuleContext {
  public:
    FollowoutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Beacon();
    VbfollowContext *vbfollow();
    std::vector<antlr4::tree::TerminalNode *> Pron();
    antlr4::tree::TerminalNode* Pron(size_t i);
    GoroomContext *goroom();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    VbguideContext *vbguide();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FollowoutContext* followout();

  class  IncompleteContext : public antlr4::ParserRuleContext {
  public:
    IncompleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbfollowContext *vbfollow();
    antlr4::tree::TerminalNode *Name();
    VbbringContext *vbbring();
    antlr4::tree::TerminalNode *Object_obfuscated();
    VbdeliverContext *vbdeliver();
    SomeoneContext *someone();
    VbguideContext *vbguide();
    antlr4::tree::TerminalNode *Beacon();
    InguidewhoContext *inguidewho();
    antlr4::tree::TerminalNode *Pron();
    GobeaconContext *gobeacon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncompleteContext* incomplete();

  class  InguidewhoContext : public antlr4::ParserRuleContext {
  public:
    InguidewhoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InguidewhoContext* inguidewho();

  class  PartyhostContext : public antlr4::ParserRuleContext {
  public:
    PartyhostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbserveContext *vbserve();
    PhpeoplerContext *phpeopler();
    VbmeetContext *vbmeet();
    std::vector<antlr4::tree::TerminalNode *> Name();
    antlr4::tree::TerminalNode* Name(size_t i);
    DoorContext *door();
    std::vector<antlr4::tree::TerminalNode *> Pron();
    antlr4::tree::TerminalNode* Pron(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Beacon();
    antlr4::tree::TerminalNode* Beacon(size_t i);
    VbguideContext *vbguide();
    TaxiContext *taxi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartyhostContext* partyhost();

  class  PhpeopleContext : public antlr4::ParserRuleContext {
  public:
    PhpeopleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PeopletypeContext *peopletype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhpeopleContext* phpeople();

  class  PeopletypeContext : public antlr4::ParserRuleContext {
  public:
    PeopletypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeopletypeContext* peopletype();

  class  PhpeoplerContext : public antlr4::ParserRuleContext {
  public:
    PhpeoplerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PhpeopleContext *phpeople();
    antlr4::tree::TerminalNode *Room();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhpeoplerContext* phpeopler();

  class  PgendersContext : public antlr4::ParserRuleContext {
  public:
    PgendersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PgendersContext* pgenders();

  class  PgenderpContext : public antlr4::ParserRuleContext {
  public:
    PgenderpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PgenderpContext* pgenderp();

  class  PoseContext : public antlr4::ParserRuleContext {
  public:
    PoseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PoseContext* pose();

  class  AbsposContext : public antlr4::ParserRuleContext {
  public:
    AbsposContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbsposContext* abspos();

  class  RelposContext : public antlr4::ParserRuleContext {
  public:
    RelposContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelposContext* relpos();

  class  GarbageContext : public antlr4::ParserRuleContext {
  public:
    GarbageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GarbageContext* garbage();

  class  LuggageContext : public antlr4::ParserRuleContext {
  public:
    LuggageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LuggageContext* luggage();

  class  TaxiContext : public antlr4::ParserRuleContext {
  public:
    TaxiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TaxiContext* taxi();

  class  DoorContext : public antlr4::ParserRuleContext {
  public:
    DoorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DoorposContext *doorpos();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoorContext* door();

  class  DoorposContext : public antlr4::ParserRuleContext {
  public:
    DoorposContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoorposContext* doorpos();

  class  VbtakeoutContext : public antlr4::ParserRuleContext {
  public:
    VbtakeoutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbtakeoutContext* vbtakeout();

  class  VbcleanupContext : public antlr4::ParserRuleContext {
  public:
    VbcleanupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbcleanupContext* vbcleanup();

  class  VbserveContext : public antlr4::ParserRuleContext {
  public:
    VbserveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbserveContext* vbserve();

  class  VbmeetContext : public antlr4::ParserRuleContext {
  public:
    VbmeetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbmeetContext* vbmeet();

  class  SomeoneContext : public antlr4::ParserRuleContext {
  public:
    SomeoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhoWhereContext *whoWhere();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SomeoneContext* someone();

  class  PlaceContext : public antlr4::ParserRuleContext {
  public:
    PlaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbplaceContext *vbplace();
    antlr4::tree::TerminalNode *Placement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlaceContext* place();

  class  OpropContext : public antlr4::ParserRuleContext {
  public:
    OpropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpropContext* oprop();

  class  GoplaceContext : public antlr4::ParserRuleContext {
  public:
    GoplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbgoplContext *vbgopl();
    antlr4::tree::TerminalNode *Placement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GoplaceContext* goplace();

  class  GobeaconContext : public antlr4::ParserRuleContext {
  public:
    GobeaconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbgoplContext *vbgopl();
    antlr4::tree::TerminalNode *Beacon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GobeaconContext* gobeacon();

  class  GoroomContext : public antlr4::ParserRuleContext {
  public:
    GoroomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbgoplContext *vbgopl();
    antlr4::tree::TerminalNode *Room();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GoroomContext* goroom();

  class  TakeContext : public antlr4::ParserRuleContext {
  public:
    TakeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbtakeContext *vbtake();
    antlr4::tree::TerminalNode *Object();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TakeContext* take();

  class  TakefromContext : public antlr4::ParserRuleContext {
  public:
    TakefromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TakeContext *take();
    antlr4::tree::TerminalNode *Placement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TakefromContext* takefrom();

  class  DelivmeContext : public antlr4::ParserRuleContext {
  public:
    DelivmeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbdeliverContext *vbdeliver();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelivmeContext* delivme();

  class  DelivtoContext : public antlr4::ParserRuleContext {
  public:
    DelivtoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbdeliverContext *vbdeliver();
    antlr4::tree::TerminalNode *Name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelivtoContext* delivto();

  class  DelivatContext : public antlr4::ParserRuleContext {
  public:
    DelivatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbdeliverContext *vbdeliver();
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *Beacon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelivatContext* delivat();

  class  TalkContext : public antlr4::ParserRuleContext {
  public:
    TalkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnswerContext *answer();
    SpeakContext *speak();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TalkContext* talk();

  class  AnswerContext : public antlr4::ParserRuleContext {
  public:
    AnswerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Question();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnswerContext* answer();

  class  SpeakContext : public antlr4::ParserRuleContext {
  public:
    SpeakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbspeakContext *vbspeak();
    WhattosayContext *whattosay();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpeakContext* speak();

  class  WhattosayContext : public antlr4::ParserRuleContext {
  public:
    WhattosayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhattosayContext* whattosay();

  class  VbbtakeContext : public antlr4::ParserRuleContext {
  public:
    VbbtakeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbbtakeContext* vbbtake();

  class  VbplaceContext : public antlr4::ParserRuleContext {
  public:
    VbplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbplaceContext* vbplace();

  class  VbbringContext : public antlr4::ParserRuleContext {
  public:
    VbbringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbbringContext* vbbring();

  class  VbdeliverContext : public antlr4::ParserRuleContext {
  public:
    VbdeliverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbbringContext *vbbring();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbdeliverContext* vbdeliver();

  class  VbtakeContext : public antlr4::ParserRuleContext {
  public:
    VbtakeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbtakeContext* vbtake();

  class  VbspeakContext : public antlr4::ParserRuleContext {
  public:
    VbspeakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbspeakContext* vbspeak();

  class  VbgoplContext : public antlr4::ParserRuleContext {
  public:
    VbgoplContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbgoplContext* vbgopl();

  class  VbgorContext : public antlr4::ParserRuleContext {
  public:
    VbgorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VbgoplContext *vbgopl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbgorContext* vbgor();

  class  VbfindContext : public antlr4::ParserRuleContext {
  public:
    VbfindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbfindContext* vbfind();

  class  VbguideContext : public antlr4::ParserRuleContext {
  public:
    VbguideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbguideContext* vbguide();

  class  VbfollowContext : public antlr4::ParserRuleContext {
  public:
    VbfollowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VbfollowContext* vbfollow();

  class  PoliteContext : public antlr4::ParserRuleContext {
  public:
    PoliteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PoliteContext* polite();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

