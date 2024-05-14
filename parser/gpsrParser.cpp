
// Generated from gpsr.g4 by ANTLR 4.13.1


#include "gpsrVisitor.h"

#include "gpsrParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GpsrParserStaticData final {
  GpsrParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GpsrParserStaticData(const GpsrParserStaticData&) = delete;
  GpsrParserStaticData(GpsrParserStaticData&&) = delete;
  GpsrParserStaticData& operator=(const GpsrParserStaticData&) = delete;
  GpsrParserStaticData& operator=(GpsrParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gpsrParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GpsrParserStaticData *gpsrParserStaticData = nullptr;

void gpsrParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gpsrParserStaticData != nullptr) {
    return;
  }
#else
  assert(gpsrParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GpsrParserStaticData>(
    std::vector<std::string>{
      "instruction", "mainSentence", "pmain", "main", "findp", "whoWhere", 
      "man", "deliver", "complexman", "cmancmd", "cmanobjsrc", "fndobj", 
      "fndppl", "follow", "fllmeet", "fllwdest", "guide", "gdcmd", "guideto", 
      "gdwhere", "followout", "incomplete", "inguidewho", "partyhost", "phpeople", 
      "peopletype", "phpeopler", "pgenders", "pgenderp", "pose", "abspos", 
      "relpos", "garbage", "luggage", "taxi", "door", "doorpos", "vbtakeout", 
      "vbcleanup", "vbserve", "vbmeet", "someone", "place", "oprop", "goplace", 
      "gobeacon", "goroom", "take", "takefrom", "delivme", "delivto", "delivat", 
      "talk", "answer", "speak", "whattosay", "vbbtake", "vbplace", "vbbring", 
      "vbdeliver", "vbtake", "vbspeak", "vbgopl", "vbgor", "vbfind", "vbguide", 
      "vbfollow", "polite"
    },
    std::vector<std::string>{
      "", "'a'", "'a person'", "'the person'", "'in the'", "'and'", "'it on the'", 
      "'the'", "'on the'", "'me the'", "'to'", "','", "'from the'", "'to the'", 
      "'my'", "'object'", "'me the object'", "'Tell me how many'", "'there are on the'", 
      "'Tell me what's the'", "'object on the'", "'tell me which are the three'", 
      "'objects'", "'three'", "'Tell me the name of the person at the'", 
      "'Tell me the gender of the person at the'", "'Tell me the pose of the person at the'", 
      "'Tell me the name of the person in the'", "'Tell me the gender of the person in the'", 
      "'Tell me the pose of the person in the'", "'tell me how many people in the'", 
      "'are'", "'meet'", "'at the'", "'find a person'", "'you'", "'may'", 
      "'can'", "'will'", "'find'", "', and'", "'back'", "', meet'", "'drinks to'", 
      "'and introduce'", "'and ask'", "'to leave'", "'everyone'", "'all the'", 
      "'people'", "'men'", "'women'", "'guests'", "'elders'", "'children'", 
      "'man'", "'woman'", "'boy'", "'girl'", "'male person'", "'female person'", 
      "'boys'", "'girls'", "'male'", "'female'", "'sitting'", "'standing'", 
      "'lying down'", "'left most'", "'right most'", "'at the left of'", 
      "'at the right of'", "'on top of'", "'above'", "'behind'", "'under'", 
      "'litter'", "'garbage'", "'trash'", "'waste'", "'debris'", "'junk'", 
      "'bag'", "'baggage'", "'valise'", "'suitcase'", "'trolley'", "'taxi'", 
      "'cab'", "'uber'", "'entrance'", "'door'", "'front'", "'main'", "'rear'", 
      "'take out'", "'dump'", "'clean out'", "'clean up'", "'tidy op'", 
      "'neaten'", "'order'", "'serve'", "'arrange'", "'deliver'", "'distribute'", 
      "'give'", "'provide'", "'contact'", "'face'", "'greet'", "'me'", "'biggest'", 
      "'largest'", "'smallest'", "'heaviest'", "'lightest'", "'thinnest'", 
      "'it to me'", "'it to'", "'answer a'", "'something about yourself'", 
      "'the time'", "'what day is'", "'today'", "'tomorrow'", "'your team's'", 
      "'name'", "'country'", "'affiliation'", "'the day of the'", "'week'", 
      "'month'", "'a joke'", "'bring'", "'take'", "'put'", "'place'", "'get'", 
      "'grasp'", "'pick up'", "'tell'", "'say'", "'go'", "'navigate'", "'enter'", 
      "'locate'", "'look for'", "'guide'", "'escort'", "'lead'", "'accompany'", 
      "'follow'", "'Please'", "'Could you'", "'Robot please'", "'Could you please'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "Category", "Object", "Object_alike", "Object_known", 
      "Object_alike_obfuscated", "Object_obfuscated", "Pron", "Gesture", 
      "Room", "Beacon", "Placement", "Location_except_room", "Name", "Question"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,170,724,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,1,0,4,0,138,8,0,11,0,12,0,
  	139,1,1,1,1,3,1,144,8,1,1,2,3,2,147,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,3,3,160,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,3,4,174,8,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,3,7,260,8,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,303,8,9,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,363,
  	8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,402,8,12,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	3,13,419,8,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,430,8,
  	13,1,14,1,14,1,14,3,14,435,8,14,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,470,8,
  	17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,506,8,20,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,538,8,
  	21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,3,23,585,8,23,1,24,1,24,1,24,3,24,590,8,24,1,25,1,25,
  	1,26,1,26,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,
  	1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,3,35,620,
  	8,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,3,41,
  	634,8,41,1,42,1,42,1,42,1,42,1,43,1,43,1,44,1,44,1,44,1,44,1,45,1,45,
  	1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,
  	1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,51,1,51,1,52,
  	1,52,3,52,677,8,52,1,53,1,53,1,53,1,54,1,54,1,54,1,55,1,55,1,55,1,55,
  	1,55,1,55,1,55,1,55,1,55,3,55,694,8,55,1,56,1,56,1,57,1,57,1,58,1,58,
  	1,59,1,59,3,59,704,8,59,1,60,1,60,1,61,1,61,1,62,1,62,1,63,1,63,3,63,
  	714,8,63,1,64,1,64,1,65,1,65,1,66,1,66,1,67,1,67,1,67,0,0,68,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,
  	102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,134,0,
  	28,1,0,36,38,1,0,49,54,1,0,55,60,2,0,50,51,61,64,1,0,65,67,1,0,68,69,
  	1,0,70,75,1,0,76,81,1,0,82,86,1,0,87,89,2,0,41,41,92,94,1,0,95,96,1,0,
  	97,101,1,0,102,107,2,0,39,39,108,110,1,0,112,117,1,0,124,125,1,0,127,
  	129,1,0,131,132,1,0,134,135,1,0,136,137,2,0,106,106,134,134,2,0,135,135,
  	138,140,1,0,141,142,1,0,143,144,2,0,39,39,146,147,2,0,135,135,148,151,
  	1,0,153,156,733,0,137,1,0,0,0,2,143,1,0,0,0,4,146,1,0,0,0,6,159,1,0,0,
  	0,8,173,1,0,0,0,10,175,1,0,0,0,12,180,1,0,0,0,14,259,1,0,0,0,16,261,1,
  	0,0,0,18,302,1,0,0,0,20,304,1,0,0,0,22,362,1,0,0,0,24,401,1,0,0,0,26,
  	429,1,0,0,0,28,434,1,0,0,0,30,436,1,0,0,0,32,439,1,0,0,0,34,469,1,0,0,
  	0,36,471,1,0,0,0,38,476,1,0,0,0,40,505,1,0,0,0,42,537,1,0,0,0,44,539,
  	1,0,0,0,46,584,1,0,0,0,48,589,1,0,0,0,50,591,1,0,0,0,52,593,1,0,0,0,54,
  	597,1,0,0,0,56,599,1,0,0,0,58,601,1,0,0,0,60,603,1,0,0,0,62,605,1,0,0,
  	0,64,607,1,0,0,0,66,609,1,0,0,0,68,611,1,0,0,0,70,619,1,0,0,0,72,621,
  	1,0,0,0,74,623,1,0,0,0,76,625,1,0,0,0,78,627,1,0,0,0,80,629,1,0,0,0,82,
  	633,1,0,0,0,84,635,1,0,0,0,86,639,1,0,0,0,88,641,1,0,0,0,90,645,1,0,0,
  	0,92,649,1,0,0,0,94,653,1,0,0,0,96,657,1,0,0,0,98,661,1,0,0,0,100,664,
  	1,0,0,0,102,668,1,0,0,0,104,676,1,0,0,0,106,678,1,0,0,0,108,681,1,0,0,
  	0,110,693,1,0,0,0,112,695,1,0,0,0,114,697,1,0,0,0,116,699,1,0,0,0,118,
  	703,1,0,0,0,120,705,1,0,0,0,122,707,1,0,0,0,124,709,1,0,0,0,126,713,1,
  	0,0,0,128,715,1,0,0,0,130,717,1,0,0,0,132,719,1,0,0,0,134,721,1,0,0,0,
  	136,138,3,2,1,0,137,136,1,0,0,0,138,139,1,0,0,0,139,137,1,0,0,0,139,140,
  	1,0,0,0,140,1,1,0,0,0,141,144,3,4,2,0,142,144,3,6,3,0,143,141,1,0,0,0,
  	143,142,1,0,0,0,144,3,1,0,0,0,145,147,3,134,67,0,146,145,1,0,0,0,146,
  	147,1,0,0,0,147,148,1,0,0,0,148,149,3,6,3,0,149,5,1,0,0,0,150,160,3,24,
  	12,0,151,160,3,22,11,0,152,160,3,32,16,0,153,160,3,26,13,0,154,160,3,
  	40,20,0,155,160,3,42,21,0,156,160,3,12,6,0,157,160,3,16,8,0,158,160,3,
  	46,23,0,159,150,1,0,0,0,159,151,1,0,0,0,159,152,1,0,0,0,159,153,1,0,0,
  	0,159,154,1,0,0,0,159,155,1,0,0,0,159,156,1,0,0,0,159,157,1,0,0,0,159,
  	158,1,0,0,0,160,7,1,0,0,0,161,162,3,128,64,0,162,163,5,1,0,0,163,164,
  	3,54,27,0,164,174,1,0,0,0,165,166,3,128,64,0,166,167,5,2,0,0,167,168,
  	5,164,0,0,168,174,1,0,0,0,169,170,3,128,64,0,170,171,5,2,0,0,171,172,
  	3,58,29,0,172,174,1,0,0,0,173,161,1,0,0,0,173,165,1,0,0,0,173,169,1,0,
  	0,0,174,9,1,0,0,0,175,176,5,3,0,0,176,177,5,164,0,0,177,178,5,4,0,0,178,
  	179,5,165,0,0,179,11,1,0,0,0,180,181,3,14,7,0,181,13,1,0,0,0,182,183,
  	3,94,47,0,183,184,5,5,0,0,184,185,3,114,57,0,185,186,5,6,0,0,186,187,
  	5,167,0,0,187,260,1,0,0,0,188,189,3,114,57,0,189,190,5,7,0,0,190,191,
  	5,160,0,0,191,192,5,8,0,0,192,193,5,167,0,0,193,260,1,0,0,0,194,195,3,
  	116,58,0,195,196,5,9,0,0,196,197,5,160,0,0,197,260,1,0,0,0,198,199,3,
  	118,59,0,199,200,5,7,0,0,200,201,5,160,0,0,201,202,5,10,0,0,202,203,3,
  	82,41,0,203,260,1,0,0,0,204,205,3,96,48,0,205,206,5,5,0,0,206,207,3,114,
  	57,0,207,208,5,6,0,0,208,209,5,167,0,0,209,260,1,0,0,0,210,211,3,88,44,
  	0,211,212,5,11,0,0,212,213,3,128,64,0,213,214,5,7,0,0,214,215,5,158,0,
  	0,215,216,5,10,0,0,216,217,3,82,41,0,217,260,1,0,0,0,218,219,3,88,44,
  	0,219,220,5,11,0,0,220,221,3,128,64,0,221,222,5,7,0,0,222,223,5,158,0,
  	0,223,224,5,11,0,0,224,225,5,5,0,0,225,226,3,84,42,0,226,260,1,0,0,0,
  	227,228,3,112,56,0,228,229,5,7,0,0,229,230,5,159,0,0,230,231,5,12,0,0,
  	231,232,5,165,0,0,232,233,5,13,0,0,233,234,5,167,0,0,234,260,1,0,0,0,
  	235,236,3,116,58,0,236,237,5,9,0,0,237,238,5,159,0,0,238,239,5,12,0,0,
  	239,240,5,167,0,0,240,260,1,0,0,0,241,242,3,96,48,0,242,243,5,5,0,0,243,
  	244,3,98,49,0,244,260,1,0,0,0,245,246,3,96,48,0,246,247,5,5,0,0,247,248,
  	3,102,51,0,248,260,1,0,0,0,249,250,3,96,48,0,250,251,5,5,0,0,251,252,
  	3,84,42,0,252,260,1,0,0,0,253,254,3,112,56,0,254,255,5,14,0,0,255,256,
  	3,66,33,0,256,257,5,13,0,0,257,258,3,68,34,0,258,260,1,0,0,0,259,182,
  	1,0,0,0,259,188,1,0,0,0,259,194,1,0,0,0,259,198,1,0,0,0,259,204,1,0,0,
  	0,259,210,1,0,0,0,259,218,1,0,0,0,259,227,1,0,0,0,259,235,1,0,0,0,259,
  	241,1,0,0,0,259,245,1,0,0,0,259,249,1,0,0,0,259,253,1,0,0,0,260,15,1,
  	0,0,0,261,262,3,18,9,0,262,17,1,0,0,0,263,264,3,112,56,0,264,265,5,7,
  	0,0,265,266,5,160,0,0,266,267,5,13,0,0,267,268,5,167,0,0,268,303,1,0,
  	0,0,269,270,3,116,58,0,270,271,5,9,0,0,271,272,3,60,30,0,272,273,5,15,
  	0,0,273,274,3,20,10,0,274,303,1,0,0,0,275,276,3,116,58,0,276,277,5,16,
  	0,0,277,278,3,62,31,0,278,279,5,7,0,0,279,280,5,158,0,0,280,281,3,20,
  	10,0,281,303,1,0,0,0,282,283,3,116,58,0,283,284,5,9,0,0,284,285,3,86,
  	43,0,285,286,5,15,0,0,286,287,3,20,10,0,287,303,1,0,0,0,288,289,3,116,
  	58,0,289,290,5,9,0,0,290,291,3,86,43,0,291,292,5,157,0,0,292,293,3,20,
  	10,0,293,303,1,0,0,0,294,295,3,76,38,0,295,296,5,7,0,0,296,297,5,165,
  	0,0,297,303,1,0,0,0,298,299,3,74,37,0,299,300,5,7,0,0,300,301,3,64,32,
  	0,301,303,1,0,0,0,302,263,1,0,0,0,302,269,1,0,0,0,302,275,1,0,0,0,302,
  	282,1,0,0,0,302,288,1,0,0,0,302,294,1,0,0,0,302,298,1,0,0,0,303,19,1,
  	0,0,0,304,305,5,12,0,0,305,306,5,167,0,0,306,21,1,0,0,0,307,308,5,17,
  	0,0,308,309,5,158,0,0,309,310,5,18,0,0,310,363,5,167,0,0,311,312,3,128,
  	64,0,312,313,5,7,0,0,313,314,5,158,0,0,314,315,5,4,0,0,315,316,5,165,
  	0,0,316,363,1,0,0,0,317,318,3,128,64,0,318,319,5,7,0,0,319,320,5,161,
  	0,0,320,321,5,4,0,0,321,322,5,165,0,0,322,363,1,0,0,0,323,324,5,17,0,
  	0,324,325,5,157,0,0,325,326,5,18,0,0,326,363,5,167,0,0,327,328,5,19,0,
  	0,328,329,3,86,43,0,329,330,5,20,0,0,330,331,5,167,0,0,331,363,1,0,0,
  	0,332,333,5,19,0,0,333,334,3,86,43,0,334,335,5,157,0,0,335,336,5,8,0,
  	0,336,337,5,167,0,0,337,363,1,0,0,0,338,339,3,128,64,0,339,340,5,7,0,
  	0,340,341,5,157,0,0,341,342,5,4,0,0,342,343,5,165,0,0,343,363,1,0,0,0,
  	344,345,5,21,0,0,345,346,3,86,43,0,346,347,5,22,0,0,347,348,5,8,0,0,348,
  	349,5,167,0,0,349,363,1,0,0,0,350,351,5,21,0,0,351,352,3,86,43,0,352,
  	353,5,157,0,0,353,354,5,8,0,0,354,355,5,167,0,0,355,363,1,0,0,0,356,357,
  	3,128,64,0,357,358,5,23,0,0,358,359,5,157,0,0,359,360,5,4,0,0,360,361,
  	5,165,0,0,361,363,1,0,0,0,362,307,1,0,0,0,362,311,1,0,0,0,362,317,1,0,
  	0,0,362,323,1,0,0,0,362,327,1,0,0,0,362,332,1,0,0,0,362,338,1,0,0,0,362,
  	344,1,0,0,0,362,350,1,0,0,0,362,356,1,0,0,0,363,23,1,0,0,0,364,365,3,
  	104,52,0,365,366,5,10,0,0,366,367,3,10,5,0,367,402,1,0,0,0,368,369,3,
  	8,4,0,369,370,5,4,0,0,370,371,5,165,0,0,371,372,5,5,0,0,372,373,3,104,
  	52,0,373,402,1,0,0,0,374,375,3,92,46,0,375,376,5,11,0,0,376,377,3,8,4,
  	0,377,378,5,11,0,0,378,379,5,5,0,0,379,380,3,104,52,0,380,402,1,0,0,0,
  	381,382,5,24,0,0,382,402,5,166,0,0,383,384,5,25,0,0,384,402,5,166,0,0,
  	385,386,5,26,0,0,386,402,5,166,0,0,387,388,5,27,0,0,388,402,5,165,0,0,
  	389,390,5,28,0,0,390,402,5,165,0,0,391,392,5,29,0,0,392,402,5,165,0,0,
  	393,394,5,30,0,0,394,395,5,165,0,0,395,396,5,31,0,0,396,402,3,56,28,0,
  	397,398,5,30,0,0,398,399,5,165,0,0,399,400,5,31,0,0,400,402,3,58,29,0,
  	401,364,1,0,0,0,401,368,1,0,0,0,401,374,1,0,0,0,401,381,1,0,0,0,401,383,
  	1,0,0,0,401,385,1,0,0,0,401,387,1,0,0,0,401,389,1,0,0,0,401,391,1,0,0,
  	0,401,393,1,0,0,0,401,397,1,0,0,0,402,25,1,0,0,0,403,404,3,132,66,0,404,
  	405,5,169,0,0,405,406,5,12,0,0,406,407,5,166,0,0,407,408,5,13,0,0,408,
  	409,5,165,0,0,409,430,1,0,0,0,410,411,5,32,0,0,411,412,5,169,0,0,412,
  	413,5,33,0,0,413,414,5,166,0,0,414,415,5,5,0,0,415,416,3,132,66,0,416,
  	418,5,163,0,0,417,419,3,30,15,0,418,417,1,0,0,0,418,419,1,0,0,0,419,430,
  	1,0,0,0,420,421,3,90,45,0,421,422,5,11,0,0,422,423,5,32,0,0,423,424,5,
  	169,0,0,424,425,5,11,0,0,425,426,5,5,0,0,426,427,3,132,66,0,427,428,5,
  	163,0,0,428,430,1,0,0,0,429,403,1,0,0,0,429,410,1,0,0,0,429,420,1,0,0,
  	0,430,27,1,0,0,0,431,432,5,32,0,0,432,435,5,169,0,0,433,435,5,34,0,0,
  	434,431,1,0,0,0,434,433,1,0,0,0,435,29,1,0,0,0,436,437,5,13,0,0,437,438,
  	5,165,0,0,438,31,1,0,0,0,439,440,3,34,17,0,440,33,1,0,0,0,441,442,3,130,
  	65,0,442,443,5,169,0,0,443,444,5,12,0,0,444,445,5,166,0,0,445,446,5,13,
  	0,0,446,447,5,166,0,0,447,470,1,0,0,0,448,449,5,32,0,0,449,450,5,169,
  	0,0,450,451,5,33,0,0,451,452,5,166,0,0,452,453,5,5,0,0,453,470,3,36,18,
  	0,454,455,3,90,45,0,455,456,5,11,0,0,456,457,5,32,0,0,457,458,5,169,0,
  	0,458,459,5,11,0,0,459,460,5,5,0,0,460,461,3,36,18,0,461,470,1,0,0,0,
  	462,463,3,130,65,0,463,464,5,169,0,0,464,465,5,13,0,0,465,466,5,166,0,
  	0,466,467,5,11,0,0,467,468,3,38,19,0,468,470,1,0,0,0,469,441,1,0,0,0,
  	469,448,1,0,0,0,469,454,1,0,0,0,469,462,1,0,0,0,470,35,1,0,0,0,471,472,
  	3,130,65,0,472,473,5,163,0,0,473,474,5,13,0,0,474,475,5,166,0,0,475,37,
  	1,0,0,0,476,477,5,35,0,0,477,478,7,0,0,0,478,479,5,39,0,0,479,480,5,163,
  	0,0,480,481,5,33,0,0,481,482,5,166,0,0,482,39,1,0,0,0,483,484,5,32,0,
  	0,484,485,5,169,0,0,485,486,5,33,0,0,486,487,5,166,0,0,487,488,5,11,0,
  	0,488,489,3,132,66,0,489,490,5,163,0,0,490,491,5,40,0,0,491,492,3,92,
  	46,0,492,506,1,0,0,0,493,494,5,32,0,0,494,495,5,169,0,0,495,496,5,33,
  	0,0,496,497,5,166,0,0,497,498,5,11,0,0,498,499,3,132,66,0,499,500,5,163,
  	0,0,500,501,5,40,0,0,501,502,3,130,65,0,502,503,5,163,0,0,503,504,5,41,
  	0,0,504,506,1,0,0,0,505,483,1,0,0,0,505,493,1,0,0,0,506,41,1,0,0,0,507,
  	508,3,132,66,0,508,509,5,169,0,0,509,538,1,0,0,0,510,511,3,116,58,0,511,
  	512,5,9,0,0,512,513,5,162,0,0,513,538,1,0,0,0,514,515,3,118,59,0,515,
  	516,5,162,0,0,516,517,5,10,0,0,517,518,3,82,41,0,518,538,1,0,0,0,519,
  	520,3,130,65,0,520,521,5,169,0,0,521,522,5,13,0,0,522,523,5,166,0,0,523,
  	538,1,0,0,0,524,525,5,32,0,0,525,526,3,44,22,0,526,527,5,5,0,0,527,528,
  	3,130,65,0,528,529,5,163,0,0,529,538,1,0,0,0,530,531,3,90,45,0,531,532,
  	5,42,0,0,532,533,3,44,22,0,533,534,5,40,0,0,534,535,3,130,65,0,535,536,
  	5,163,0,0,536,538,1,0,0,0,537,507,1,0,0,0,537,510,1,0,0,0,537,514,1,0,
  	0,0,537,519,1,0,0,0,537,524,1,0,0,0,537,530,1,0,0,0,538,43,1,0,0,0,539,
  	540,5,169,0,0,540,45,1,0,0,0,541,542,3,78,39,0,542,543,5,43,0,0,543,544,
  	3,52,26,0,544,585,1,0,0,0,545,546,3,80,40,0,546,547,5,169,0,0,547,548,
  	5,33,0,0,548,549,3,70,35,0,549,550,5,44,0,0,550,551,5,163,0,0,551,552,
  	5,10,0,0,552,553,3,52,26,0,553,585,1,0,0,0,554,555,3,80,40,0,555,556,
  	5,169,0,0,556,557,5,33,0,0,557,558,5,166,0,0,558,559,5,45,0,0,559,560,
  	5,163,0,0,560,561,5,46,0,0,561,585,1,0,0,0,562,563,3,80,40,0,563,564,
  	5,169,0,0,564,565,5,33,0,0,565,566,5,166,0,0,566,567,5,44,0,0,567,568,
  	5,163,0,0,568,569,5,10,0,0,569,570,5,169,0,0,570,571,5,33,0,0,571,572,
  	5,166,0,0,572,585,1,0,0,0,573,574,3,80,40,0,574,575,5,169,0,0,575,576,
  	5,33,0,0,576,577,5,166,0,0,577,578,5,5,0,0,578,579,3,130,65,0,579,580,
  	5,163,0,0,580,581,5,10,0,0,581,582,5,163,0,0,582,583,3,68,34,0,583,585,
  	1,0,0,0,584,541,1,0,0,0,584,545,1,0,0,0,584,554,1,0,0,0,584,562,1,0,0,
  	0,584,573,1,0,0,0,585,47,1,0,0,0,586,590,5,47,0,0,587,588,5,48,0,0,588,
  	590,3,50,25,0,589,586,1,0,0,0,589,587,1,0,0,0,590,49,1,0,0,0,591,592,
  	7,1,0,0,592,51,1,0,0,0,593,594,3,48,24,0,594,595,5,4,0,0,595,596,5,165,
  	0,0,596,53,1,0,0,0,597,598,7,2,0,0,598,55,1,0,0,0,599,600,7,3,0,0,600,
  	57,1,0,0,0,601,602,7,4,0,0,602,59,1,0,0,0,603,604,7,5,0,0,604,61,1,0,
  	0,0,605,606,7,6,0,0,606,63,1,0,0,0,607,608,7,7,0,0,608,65,1,0,0,0,609,
  	610,7,8,0,0,610,67,1,0,0,0,611,612,7,9,0,0,612,69,1,0,0,0,613,614,3,72,
  	36,0,614,615,5,90,0,0,615,620,1,0,0,0,616,617,3,72,36,0,617,618,5,91,
  	0,0,618,620,1,0,0,0,619,613,1,0,0,0,619,616,1,0,0,0,620,71,1,0,0,0,621,
  	622,7,10,0,0,622,73,1,0,0,0,623,624,7,11,0,0,624,75,1,0,0,0,625,626,7,
  	12,0,0,626,77,1,0,0,0,627,628,7,13,0,0,628,79,1,0,0,0,629,630,7,14,0,
  	0,630,81,1,0,0,0,631,634,5,111,0,0,632,634,3,10,5,0,633,631,1,0,0,0,633,
  	632,1,0,0,0,634,83,1,0,0,0,635,636,3,114,57,0,636,637,5,6,0,0,637,638,
  	5,167,0,0,638,85,1,0,0,0,639,640,7,15,0,0,640,87,1,0,0,0,641,642,3,124,
  	62,0,642,643,5,13,0,0,643,644,5,167,0,0,644,89,1,0,0,0,645,646,3,124,
  	62,0,646,647,5,13,0,0,647,648,5,166,0,0,648,91,1,0,0,0,649,650,3,124,
  	62,0,650,651,5,13,0,0,651,652,5,165,0,0,652,93,1,0,0,0,653,654,3,120,
  	60,0,654,655,5,7,0,0,655,656,5,158,0,0,656,95,1,0,0,0,657,658,3,94,47,
  	0,658,659,5,12,0,0,659,660,5,167,0,0,660,97,1,0,0,0,661,662,3,118,59,
  	0,662,663,5,118,0,0,663,99,1,0,0,0,664,665,3,118,59,0,665,666,5,119,0,
  	0,666,667,5,169,0,0,667,101,1,0,0,0,668,669,3,118,59,0,669,670,5,119,
  	0,0,670,671,5,169,0,0,671,672,5,33,0,0,672,673,5,166,0,0,673,103,1,0,
  	0,0,674,677,3,106,53,0,675,677,3,108,54,0,676,674,1,0,0,0,676,675,1,0,
  	0,0,677,105,1,0,0,0,678,679,5,120,0,0,679,680,5,170,0,0,680,107,1,0,0,
  	0,681,682,3,122,61,0,682,683,3,110,55,0,683,109,1,0,0,0,684,694,5,121,
  	0,0,685,694,5,122,0,0,686,687,5,123,0,0,687,694,7,16,0,0,688,689,5,126,
  	0,0,689,694,7,17,0,0,690,691,5,130,0,0,691,694,7,18,0,0,692,694,5,133,
  	0,0,693,684,1,0,0,0,693,685,1,0,0,0,693,686,1,0,0,0,693,688,1,0,0,0,693,
  	690,1,0,0,0,693,692,1,0,0,0,694,111,1,0,0,0,695,696,7,19,0,0,696,113,
  	1,0,0,0,697,698,7,20,0,0,698,115,1,0,0,0,699,700,7,21,0,0,700,117,1,0,
  	0,0,701,704,3,116,58,0,702,704,5,104,0,0,703,701,1,0,0,0,703,702,1,0,
  	0,0,704,119,1,0,0,0,705,706,7,22,0,0,706,121,1,0,0,0,707,708,7,23,0,0,
  	708,123,1,0,0,0,709,710,7,24,0,0,710,125,1,0,0,0,711,714,3,124,62,0,712,
  	714,5,145,0,0,713,711,1,0,0,0,713,712,1,0,0,0,714,127,1,0,0,0,715,716,
  	7,25,0,0,716,129,1,0,0,0,717,718,7,26,0,0,718,131,1,0,0,0,719,720,5,152,
  	0,0,720,133,1,0,0,0,721,722,7,27,0,0,722,135,1,0,0,0,23,139,143,146,159,
  	173,259,302,362,401,418,429,434,469,505,537,584,589,619,633,676,693,703,
  	713
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gpsrParserStaticData = staticData.release();
}

}

gpsrParser::gpsrParser(TokenStream *input) : gpsrParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

gpsrParser::gpsrParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  gpsrParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gpsrParserStaticData->atn, gpsrParserStaticData->decisionToDFA, gpsrParserStaticData->sharedContextCache, options);
}

gpsrParser::~gpsrParser() {
  delete _interpreter;
}

const atn::ATN& gpsrParser::getATN() const {
  return *gpsrParserStaticData->atn;
}

std::string gpsrParser::getGrammarFileName() const {
  return "gpsr.g4";
}

const std::vector<std::string>& gpsrParser::getRuleNames() const {
  return gpsrParserStaticData->ruleNames;
}

const dfa::Vocabulary& gpsrParser::getVocabulary() const {
  return gpsrParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gpsrParser::getSerializedATN() const {
  return gpsrParserStaticData->serializedATN;
}


//----------------- InstructionContext ------------------------------------------------------------------

gpsrParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gpsrParser::MainSentenceContext *> gpsrParser::InstructionContext::mainSentence() {
  return getRuleContexts<gpsrParser::MainSentenceContext>();
}

gpsrParser::MainSentenceContext* gpsrParser::InstructionContext::mainSentence(size_t i) {
  return getRuleContext<gpsrParser::MainSentenceContext>(i);
}


size_t gpsrParser::InstructionContext::getRuleIndex() const {
  return gpsrParser::RuleInstruction;
}


std::any gpsrParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::InstructionContext* gpsrParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 0, gpsrParser::RuleInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(136);
      mainSentence();
      setState(139); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 556184240128) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & 4610559568798351359) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainSentenceContext ------------------------------------------------------------------

gpsrParser::MainSentenceContext::MainSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::PmainContext* gpsrParser::MainSentenceContext::pmain() {
  return getRuleContext<gpsrParser::PmainContext>(0);
}

gpsrParser::MainContext* gpsrParser::MainSentenceContext::main() {
  return getRuleContext<gpsrParser::MainContext>(0);
}


size_t gpsrParser::MainSentenceContext::getRuleIndex() const {
  return gpsrParser::RuleMainSentence;
}


std::any gpsrParser::MainSentenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitMainSentence(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::MainSentenceContext* gpsrParser::mainSentence() {
  MainSentenceContext *_localctx = _tracker.createInstance<MainSentenceContext>(_ctx, getState());
  enterRule(_localctx, 2, gpsrParser::RuleMainSentence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(141);
      pmain();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      main();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PmainContext ------------------------------------------------------------------

gpsrParser::PmainContext::PmainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::MainContext* gpsrParser::PmainContext::main() {
  return getRuleContext<gpsrParser::MainContext>(0);
}

gpsrParser::PoliteContext* gpsrParser::PmainContext::polite() {
  return getRuleContext<gpsrParser::PoliteContext>(0);
}


size_t gpsrParser::PmainContext::getRuleIndex() const {
  return gpsrParser::RulePmain;
}


std::any gpsrParser::PmainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPmain(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PmainContext* gpsrParser::pmain() {
  PmainContext *_localctx = _tracker.createInstance<PmainContext>(_ctx, getState());
  enterRule(_localctx, 4, gpsrParser::RulePmain);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 153) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 153)) & 15) != 0)) {
      setState(145);
      polite();
    }
    setState(148);
    main();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

gpsrParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::FndpplContext* gpsrParser::MainContext::fndppl() {
  return getRuleContext<gpsrParser::FndpplContext>(0);
}

gpsrParser::FndobjContext* gpsrParser::MainContext::fndobj() {
  return getRuleContext<gpsrParser::FndobjContext>(0);
}

gpsrParser::GuideContext* gpsrParser::MainContext::guide() {
  return getRuleContext<gpsrParser::GuideContext>(0);
}

gpsrParser::FollowContext* gpsrParser::MainContext::follow() {
  return getRuleContext<gpsrParser::FollowContext>(0);
}

gpsrParser::FollowoutContext* gpsrParser::MainContext::followout() {
  return getRuleContext<gpsrParser::FollowoutContext>(0);
}

gpsrParser::IncompleteContext* gpsrParser::MainContext::incomplete() {
  return getRuleContext<gpsrParser::IncompleteContext>(0);
}

gpsrParser::ManContext* gpsrParser::MainContext::man() {
  return getRuleContext<gpsrParser::ManContext>(0);
}

gpsrParser::ComplexmanContext* gpsrParser::MainContext::complexman() {
  return getRuleContext<gpsrParser::ComplexmanContext>(0);
}

gpsrParser::PartyhostContext* gpsrParser::MainContext::partyhost() {
  return getRuleContext<gpsrParser::PartyhostContext>(0);
}


size_t gpsrParser::MainContext::getRuleIndex() const {
  return gpsrParser::RuleMain;
}


std::any gpsrParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::MainContext* gpsrParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 6, gpsrParser::RuleMain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      fndppl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(151);
      fndobj();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(152);
      guide();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(153);
      follow();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(154);
      followout();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(155);
      incomplete();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(156);
      man();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(157);
      complexman();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(158);
      partyhost();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FindpContext ------------------------------------------------------------------

gpsrParser::FindpContext::FindpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbfindContext* gpsrParser::FindpContext::vbfind() {
  return getRuleContext<gpsrParser::VbfindContext>(0);
}

gpsrParser::PgendersContext* gpsrParser::FindpContext::pgenders() {
  return getRuleContext<gpsrParser::PgendersContext>(0);
}

tree::TerminalNode* gpsrParser::FindpContext::Gesture() {
  return getToken(gpsrParser::Gesture, 0);
}

gpsrParser::PoseContext* gpsrParser::FindpContext::pose() {
  return getRuleContext<gpsrParser::PoseContext>(0);
}


size_t gpsrParser::FindpContext::getRuleIndex() const {
  return gpsrParser::RuleFindp;
}


std::any gpsrParser::FindpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFindp(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FindpContext* gpsrParser::findp() {
  FindpContext *_localctx = _tracker.createInstance<FindpContext>(_ctx, getState());
  enterRule(_localctx, 8, gpsrParser::RuleFindp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(161);
      vbfind();
      setState(162);
      match(gpsrParser::T__0);
      setState(163);
      pgenders();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(165);
      vbfind();
      setState(166);
      match(gpsrParser::T__1);
      setState(167);
      match(gpsrParser::Gesture);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(169);
      vbfind();
      setState(170);
      match(gpsrParser::T__1);
      setState(171);
      pose();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhoWhereContext ------------------------------------------------------------------

gpsrParser::WhoWhereContext::WhoWhereContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::WhoWhereContext::Gesture() {
  return getToken(gpsrParser::Gesture, 0);
}

tree::TerminalNode* gpsrParser::WhoWhereContext::Room() {
  return getToken(gpsrParser::Room, 0);
}


size_t gpsrParser::WhoWhereContext::getRuleIndex() const {
  return gpsrParser::RuleWhoWhere;
}


std::any gpsrParser::WhoWhereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitWhoWhere(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::WhoWhereContext* gpsrParser::whoWhere() {
  WhoWhereContext *_localctx = _tracker.createInstance<WhoWhereContext>(_ctx, getState());
  enterRule(_localctx, 10, gpsrParser::RuleWhoWhere);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(gpsrParser::T__2);
    setState(176);
    match(gpsrParser::Gesture);
    setState(177);
    match(gpsrParser::T__3);
    setState(178);
    match(gpsrParser::Room);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ManContext ------------------------------------------------------------------

gpsrParser::ManContext::ManContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::DeliverContext* gpsrParser::ManContext::deliver() {
  return getRuleContext<gpsrParser::DeliverContext>(0);
}


size_t gpsrParser::ManContext::getRuleIndex() const {
  return gpsrParser::RuleMan;
}


std::any gpsrParser::ManContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitMan(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::ManContext* gpsrParser::man() {
  ManContext *_localctx = _tracker.createInstance<ManContext>(_ctx, getState());
  enterRule(_localctx, 12, gpsrParser::RuleMan);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    deliver();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeliverContext ------------------------------------------------------------------

gpsrParser::DeliverContext::DeliverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::TakeContext* gpsrParser::DeliverContext::take() {
  return getRuleContext<gpsrParser::TakeContext>(0);
}

gpsrParser::VbplaceContext* gpsrParser::DeliverContext::vbplace() {
  return getRuleContext<gpsrParser::VbplaceContext>(0);
}

tree::TerminalNode* gpsrParser::DeliverContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}

tree::TerminalNode* gpsrParser::DeliverContext::Object_known() {
  return getToken(gpsrParser::Object_known, 0);
}

gpsrParser::VbbringContext* gpsrParser::DeliverContext::vbbring() {
  return getRuleContext<gpsrParser::VbbringContext>(0);
}

gpsrParser::VbdeliverContext* gpsrParser::DeliverContext::vbdeliver() {
  return getRuleContext<gpsrParser::VbdeliverContext>(0);
}

gpsrParser::SomeoneContext* gpsrParser::DeliverContext::someone() {
  return getRuleContext<gpsrParser::SomeoneContext>(0);
}

gpsrParser::TakefromContext* gpsrParser::DeliverContext::takefrom() {
  return getRuleContext<gpsrParser::TakefromContext>(0);
}

gpsrParser::GoplaceContext* gpsrParser::DeliverContext::goplace() {
  return getRuleContext<gpsrParser::GoplaceContext>(0);
}

gpsrParser::VbfindContext* gpsrParser::DeliverContext::vbfind() {
  return getRuleContext<gpsrParser::VbfindContext>(0);
}

tree::TerminalNode* gpsrParser::DeliverContext::Object() {
  return getToken(gpsrParser::Object, 0);
}

gpsrParser::PlaceContext* gpsrParser::DeliverContext::place() {
  return getRuleContext<gpsrParser::PlaceContext>(0);
}

gpsrParser::VbbtakeContext* gpsrParser::DeliverContext::vbbtake() {
  return getRuleContext<gpsrParser::VbbtakeContext>(0);
}

tree::TerminalNode* gpsrParser::DeliverContext::Object_alike() {
  return getToken(gpsrParser::Object_alike, 0);
}

tree::TerminalNode* gpsrParser::DeliverContext::Room() {
  return getToken(gpsrParser::Room, 0);
}

gpsrParser::DelivmeContext* gpsrParser::DeliverContext::delivme() {
  return getRuleContext<gpsrParser::DelivmeContext>(0);
}

gpsrParser::DelivatContext* gpsrParser::DeliverContext::delivat() {
  return getRuleContext<gpsrParser::DelivatContext>(0);
}

gpsrParser::LuggageContext* gpsrParser::DeliverContext::luggage() {
  return getRuleContext<gpsrParser::LuggageContext>(0);
}

gpsrParser::TaxiContext* gpsrParser::DeliverContext::taxi() {
  return getRuleContext<gpsrParser::TaxiContext>(0);
}


size_t gpsrParser::DeliverContext::getRuleIndex() const {
  return gpsrParser::RuleDeliver;
}


std::any gpsrParser::DeliverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitDeliver(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::DeliverContext* gpsrParser::deliver() {
  DeliverContext *_localctx = _tracker.createInstance<DeliverContext>(_ctx, getState());
  enterRule(_localctx, 14, gpsrParser::RuleDeliver);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(182);
      take();
      setState(183);
      match(gpsrParser::T__4);
      setState(184);
      vbplace();
      setState(185);
      match(gpsrParser::T__5);
      setState(186);
      match(gpsrParser::Placement);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(188);
      vbplace();
      setState(189);
      match(gpsrParser::T__6);
      setState(190);
      match(gpsrParser::Object_known);
      setState(191);
      match(gpsrParser::T__7);
      setState(192);
      match(gpsrParser::Placement);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(194);
      vbbring();
      setState(195);
      match(gpsrParser::T__8);
      setState(196);
      match(gpsrParser::Object_known);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(198);
      vbdeliver();
      setState(199);
      match(gpsrParser::T__6);
      setState(200);
      match(gpsrParser::Object_known);
      setState(201);
      match(gpsrParser::T__9);
      setState(202);
      someone();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(204);
      takefrom();
      setState(205);
      match(gpsrParser::T__4);
      setState(206);
      vbplace();
      setState(207);
      match(gpsrParser::T__5);
      setState(208);
      match(gpsrParser::Placement);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(210);
      goplace();
      setState(211);
      match(gpsrParser::T__10);
      setState(212);
      vbfind();
      setState(213);
      match(gpsrParser::T__6);
      setState(214);
      match(gpsrParser::Object);
      setState(215);
      match(gpsrParser::T__9);
      setState(216);
      someone();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(218);
      goplace();
      setState(219);
      match(gpsrParser::T__10);
      setState(220);
      vbfind();
      setState(221);
      match(gpsrParser::T__6);
      setState(222);
      match(gpsrParser::Object);
      setState(223);
      match(gpsrParser::T__10);
      setState(224);
      match(gpsrParser::T__4);
      setState(225);
      place();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(227);
      vbbtake();
      setState(228);
      match(gpsrParser::T__6);
      setState(229);
      match(gpsrParser::Object_alike);
      setState(230);
      match(gpsrParser::T__11);
      setState(231);
      match(gpsrParser::Room);
      setState(232);
      match(gpsrParser::T__12);
      setState(233);
      match(gpsrParser::Placement);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(235);
      vbbring();
      setState(236);
      match(gpsrParser::T__8);
      setState(237);
      match(gpsrParser::Object_alike);
      setState(238);
      match(gpsrParser::T__11);
      setState(239);
      match(gpsrParser::Placement);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(241);
      takefrom();
      setState(242);
      match(gpsrParser::T__4);
      setState(243);
      delivme();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(245);
      takefrom();
      setState(246);
      match(gpsrParser::T__4);
      setState(247);
      delivat();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(249);
      takefrom();
      setState(250);
      match(gpsrParser::T__4);
      setState(251);
      place();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(253);
      vbbtake();
      setState(254);
      match(gpsrParser::T__13);
      setState(255);
      luggage();
      setState(256);
      match(gpsrParser::T__12);
      setState(257);
      taxi();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComplexmanContext ------------------------------------------------------------------

gpsrParser::ComplexmanContext::ComplexmanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::CmancmdContext* gpsrParser::ComplexmanContext::cmancmd() {
  return getRuleContext<gpsrParser::CmancmdContext>(0);
}


size_t gpsrParser::ComplexmanContext::getRuleIndex() const {
  return gpsrParser::RuleComplexman;
}


std::any gpsrParser::ComplexmanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitComplexman(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::ComplexmanContext* gpsrParser::complexman() {
  ComplexmanContext *_localctx = _tracker.createInstance<ComplexmanContext>(_ctx, getState());
  enterRule(_localctx, 16, gpsrParser::RuleComplexman);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    cmancmd();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmancmdContext ------------------------------------------------------------------

gpsrParser::CmancmdContext::CmancmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbbtakeContext* gpsrParser::CmancmdContext::vbbtake() {
  return getRuleContext<gpsrParser::VbbtakeContext>(0);
}

tree::TerminalNode* gpsrParser::CmancmdContext::Object_known() {
  return getToken(gpsrParser::Object_known, 0);
}

tree::TerminalNode* gpsrParser::CmancmdContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}

gpsrParser::VbbringContext* gpsrParser::CmancmdContext::vbbring() {
  return getRuleContext<gpsrParser::VbbringContext>(0);
}

gpsrParser::AbsposContext* gpsrParser::CmancmdContext::abspos() {
  return getRuleContext<gpsrParser::AbsposContext>(0);
}

gpsrParser::CmanobjsrcContext* gpsrParser::CmancmdContext::cmanobjsrc() {
  return getRuleContext<gpsrParser::CmanobjsrcContext>(0);
}

gpsrParser::RelposContext* gpsrParser::CmancmdContext::relpos() {
  return getRuleContext<gpsrParser::RelposContext>(0);
}

tree::TerminalNode* gpsrParser::CmancmdContext::Object() {
  return getToken(gpsrParser::Object, 0);
}

gpsrParser::OpropContext* gpsrParser::CmancmdContext::oprop() {
  return getRuleContext<gpsrParser::OpropContext>(0);
}

tree::TerminalNode* gpsrParser::CmancmdContext::Category() {
  return getToken(gpsrParser::Category, 0);
}

gpsrParser::VbcleanupContext* gpsrParser::CmancmdContext::vbcleanup() {
  return getRuleContext<gpsrParser::VbcleanupContext>(0);
}

tree::TerminalNode* gpsrParser::CmancmdContext::Room() {
  return getToken(gpsrParser::Room, 0);
}

gpsrParser::VbtakeoutContext* gpsrParser::CmancmdContext::vbtakeout() {
  return getRuleContext<gpsrParser::VbtakeoutContext>(0);
}

gpsrParser::GarbageContext* gpsrParser::CmancmdContext::garbage() {
  return getRuleContext<gpsrParser::GarbageContext>(0);
}


size_t gpsrParser::CmancmdContext::getRuleIndex() const {
  return gpsrParser::RuleCmancmd;
}


std::any gpsrParser::CmancmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitCmancmd(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::CmancmdContext* gpsrParser::cmancmd() {
  CmancmdContext *_localctx = _tracker.createInstance<CmancmdContext>(_ctx, getState());
  enterRule(_localctx, 18, gpsrParser::RuleCmancmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(302);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(263);
      vbbtake();
      setState(264);
      match(gpsrParser::T__6);
      setState(265);
      match(gpsrParser::Object_known);
      setState(266);
      match(gpsrParser::T__12);
      setState(267);
      match(gpsrParser::Placement);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      vbbring();
      setState(270);
      match(gpsrParser::T__8);
      setState(271);
      abspos();
      setState(272);
      match(gpsrParser::T__14);
      setState(273);
      cmanobjsrc();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(275);
      vbbring();
      setState(276);
      match(gpsrParser::T__15);
      setState(277);
      relpos();
      setState(278);
      match(gpsrParser::T__6);
      setState(279);
      match(gpsrParser::Object);
      setState(280);
      cmanobjsrc();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(282);
      vbbring();
      setState(283);
      match(gpsrParser::T__8);
      setState(284);
      oprop();
      setState(285);
      match(gpsrParser::T__14);
      setState(286);
      cmanobjsrc();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(288);
      vbbring();
      setState(289);
      match(gpsrParser::T__8);
      setState(290);
      oprop();
      setState(291);
      match(gpsrParser::Category);
      setState(292);
      cmanobjsrc();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(294);
      vbcleanup();
      setState(295);
      match(gpsrParser::T__6);
      setState(296);
      match(gpsrParser::Room);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(298);
      vbtakeout();
      setState(299);
      match(gpsrParser::T__6);
      setState(300);
      garbage();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmanobjsrcContext ------------------------------------------------------------------

gpsrParser::CmanobjsrcContext::CmanobjsrcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::CmanobjsrcContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}


size_t gpsrParser::CmanobjsrcContext::getRuleIndex() const {
  return gpsrParser::RuleCmanobjsrc;
}


std::any gpsrParser::CmanobjsrcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitCmanobjsrc(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::CmanobjsrcContext* gpsrParser::cmanobjsrc() {
  CmanobjsrcContext *_localctx = _tracker.createInstance<CmanobjsrcContext>(_ctx, getState());
  enterRule(_localctx, 20, gpsrParser::RuleCmanobjsrc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(gpsrParser::T__11);
    setState(305);
    match(gpsrParser::Placement);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FndobjContext ------------------------------------------------------------------

gpsrParser::FndobjContext::FndobjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::FndobjContext::Object() {
  return getToken(gpsrParser::Object, 0);
}

tree::TerminalNode* gpsrParser::FndobjContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}

gpsrParser::VbfindContext* gpsrParser::FndobjContext::vbfind() {
  return getRuleContext<gpsrParser::VbfindContext>(0);
}

tree::TerminalNode* gpsrParser::FndobjContext::Room() {
  return getToken(gpsrParser::Room, 0);
}

tree::TerminalNode* gpsrParser::FndobjContext::Object_alike_obfuscated() {
  return getToken(gpsrParser::Object_alike_obfuscated, 0);
}

tree::TerminalNode* gpsrParser::FndobjContext::Category() {
  return getToken(gpsrParser::Category, 0);
}

gpsrParser::OpropContext* gpsrParser::FndobjContext::oprop() {
  return getRuleContext<gpsrParser::OpropContext>(0);
}


size_t gpsrParser::FndobjContext::getRuleIndex() const {
  return gpsrParser::RuleFndobj;
}


std::any gpsrParser::FndobjContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFndobj(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FndobjContext* gpsrParser::fndobj() {
  FndobjContext *_localctx = _tracker.createInstance<FndobjContext>(_ctx, getState());
  enterRule(_localctx, 22, gpsrParser::RuleFndobj);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(362);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(307);
      match(gpsrParser::T__16);
      setState(308);
      match(gpsrParser::Object);
      setState(309);
      match(gpsrParser::T__17);
      setState(310);
      match(gpsrParser::Placement);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(311);
      vbfind();
      setState(312);
      match(gpsrParser::T__6);
      setState(313);
      match(gpsrParser::Object);
      setState(314);
      match(gpsrParser::T__3);
      setState(315);
      match(gpsrParser::Room);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(317);
      vbfind();
      setState(318);
      match(gpsrParser::T__6);
      setState(319);
      match(gpsrParser::Object_alike_obfuscated);
      setState(320);
      match(gpsrParser::T__3);
      setState(321);
      match(gpsrParser::Room);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(323);
      match(gpsrParser::T__16);
      setState(324);
      match(gpsrParser::Category);
      setState(325);
      match(gpsrParser::T__17);
      setState(326);
      match(gpsrParser::Placement);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(327);
      match(gpsrParser::T__18);
      setState(328);
      oprop();
      setState(329);
      match(gpsrParser::T__19);
      setState(330);
      match(gpsrParser::Placement);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(332);
      match(gpsrParser::T__18);
      setState(333);
      oprop();
      setState(334);
      match(gpsrParser::Category);
      setState(335);
      match(gpsrParser::T__7);
      setState(336);
      match(gpsrParser::Placement);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(338);
      vbfind();
      setState(339);
      match(gpsrParser::T__6);
      setState(340);
      match(gpsrParser::Category);
      setState(341);
      match(gpsrParser::T__3);
      setState(342);
      match(gpsrParser::Room);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(344);
      match(gpsrParser::T__20);
      setState(345);
      oprop();
      setState(346);
      match(gpsrParser::T__21);
      setState(347);
      match(gpsrParser::T__7);
      setState(348);
      match(gpsrParser::Placement);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(350);
      match(gpsrParser::T__20);
      setState(351);
      oprop();
      setState(352);
      match(gpsrParser::Category);
      setState(353);
      match(gpsrParser::T__7);
      setState(354);
      match(gpsrParser::Placement);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(356);
      vbfind();
      setState(357);
      match(gpsrParser::T__22);
      setState(358);
      match(gpsrParser::Category);
      setState(359);
      match(gpsrParser::T__3);
      setState(360);
      match(gpsrParser::Room);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FndpplContext ------------------------------------------------------------------

gpsrParser::FndpplContext::FndpplContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::TalkContext* gpsrParser::FndpplContext::talk() {
  return getRuleContext<gpsrParser::TalkContext>(0);
}

gpsrParser::WhoWhereContext* gpsrParser::FndpplContext::whoWhere() {
  return getRuleContext<gpsrParser::WhoWhereContext>(0);
}

gpsrParser::FindpContext* gpsrParser::FndpplContext::findp() {
  return getRuleContext<gpsrParser::FindpContext>(0);
}

tree::TerminalNode* gpsrParser::FndpplContext::Room() {
  return getToken(gpsrParser::Room, 0);
}

gpsrParser::GoroomContext* gpsrParser::FndpplContext::goroom() {
  return getRuleContext<gpsrParser::GoroomContext>(0);
}

tree::TerminalNode* gpsrParser::FndpplContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}

gpsrParser::PgenderpContext* gpsrParser::FndpplContext::pgenderp() {
  return getRuleContext<gpsrParser::PgenderpContext>(0);
}

gpsrParser::PoseContext* gpsrParser::FndpplContext::pose() {
  return getRuleContext<gpsrParser::PoseContext>(0);
}


size_t gpsrParser::FndpplContext::getRuleIndex() const {
  return gpsrParser::RuleFndppl;
}


std::any gpsrParser::FndpplContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFndppl(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FndpplContext* gpsrParser::fndppl() {
  FndpplContext *_localctx = _tracker.createInstance<FndpplContext>(_ctx, getState());
  enterRule(_localctx, 24, gpsrParser::RuleFndppl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(401);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(364);
      talk();
      setState(365);
      match(gpsrParser::T__9);
      setState(366);
      whoWhere();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(368);
      findp();
      setState(369);
      match(gpsrParser::T__3);
      setState(370);
      match(gpsrParser::Room);
      setState(371);
      match(gpsrParser::T__4);
      setState(372);
      talk();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(374);
      goroom();
      setState(375);
      match(gpsrParser::T__10);
      setState(376);
      findp();
      setState(377);
      match(gpsrParser::T__10);
      setState(378);
      match(gpsrParser::T__4);
      setState(379);
      talk();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(381);
      match(gpsrParser::T__23);
      setState(382);
      match(gpsrParser::Beacon);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(383);
      match(gpsrParser::T__24);
      setState(384);
      match(gpsrParser::Beacon);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(385);
      match(gpsrParser::T__25);
      setState(386);
      match(gpsrParser::Beacon);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(387);
      match(gpsrParser::T__26);
      setState(388);
      match(gpsrParser::Room);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(389);
      match(gpsrParser::T__27);
      setState(390);
      match(gpsrParser::Room);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(391);
      match(gpsrParser::T__28);
      setState(392);
      match(gpsrParser::Room);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(393);
      match(gpsrParser::T__29);
      setState(394);
      match(gpsrParser::Room);
      setState(395);
      match(gpsrParser::T__30);
      setState(396);
      pgenderp();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(397);
      match(gpsrParser::T__29);
      setState(398);
      match(gpsrParser::Room);
      setState(399);
      match(gpsrParser::T__30);
      setState(400);
      pose();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FollowContext ------------------------------------------------------------------

gpsrParser::FollowContext::FollowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbfollowContext* gpsrParser::FollowContext::vbfollow() {
  return getRuleContext<gpsrParser::VbfollowContext>(0);
}

tree::TerminalNode* gpsrParser::FollowContext::Name() {
  return getToken(gpsrParser::Name, 0);
}

tree::TerminalNode* gpsrParser::FollowContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}

tree::TerminalNode* gpsrParser::FollowContext::Room() {
  return getToken(gpsrParser::Room, 0);
}

tree::TerminalNode* gpsrParser::FollowContext::Pron() {
  return getToken(gpsrParser::Pron, 0);
}

gpsrParser::FllwdestContext* gpsrParser::FollowContext::fllwdest() {
  return getRuleContext<gpsrParser::FllwdestContext>(0);
}

gpsrParser::GobeaconContext* gpsrParser::FollowContext::gobeacon() {
  return getRuleContext<gpsrParser::GobeaconContext>(0);
}


size_t gpsrParser::FollowContext::getRuleIndex() const {
  return gpsrParser::RuleFollow;
}


std::any gpsrParser::FollowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFollow(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FollowContext* gpsrParser::follow() {
  FollowContext *_localctx = _tracker.createInstance<FollowContext>(_ctx, getState());
  enterRule(_localctx, 26, gpsrParser::RuleFollow);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(429);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__151: {
        enterOuterAlt(_localctx, 1);
        setState(403);
        vbfollow();
        setState(404);
        match(gpsrParser::Name);
        setState(405);
        match(gpsrParser::T__11);
        setState(406);
        match(gpsrParser::Beacon);
        setState(407);
        match(gpsrParser::T__12);
        setState(408);
        match(gpsrParser::Room);
        break;
      }

      case gpsrParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(410);
        match(gpsrParser::T__31);
        setState(411);
        match(gpsrParser::Name);
        setState(412);
        match(gpsrParser::T__32);
        setState(413);
        match(gpsrParser::Beacon);
        setState(414);
        match(gpsrParser::T__4);
        setState(415);
        vbfollow();
        setState(416);
        match(gpsrParser::Pron);
        setState(418);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gpsrParser::T__12) {
          setState(417);
          fllwdest();
        }
        break;
      }

      case gpsrParser::T__142:
      case gpsrParser::T__143: {
        enterOuterAlt(_localctx, 3);
        setState(420);
        gobeacon();
        setState(421);
        match(gpsrParser::T__10);
        setState(422);
        match(gpsrParser::T__31);
        setState(423);
        match(gpsrParser::Name);
        setState(424);
        match(gpsrParser::T__10);
        setState(425);
        match(gpsrParser::T__4);
        setState(426);
        vbfollow();
        setState(427);
        match(gpsrParser::Pron);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FllmeetContext ------------------------------------------------------------------

gpsrParser::FllmeetContext::FllmeetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::FllmeetContext::Name() {
  return getToken(gpsrParser::Name, 0);
}


size_t gpsrParser::FllmeetContext::getRuleIndex() const {
  return gpsrParser::RuleFllmeet;
}


std::any gpsrParser::FllmeetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFllmeet(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FllmeetContext* gpsrParser::fllmeet() {
  FllmeetContext *_localctx = _tracker.createInstance<FllmeetContext>(_ctx, getState());
  enterRule(_localctx, 28, gpsrParser::RuleFllmeet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(434);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__31: {
        enterOuterAlt(_localctx, 1);
        setState(431);
        match(gpsrParser::T__31);
        setState(432);
        match(gpsrParser::Name);
        break;
      }

      case gpsrParser::T__33: {
        enterOuterAlt(_localctx, 2);
        setState(433);
        match(gpsrParser::T__33);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FllwdestContext ------------------------------------------------------------------

gpsrParser::FllwdestContext::FllwdestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::FllwdestContext::Room() {
  return getToken(gpsrParser::Room, 0);
}


size_t gpsrParser::FllwdestContext::getRuleIndex() const {
  return gpsrParser::RuleFllwdest;
}


std::any gpsrParser::FllwdestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFllwdest(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FllwdestContext* gpsrParser::fllwdest() {
  FllwdestContext *_localctx = _tracker.createInstance<FllwdestContext>(_ctx, getState());
  enterRule(_localctx, 30, gpsrParser::RuleFllwdest);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(gpsrParser::T__12);
    setState(437);
    match(gpsrParser::Room);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GuideContext ------------------------------------------------------------------

gpsrParser::GuideContext::GuideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::GdcmdContext* gpsrParser::GuideContext::gdcmd() {
  return getRuleContext<gpsrParser::GdcmdContext>(0);
}


size_t gpsrParser::GuideContext::getRuleIndex() const {
  return gpsrParser::RuleGuide;
}


std::any gpsrParser::GuideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGuide(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GuideContext* gpsrParser::guide() {
  GuideContext *_localctx = _tracker.createInstance<GuideContext>(_ctx, getState());
  enterRule(_localctx, 32, gpsrParser::RuleGuide);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    gdcmd();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GdcmdContext ------------------------------------------------------------------

gpsrParser::GdcmdContext::GdcmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbguideContext* gpsrParser::GdcmdContext::vbguide() {
  return getRuleContext<gpsrParser::VbguideContext>(0);
}

tree::TerminalNode* gpsrParser::GdcmdContext::Name() {
  return getToken(gpsrParser::Name, 0);
}

std::vector<tree::TerminalNode *> gpsrParser::GdcmdContext::Beacon() {
  return getTokens(gpsrParser::Beacon);
}

tree::TerminalNode* gpsrParser::GdcmdContext::Beacon(size_t i) {
  return getToken(gpsrParser::Beacon, i);
}

gpsrParser::GuidetoContext* gpsrParser::GdcmdContext::guideto() {
  return getRuleContext<gpsrParser::GuidetoContext>(0);
}

gpsrParser::GobeaconContext* gpsrParser::GdcmdContext::gobeacon() {
  return getRuleContext<gpsrParser::GobeaconContext>(0);
}

gpsrParser::GdwhereContext* gpsrParser::GdcmdContext::gdwhere() {
  return getRuleContext<gpsrParser::GdwhereContext>(0);
}


size_t gpsrParser::GdcmdContext::getRuleIndex() const {
  return gpsrParser::RuleGdcmd;
}


std::any gpsrParser::GdcmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGdcmd(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GdcmdContext* gpsrParser::gdcmd() {
  GdcmdContext *_localctx = _tracker.createInstance<GdcmdContext>(_ctx, getState());
  enterRule(_localctx, 34, gpsrParser::RuleGdcmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(469);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(441);
      vbguide();
      setState(442);
      match(gpsrParser::Name);
      setState(443);
      match(gpsrParser::T__11);
      setState(444);
      match(gpsrParser::Beacon);
      setState(445);
      match(gpsrParser::T__12);
      setState(446);
      match(gpsrParser::Beacon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(448);
      match(gpsrParser::T__31);
      setState(449);
      match(gpsrParser::Name);
      setState(450);
      match(gpsrParser::T__32);
      setState(451);
      match(gpsrParser::Beacon);
      setState(452);
      match(gpsrParser::T__4);
      setState(453);
      guideto();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(454);
      gobeacon();
      setState(455);
      match(gpsrParser::T__10);
      setState(456);
      match(gpsrParser::T__31);
      setState(457);
      match(gpsrParser::Name);
      setState(458);
      match(gpsrParser::T__10);
      setState(459);
      match(gpsrParser::T__4);
      setState(460);
      guideto();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(462);
      vbguide();
      setState(463);
      match(gpsrParser::Name);
      setState(464);
      match(gpsrParser::T__12);
      setState(465);
      match(gpsrParser::Beacon);
      setState(466);
      match(gpsrParser::T__10);
      setState(467);
      gdwhere();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GuidetoContext ------------------------------------------------------------------

gpsrParser::GuidetoContext::GuidetoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbguideContext* gpsrParser::GuidetoContext::vbguide() {
  return getRuleContext<gpsrParser::VbguideContext>(0);
}

tree::TerminalNode* gpsrParser::GuidetoContext::Pron() {
  return getToken(gpsrParser::Pron, 0);
}

tree::TerminalNode* gpsrParser::GuidetoContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}


size_t gpsrParser::GuidetoContext::getRuleIndex() const {
  return gpsrParser::RuleGuideto;
}


std::any gpsrParser::GuidetoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGuideto(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GuidetoContext* gpsrParser::guideto() {
  GuidetoContext *_localctx = _tracker.createInstance<GuidetoContext>(_ctx, getState());
  enterRule(_localctx, 36, gpsrParser::RuleGuideto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    vbguide();
    setState(472);
    match(gpsrParser::Pron);
    setState(473);
    match(gpsrParser::T__12);
    setState(474);
    match(gpsrParser::Beacon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GdwhereContext ------------------------------------------------------------------

gpsrParser::GdwhereContext::GdwhereContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::GdwhereContext::Pron() {
  return getToken(gpsrParser::Pron, 0);
}

tree::TerminalNode* gpsrParser::GdwhereContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}


size_t gpsrParser::GdwhereContext::getRuleIndex() const {
  return gpsrParser::RuleGdwhere;
}


std::any gpsrParser::GdwhereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGdwhere(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GdwhereContext* gpsrParser::gdwhere() {
  GdwhereContext *_localctx = _tracker.createInstance<GdwhereContext>(_ctx, getState());
  enterRule(_localctx, 38, gpsrParser::RuleGdwhere);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(gpsrParser::T__34);
    setState(477);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 481036337152) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(478);
    match(gpsrParser::T__38);
    setState(479);
    match(gpsrParser::Pron);
    setState(480);
    match(gpsrParser::T__32);
    setState(481);
    match(gpsrParser::Beacon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FollowoutContext ------------------------------------------------------------------

gpsrParser::FollowoutContext::FollowoutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::FollowoutContext::Name() {
  return getToken(gpsrParser::Name, 0);
}

tree::TerminalNode* gpsrParser::FollowoutContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}

gpsrParser::VbfollowContext* gpsrParser::FollowoutContext::vbfollow() {
  return getRuleContext<gpsrParser::VbfollowContext>(0);
}

std::vector<tree::TerminalNode *> gpsrParser::FollowoutContext::Pron() {
  return getTokens(gpsrParser::Pron);
}

tree::TerminalNode* gpsrParser::FollowoutContext::Pron(size_t i) {
  return getToken(gpsrParser::Pron, i);
}

gpsrParser::GoroomContext* gpsrParser::FollowoutContext::goroom() {
  return getRuleContext<gpsrParser::GoroomContext>(0);
}

gpsrParser::VbguideContext* gpsrParser::FollowoutContext::vbguide() {
  return getRuleContext<gpsrParser::VbguideContext>(0);
}


size_t gpsrParser::FollowoutContext::getRuleIndex() const {
  return gpsrParser::RuleFollowout;
}


std::any gpsrParser::FollowoutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitFollowout(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::FollowoutContext* gpsrParser::followout() {
  FollowoutContext *_localctx = _tracker.createInstance<FollowoutContext>(_ctx, getState());
  enterRule(_localctx, 40, gpsrParser::RuleFollowout);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(505);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(483);
      match(gpsrParser::T__31);
      setState(484);
      match(gpsrParser::Name);
      setState(485);
      match(gpsrParser::T__32);
      setState(486);
      match(gpsrParser::Beacon);
      setState(487);
      match(gpsrParser::T__10);
      setState(488);
      vbfollow();
      setState(489);
      match(gpsrParser::Pron);
      setState(490);
      match(gpsrParser::T__39);
      setState(491);
      goroom();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(493);
      match(gpsrParser::T__31);
      setState(494);
      match(gpsrParser::Name);
      setState(495);
      match(gpsrParser::T__32);
      setState(496);
      match(gpsrParser::Beacon);
      setState(497);
      match(gpsrParser::T__10);
      setState(498);
      vbfollow();
      setState(499);
      match(gpsrParser::Pron);
      setState(500);
      match(gpsrParser::T__39);
      setState(501);
      vbguide();
      setState(502);
      match(gpsrParser::Pron);
      setState(503);
      match(gpsrParser::T__40);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncompleteContext ------------------------------------------------------------------

gpsrParser::IncompleteContext::IncompleteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbfollowContext* gpsrParser::IncompleteContext::vbfollow() {
  return getRuleContext<gpsrParser::VbfollowContext>(0);
}

tree::TerminalNode* gpsrParser::IncompleteContext::Name() {
  return getToken(gpsrParser::Name, 0);
}

gpsrParser::VbbringContext* gpsrParser::IncompleteContext::vbbring() {
  return getRuleContext<gpsrParser::VbbringContext>(0);
}

tree::TerminalNode* gpsrParser::IncompleteContext::Object_obfuscated() {
  return getToken(gpsrParser::Object_obfuscated, 0);
}

gpsrParser::VbdeliverContext* gpsrParser::IncompleteContext::vbdeliver() {
  return getRuleContext<gpsrParser::VbdeliverContext>(0);
}

gpsrParser::SomeoneContext* gpsrParser::IncompleteContext::someone() {
  return getRuleContext<gpsrParser::SomeoneContext>(0);
}

gpsrParser::VbguideContext* gpsrParser::IncompleteContext::vbguide() {
  return getRuleContext<gpsrParser::VbguideContext>(0);
}

tree::TerminalNode* gpsrParser::IncompleteContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}

gpsrParser::InguidewhoContext* gpsrParser::IncompleteContext::inguidewho() {
  return getRuleContext<gpsrParser::InguidewhoContext>(0);
}

tree::TerminalNode* gpsrParser::IncompleteContext::Pron() {
  return getToken(gpsrParser::Pron, 0);
}

gpsrParser::GobeaconContext* gpsrParser::IncompleteContext::gobeacon() {
  return getRuleContext<gpsrParser::GobeaconContext>(0);
}


size_t gpsrParser::IncompleteContext::getRuleIndex() const {
  return gpsrParser::RuleIncomplete;
}


std::any gpsrParser::IncompleteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitIncomplete(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::IncompleteContext* gpsrParser::incomplete() {
  IncompleteContext *_localctx = _tracker.createInstance<IncompleteContext>(_ctx, getState());
  enterRule(_localctx, 42, gpsrParser::RuleIncomplete);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(537);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(507);
      vbfollow();
      setState(508);
      match(gpsrParser::Name);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(510);
      vbbring();
      setState(511);
      match(gpsrParser::T__8);
      setState(512);
      match(gpsrParser::Object_obfuscated);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(514);
      vbdeliver();
      setState(515);
      match(gpsrParser::Object_obfuscated);
      setState(516);
      match(gpsrParser::T__9);
      setState(517);
      someone();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(519);
      vbguide();
      setState(520);
      match(gpsrParser::Name);
      setState(521);
      match(gpsrParser::T__12);
      setState(522);
      match(gpsrParser::Beacon);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(524);
      match(gpsrParser::T__31);
      setState(525);
      inguidewho();
      setState(526);
      match(gpsrParser::T__4);
      setState(527);
      vbguide();
      setState(528);
      match(gpsrParser::Pron);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(530);
      gobeacon();
      setState(531);
      match(gpsrParser::T__41);
      setState(532);
      inguidewho();
      setState(533);
      match(gpsrParser::T__39);
      setState(534);
      vbguide();
      setState(535);
      match(gpsrParser::Pron);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InguidewhoContext ------------------------------------------------------------------

gpsrParser::InguidewhoContext::InguidewhoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::InguidewhoContext::Name() {
  return getToken(gpsrParser::Name, 0);
}


size_t gpsrParser::InguidewhoContext::getRuleIndex() const {
  return gpsrParser::RuleInguidewho;
}


std::any gpsrParser::InguidewhoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitInguidewho(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::InguidewhoContext* gpsrParser::inguidewho() {
  InguidewhoContext *_localctx = _tracker.createInstance<InguidewhoContext>(_ctx, getState());
  enterRule(_localctx, 44, gpsrParser::RuleInguidewho);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    match(gpsrParser::Name);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PartyhostContext ------------------------------------------------------------------

gpsrParser::PartyhostContext::PartyhostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbserveContext* gpsrParser::PartyhostContext::vbserve() {
  return getRuleContext<gpsrParser::VbserveContext>(0);
}

gpsrParser::PhpeoplerContext* gpsrParser::PartyhostContext::phpeopler() {
  return getRuleContext<gpsrParser::PhpeoplerContext>(0);
}

gpsrParser::VbmeetContext* gpsrParser::PartyhostContext::vbmeet() {
  return getRuleContext<gpsrParser::VbmeetContext>(0);
}

std::vector<tree::TerminalNode *> gpsrParser::PartyhostContext::Name() {
  return getTokens(gpsrParser::Name);
}

tree::TerminalNode* gpsrParser::PartyhostContext::Name(size_t i) {
  return getToken(gpsrParser::Name, i);
}

gpsrParser::DoorContext* gpsrParser::PartyhostContext::door() {
  return getRuleContext<gpsrParser::DoorContext>(0);
}

std::vector<tree::TerminalNode *> gpsrParser::PartyhostContext::Pron() {
  return getTokens(gpsrParser::Pron);
}

tree::TerminalNode* gpsrParser::PartyhostContext::Pron(size_t i) {
  return getToken(gpsrParser::Pron, i);
}

std::vector<tree::TerminalNode *> gpsrParser::PartyhostContext::Beacon() {
  return getTokens(gpsrParser::Beacon);
}

tree::TerminalNode* gpsrParser::PartyhostContext::Beacon(size_t i) {
  return getToken(gpsrParser::Beacon, i);
}

gpsrParser::VbguideContext* gpsrParser::PartyhostContext::vbguide() {
  return getRuleContext<gpsrParser::VbguideContext>(0);
}

gpsrParser::TaxiContext* gpsrParser::PartyhostContext::taxi() {
  return getRuleContext<gpsrParser::TaxiContext>(0);
}


size_t gpsrParser::PartyhostContext::getRuleIndex() const {
  return gpsrParser::RulePartyhost;
}


std::any gpsrParser::PartyhostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPartyhost(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PartyhostContext* gpsrParser::partyhost() {
  PartyhostContext *_localctx = _tracker.createInstance<PartyhostContext>(_ctx, getState());
  enterRule(_localctx, 46, gpsrParser::RulePartyhost);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(584);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(541);
      vbserve();
      setState(542);
      match(gpsrParser::T__42);
      setState(543);
      phpeopler();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(545);
      vbmeet();
      setState(546);
      match(gpsrParser::Name);
      setState(547);
      match(gpsrParser::T__32);
      setState(548);
      door();
      setState(549);
      match(gpsrParser::T__43);
      setState(550);
      match(gpsrParser::Pron);
      setState(551);
      match(gpsrParser::T__9);
      setState(552);
      phpeopler();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(554);
      vbmeet();
      setState(555);
      match(gpsrParser::Name);
      setState(556);
      match(gpsrParser::T__32);
      setState(557);
      match(gpsrParser::Beacon);
      setState(558);
      match(gpsrParser::T__44);
      setState(559);
      match(gpsrParser::Pron);
      setState(560);
      match(gpsrParser::T__45);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(562);
      vbmeet();
      setState(563);
      match(gpsrParser::Name);
      setState(564);
      match(gpsrParser::T__32);
      setState(565);
      match(gpsrParser::Beacon);
      setState(566);
      match(gpsrParser::T__43);
      setState(567);
      match(gpsrParser::Pron);
      setState(568);
      match(gpsrParser::T__9);
      setState(569);
      match(gpsrParser::Name);
      setState(570);
      match(gpsrParser::T__32);
      setState(571);
      match(gpsrParser::Beacon);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(573);
      vbmeet();
      setState(574);
      match(gpsrParser::Name);
      setState(575);
      match(gpsrParser::T__32);
      setState(576);
      match(gpsrParser::Beacon);
      setState(577);
      match(gpsrParser::T__4);
      setState(578);
      vbguide();
      setState(579);
      match(gpsrParser::Pron);
      setState(580);
      match(gpsrParser::T__9);
      setState(581);
      match(gpsrParser::Pron);
      setState(582);
      taxi();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhpeopleContext ------------------------------------------------------------------

gpsrParser::PhpeopleContext::PhpeopleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::PeopletypeContext* gpsrParser::PhpeopleContext::peopletype() {
  return getRuleContext<gpsrParser::PeopletypeContext>(0);
}


size_t gpsrParser::PhpeopleContext::getRuleIndex() const {
  return gpsrParser::RulePhpeople;
}


std::any gpsrParser::PhpeopleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPhpeople(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PhpeopleContext* gpsrParser::phpeople() {
  PhpeopleContext *_localctx = _tracker.createInstance<PhpeopleContext>(_ctx, getState());
  enterRule(_localctx, 48, gpsrParser::RulePhpeople);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(589);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__46: {
        enterOuterAlt(_localctx, 1);
        setState(586);
        match(gpsrParser::T__46);
        break;
      }

      case gpsrParser::T__47: {
        enterOuterAlt(_localctx, 2);
        setState(587);
        match(gpsrParser::T__47);
        setState(588);
        peopletype();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PeopletypeContext ------------------------------------------------------------------

gpsrParser::PeopletypeContext::PeopletypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::PeopletypeContext::getRuleIndex() const {
  return gpsrParser::RulePeopletype;
}


std::any gpsrParser::PeopletypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPeopletype(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PeopletypeContext* gpsrParser::peopletype() {
  PeopletypeContext *_localctx = _tracker.createInstance<PeopletypeContext>(_ctx, getState());
  enterRule(_localctx, 50, gpsrParser::RulePeopletype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35465847065542656) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhpeoplerContext ------------------------------------------------------------------

gpsrParser::PhpeoplerContext::PhpeoplerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::PhpeopleContext* gpsrParser::PhpeoplerContext::phpeople() {
  return getRuleContext<gpsrParser::PhpeopleContext>(0);
}

tree::TerminalNode* gpsrParser::PhpeoplerContext::Room() {
  return getToken(gpsrParser::Room, 0);
}


size_t gpsrParser::PhpeoplerContext::getRuleIndex() const {
  return gpsrParser::RulePhpeopler;
}


std::any gpsrParser::PhpeoplerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPhpeopler(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PhpeoplerContext* gpsrParser::phpeopler() {
  PhpeoplerContext *_localctx = _tracker.createInstance<PhpeoplerContext>(_ctx, getState());
  enterRule(_localctx, 52, gpsrParser::RulePhpeopler);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    phpeople();
    setState(594);
    match(gpsrParser::T__3);
    setState(595);
    match(gpsrParser::Room);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PgendersContext ------------------------------------------------------------------

gpsrParser::PgendersContext::PgendersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::PgendersContext::getRuleIndex() const {
  return gpsrParser::RulePgenders;
}


std::any gpsrParser::PgendersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPgenders(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PgendersContext* gpsrParser::pgenders() {
  PgendersContext *_localctx = _tracker.createInstance<PgendersContext>(_ctx, getState());
  enterRule(_localctx, 54, gpsrParser::RulePgenders);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2269814212194729984) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PgenderpContext ------------------------------------------------------------------

gpsrParser::PgenderpContext::PgenderpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::PgenderpContext::getRuleIndex() const {
  return gpsrParser::RulePgenderp;
}


std::any gpsrParser::PgenderpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPgenderp(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PgenderpContext* gpsrParser::pgenderp() {
  PgenderpContext *_localctx = _tracker.createInstance<PgenderpContext>(_ctx, getState());
  enterRule(_localctx, 56, gpsrParser::RulePgenderp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    _la = _input->LA(1);
    if (!(((((_la - 50) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 50)) & 30723) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PoseContext ------------------------------------------------------------------

gpsrParser::PoseContext::PoseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::PoseContext::getRuleIndex() const {
  return gpsrParser::RulePose;
}


std::any gpsrParser::PoseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPose(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PoseContext* gpsrParser::pose() {
  PoseContext *_localctx = _tracker.createInstance<PoseContext>(_ctx, getState());
  enterRule(_localctx, 58, gpsrParser::RulePose);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    _la = _input->LA(1);
    if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 7) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbsposContext ------------------------------------------------------------------

gpsrParser::AbsposContext::AbsposContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::AbsposContext::getRuleIndex() const {
  return gpsrParser::RuleAbspos;
}


std::any gpsrParser::AbsposContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitAbspos(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::AbsposContext* gpsrParser::abspos() {
  AbsposContext *_localctx = _tracker.createInstance<AbsposContext>(_ctx, getState());
  enterRule(_localctx, 60, gpsrParser::RuleAbspos);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__67

    || _la == gpsrParser::T__68)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelposContext ------------------------------------------------------------------

gpsrParser::RelposContext::RelposContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::RelposContext::getRuleIndex() const {
  return gpsrParser::RuleRelpos;
}


std::any gpsrParser::RelposContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitRelpos(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::RelposContext* gpsrParser::relpos() {
  RelposContext *_localctx = _tracker.createInstance<RelposContext>(_ctx, getState());
  enterRule(_localctx, 62, gpsrParser::RuleRelpos);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 63) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GarbageContext ------------------------------------------------------------------

gpsrParser::GarbageContext::GarbageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::GarbageContext::getRuleIndex() const {
  return gpsrParser::RuleGarbage;
}


std::any gpsrParser::GarbageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGarbage(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GarbageContext* gpsrParser::garbage() {
  GarbageContext *_localctx = _tracker.createInstance<GarbageContext>(_ctx, getState());
  enterRule(_localctx, 64, gpsrParser::RuleGarbage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    _la = _input->LA(1);
    if (!(((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & 63) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LuggageContext ------------------------------------------------------------------

gpsrParser::LuggageContext::LuggageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::LuggageContext::getRuleIndex() const {
  return gpsrParser::RuleLuggage;
}


std::any gpsrParser::LuggageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitLuggage(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::LuggageContext* gpsrParser::luggage() {
  LuggageContext *_localctx = _tracker.createInstance<LuggageContext>(_ctx, getState());
  enterRule(_localctx, 66, gpsrParser::RuleLuggage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    _la = _input->LA(1);
    if (!(((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & 31) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TaxiContext ------------------------------------------------------------------

gpsrParser::TaxiContext::TaxiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::TaxiContext::getRuleIndex() const {
  return gpsrParser::RuleTaxi;
}


std::any gpsrParser::TaxiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitTaxi(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::TaxiContext* gpsrParser::taxi() {
  TaxiContext *_localctx = _tracker.createInstance<TaxiContext>(_ctx, getState());
  enterRule(_localctx, 68, gpsrParser::RuleTaxi);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    _la = _input->LA(1);
    if (!(((((_la - 87) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 87)) & 7) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoorContext ------------------------------------------------------------------

gpsrParser::DoorContext::DoorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::DoorposContext* gpsrParser::DoorContext::doorpos() {
  return getRuleContext<gpsrParser::DoorposContext>(0);
}


size_t gpsrParser::DoorContext::getRuleIndex() const {
  return gpsrParser::RuleDoor;
}


std::any gpsrParser::DoorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitDoor(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::DoorContext* gpsrParser::door() {
  DoorContext *_localctx = _tracker.createInstance<DoorContext>(_ctx, getState());
  enterRule(_localctx, 70, gpsrParser::RuleDoor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(619);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(613);
      doorpos();
      setState(614);
      match(gpsrParser::T__89);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(616);
      doorpos();
      setState(617);
      match(gpsrParser::T__90);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoorposContext ------------------------------------------------------------------

gpsrParser::DoorposContext::DoorposContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::DoorposContext::getRuleIndex() const {
  return gpsrParser::RuleDoorpos;
}


std::any gpsrParser::DoorposContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitDoorpos(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::DoorposContext* gpsrParser::doorpos() {
  DoorposContext *_localctx = _tracker.createInstance<DoorposContext>(_ctx, getState());
  enterRule(_localctx, 72, gpsrParser::RuleDoorpos);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    _la = _input->LA(1);
    if (!(((((_la - 41) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 41)) & 15762598695796737) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbtakeoutContext ------------------------------------------------------------------

gpsrParser::VbtakeoutContext::VbtakeoutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbtakeoutContext::getRuleIndex() const {
  return gpsrParser::RuleVbtakeout;
}


std::any gpsrParser::VbtakeoutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbtakeout(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbtakeoutContext* gpsrParser::vbtakeout() {
  VbtakeoutContext *_localctx = _tracker.createInstance<VbtakeoutContext>(_ctx, getState());
  enterRule(_localctx, 74, gpsrParser::RuleVbtakeout);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__94

    || _la == gpsrParser::T__95)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbcleanupContext ------------------------------------------------------------------

gpsrParser::VbcleanupContext::VbcleanupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbcleanupContext::getRuleIndex() const {
  return gpsrParser::RuleVbcleanup;
}


std::any gpsrParser::VbcleanupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbcleanup(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbcleanupContext* gpsrParser::vbcleanup() {
  VbcleanupContext *_localctx = _tracker.createInstance<VbcleanupContext>(_ctx, getState());
  enterRule(_localctx, 76, gpsrParser::RuleVbcleanup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    _la = _input->LA(1);
    if (!(((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 31) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbserveContext ------------------------------------------------------------------

gpsrParser::VbserveContext::VbserveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbserveContext::getRuleIndex() const {
  return gpsrParser::RuleVbserve;
}


std::any gpsrParser::VbserveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbserve(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbserveContext* gpsrParser::vbserve() {
  VbserveContext *_localctx = _tracker.createInstance<VbserveContext>(_ctx, getState());
  enterRule(_localctx, 78, gpsrParser::RuleVbserve);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    _la = _input->LA(1);
    if (!(((((_la - 102) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 102)) & 63) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbmeetContext ------------------------------------------------------------------

gpsrParser::VbmeetContext::VbmeetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbmeetContext::getRuleIndex() const {
  return gpsrParser::RuleVbmeet;
}


std::any gpsrParser::VbmeetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbmeet(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbmeetContext* gpsrParser::vbmeet() {
  VbmeetContext *_localctx = _tracker.createInstance<VbmeetContext>(_ctx, getState());
  enterRule(_localctx, 80, gpsrParser::RuleVbmeet);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__38 || ((((_la - 108) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 108)) & 7) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SomeoneContext ------------------------------------------------------------------

gpsrParser::SomeoneContext::SomeoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::WhoWhereContext* gpsrParser::SomeoneContext::whoWhere() {
  return getRuleContext<gpsrParser::WhoWhereContext>(0);
}


size_t gpsrParser::SomeoneContext::getRuleIndex() const {
  return gpsrParser::RuleSomeone;
}


std::any gpsrParser::SomeoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitSomeone(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::SomeoneContext* gpsrParser::someone() {
  SomeoneContext *_localctx = _tracker.createInstance<SomeoneContext>(_ctx, getState());
  enterRule(_localctx, 82, gpsrParser::RuleSomeone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__110: {
        enterOuterAlt(_localctx, 1);
        setState(631);
        match(gpsrParser::T__110);
        break;
      }

      case gpsrParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(632);
        whoWhere();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlaceContext ------------------------------------------------------------------

gpsrParser::PlaceContext::PlaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbplaceContext* gpsrParser::PlaceContext::vbplace() {
  return getRuleContext<gpsrParser::VbplaceContext>(0);
}

tree::TerminalNode* gpsrParser::PlaceContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}


size_t gpsrParser::PlaceContext::getRuleIndex() const {
  return gpsrParser::RulePlace;
}


std::any gpsrParser::PlaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPlace(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PlaceContext* gpsrParser::place() {
  PlaceContext *_localctx = _tracker.createInstance<PlaceContext>(_ctx, getState());
  enterRule(_localctx, 84, gpsrParser::RulePlace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    vbplace();
    setState(636);
    match(gpsrParser::T__5);
    setState(637);
    match(gpsrParser::Placement);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpropContext ------------------------------------------------------------------

gpsrParser::OpropContext::OpropContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::OpropContext::getRuleIndex() const {
  return gpsrParser::RuleOprop;
}


std::any gpsrParser::OpropContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitOprop(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::OpropContext* gpsrParser::oprop() {
  OpropContext *_localctx = _tracker.createInstance<OpropContext>(_ctx, getState());
  enterRule(_localctx, 86, gpsrParser::RuleOprop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    _la = _input->LA(1);
    if (!(((((_la - 112) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 112)) & 63) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GoplaceContext ------------------------------------------------------------------

gpsrParser::GoplaceContext::GoplaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbgoplContext* gpsrParser::GoplaceContext::vbgopl() {
  return getRuleContext<gpsrParser::VbgoplContext>(0);
}

tree::TerminalNode* gpsrParser::GoplaceContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}


size_t gpsrParser::GoplaceContext::getRuleIndex() const {
  return gpsrParser::RuleGoplace;
}


std::any gpsrParser::GoplaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGoplace(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GoplaceContext* gpsrParser::goplace() {
  GoplaceContext *_localctx = _tracker.createInstance<GoplaceContext>(_ctx, getState());
  enterRule(_localctx, 88, gpsrParser::RuleGoplace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    vbgopl();
    setState(642);
    match(gpsrParser::T__12);
    setState(643);
    match(gpsrParser::Placement);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GobeaconContext ------------------------------------------------------------------

gpsrParser::GobeaconContext::GobeaconContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbgoplContext* gpsrParser::GobeaconContext::vbgopl() {
  return getRuleContext<gpsrParser::VbgoplContext>(0);
}

tree::TerminalNode* gpsrParser::GobeaconContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}


size_t gpsrParser::GobeaconContext::getRuleIndex() const {
  return gpsrParser::RuleGobeacon;
}


std::any gpsrParser::GobeaconContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGobeacon(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GobeaconContext* gpsrParser::gobeacon() {
  GobeaconContext *_localctx = _tracker.createInstance<GobeaconContext>(_ctx, getState());
  enterRule(_localctx, 90, gpsrParser::RuleGobeacon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    vbgopl();
    setState(646);
    match(gpsrParser::T__12);
    setState(647);
    match(gpsrParser::Beacon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GoroomContext ------------------------------------------------------------------

gpsrParser::GoroomContext::GoroomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbgoplContext* gpsrParser::GoroomContext::vbgopl() {
  return getRuleContext<gpsrParser::VbgoplContext>(0);
}

tree::TerminalNode* gpsrParser::GoroomContext::Room() {
  return getToken(gpsrParser::Room, 0);
}


size_t gpsrParser::GoroomContext::getRuleIndex() const {
  return gpsrParser::RuleGoroom;
}


std::any gpsrParser::GoroomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitGoroom(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::GoroomContext* gpsrParser::goroom() {
  GoroomContext *_localctx = _tracker.createInstance<GoroomContext>(_ctx, getState());
  enterRule(_localctx, 92, gpsrParser::RuleGoroom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(649);
    vbgopl();
    setState(650);
    match(gpsrParser::T__12);
    setState(651);
    match(gpsrParser::Room);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TakeContext ------------------------------------------------------------------

gpsrParser::TakeContext::TakeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbtakeContext* gpsrParser::TakeContext::vbtake() {
  return getRuleContext<gpsrParser::VbtakeContext>(0);
}

tree::TerminalNode* gpsrParser::TakeContext::Object() {
  return getToken(gpsrParser::Object, 0);
}


size_t gpsrParser::TakeContext::getRuleIndex() const {
  return gpsrParser::RuleTake;
}


std::any gpsrParser::TakeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitTake(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::TakeContext* gpsrParser::take() {
  TakeContext *_localctx = _tracker.createInstance<TakeContext>(_ctx, getState());
  enterRule(_localctx, 94, gpsrParser::RuleTake);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    vbtake();
    setState(654);
    match(gpsrParser::T__6);
    setState(655);
    match(gpsrParser::Object);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TakefromContext ------------------------------------------------------------------

gpsrParser::TakefromContext::TakefromContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::TakeContext* gpsrParser::TakefromContext::take() {
  return getRuleContext<gpsrParser::TakeContext>(0);
}

tree::TerminalNode* gpsrParser::TakefromContext::Placement() {
  return getToken(gpsrParser::Placement, 0);
}


size_t gpsrParser::TakefromContext::getRuleIndex() const {
  return gpsrParser::RuleTakefrom;
}


std::any gpsrParser::TakefromContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitTakefrom(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::TakefromContext* gpsrParser::takefrom() {
  TakefromContext *_localctx = _tracker.createInstance<TakefromContext>(_ctx, getState());
  enterRule(_localctx, 96, gpsrParser::RuleTakefrom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    take();
    setState(658);
    match(gpsrParser::T__11);
    setState(659);
    match(gpsrParser::Placement);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelivmeContext ------------------------------------------------------------------

gpsrParser::DelivmeContext::DelivmeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbdeliverContext* gpsrParser::DelivmeContext::vbdeliver() {
  return getRuleContext<gpsrParser::VbdeliverContext>(0);
}


size_t gpsrParser::DelivmeContext::getRuleIndex() const {
  return gpsrParser::RuleDelivme;
}


std::any gpsrParser::DelivmeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitDelivme(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::DelivmeContext* gpsrParser::delivme() {
  DelivmeContext *_localctx = _tracker.createInstance<DelivmeContext>(_ctx, getState());
  enterRule(_localctx, 98, gpsrParser::RuleDelivme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(661);
    vbdeliver();
    setState(662);
    match(gpsrParser::T__117);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelivtoContext ------------------------------------------------------------------

gpsrParser::DelivtoContext::DelivtoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbdeliverContext* gpsrParser::DelivtoContext::vbdeliver() {
  return getRuleContext<gpsrParser::VbdeliverContext>(0);
}

tree::TerminalNode* gpsrParser::DelivtoContext::Name() {
  return getToken(gpsrParser::Name, 0);
}


size_t gpsrParser::DelivtoContext::getRuleIndex() const {
  return gpsrParser::RuleDelivto;
}


std::any gpsrParser::DelivtoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitDelivto(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::DelivtoContext* gpsrParser::delivto() {
  DelivtoContext *_localctx = _tracker.createInstance<DelivtoContext>(_ctx, getState());
  enterRule(_localctx, 100, gpsrParser::RuleDelivto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(664);
    vbdeliver();
    setState(665);
    match(gpsrParser::T__118);
    setState(666);
    match(gpsrParser::Name);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelivatContext ------------------------------------------------------------------

gpsrParser::DelivatContext::DelivatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbdeliverContext* gpsrParser::DelivatContext::vbdeliver() {
  return getRuleContext<gpsrParser::VbdeliverContext>(0);
}

tree::TerminalNode* gpsrParser::DelivatContext::Name() {
  return getToken(gpsrParser::Name, 0);
}

tree::TerminalNode* gpsrParser::DelivatContext::Beacon() {
  return getToken(gpsrParser::Beacon, 0);
}


size_t gpsrParser::DelivatContext::getRuleIndex() const {
  return gpsrParser::RuleDelivat;
}


std::any gpsrParser::DelivatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitDelivat(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::DelivatContext* gpsrParser::delivat() {
  DelivatContext *_localctx = _tracker.createInstance<DelivatContext>(_ctx, getState());
  enterRule(_localctx, 102, gpsrParser::RuleDelivat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(668);
    vbdeliver();
    setState(669);
    match(gpsrParser::T__118);
    setState(670);
    match(gpsrParser::Name);
    setState(671);
    match(gpsrParser::T__32);
    setState(672);
    match(gpsrParser::Beacon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TalkContext ------------------------------------------------------------------

gpsrParser::TalkContext::TalkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::AnswerContext* gpsrParser::TalkContext::answer() {
  return getRuleContext<gpsrParser::AnswerContext>(0);
}

gpsrParser::SpeakContext* gpsrParser::TalkContext::speak() {
  return getRuleContext<gpsrParser::SpeakContext>(0);
}


size_t gpsrParser::TalkContext::getRuleIndex() const {
  return gpsrParser::RuleTalk;
}


std::any gpsrParser::TalkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitTalk(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::TalkContext* gpsrParser::talk() {
  TalkContext *_localctx = _tracker.createInstance<TalkContext>(_ctx, getState());
  enterRule(_localctx, 104, gpsrParser::RuleTalk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(676);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__119: {
        enterOuterAlt(_localctx, 1);
        setState(674);
        answer();
        break;
      }

      case gpsrParser::T__140:
      case gpsrParser::T__141: {
        enterOuterAlt(_localctx, 2);
        setState(675);
        speak();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnswerContext ------------------------------------------------------------------

gpsrParser::AnswerContext::AnswerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gpsrParser::AnswerContext::Question() {
  return getToken(gpsrParser::Question, 0);
}


size_t gpsrParser::AnswerContext::getRuleIndex() const {
  return gpsrParser::RuleAnswer;
}


std::any gpsrParser::AnswerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitAnswer(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::AnswerContext* gpsrParser::answer() {
  AnswerContext *_localctx = _tracker.createInstance<AnswerContext>(_ctx, getState());
  enterRule(_localctx, 106, gpsrParser::RuleAnswer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(678);
    match(gpsrParser::T__119);
    setState(679);
    match(gpsrParser::Question);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpeakContext ------------------------------------------------------------------

gpsrParser::SpeakContext::SpeakContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbspeakContext* gpsrParser::SpeakContext::vbspeak() {
  return getRuleContext<gpsrParser::VbspeakContext>(0);
}

gpsrParser::WhattosayContext* gpsrParser::SpeakContext::whattosay() {
  return getRuleContext<gpsrParser::WhattosayContext>(0);
}


size_t gpsrParser::SpeakContext::getRuleIndex() const {
  return gpsrParser::RuleSpeak;
}


std::any gpsrParser::SpeakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitSpeak(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::SpeakContext* gpsrParser::speak() {
  SpeakContext *_localctx = _tracker.createInstance<SpeakContext>(_ctx, getState());
  enterRule(_localctx, 108, gpsrParser::RuleSpeak);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(681);
    vbspeak();
    setState(682);
    whattosay();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhattosayContext ------------------------------------------------------------------

gpsrParser::WhattosayContext::WhattosayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::WhattosayContext::getRuleIndex() const {
  return gpsrParser::RuleWhattosay;
}


std::any gpsrParser::WhattosayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitWhattosay(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::WhattosayContext* gpsrParser::whattosay() {
  WhattosayContext *_localctx = _tracker.createInstance<WhattosayContext>(_ctx, getState());
  enterRule(_localctx, 110, gpsrParser::RuleWhattosay);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(693);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__120: {
        enterOuterAlt(_localctx, 1);
        setState(684);
        match(gpsrParser::T__120);
        break;
      }

      case gpsrParser::T__121: {
        enterOuterAlt(_localctx, 2);
        setState(685);
        match(gpsrParser::T__121);
        break;
      }

      case gpsrParser::T__122: {
        enterOuterAlt(_localctx, 3);
        setState(686);
        match(gpsrParser::T__122);
        setState(687);
        _la = _input->LA(1);
        if (!(_la == gpsrParser::T__123

        || _la == gpsrParser::T__124)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case gpsrParser::T__125: {
        enterOuterAlt(_localctx, 4);
        setState(688);
        match(gpsrParser::T__125);
        setState(689);
        _la = _input->LA(1);
        if (!(((((_la - 127) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 127)) & 7) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case gpsrParser::T__129: {
        enterOuterAlt(_localctx, 5);
        setState(690);
        match(gpsrParser::T__129);
        setState(691);
        _la = _input->LA(1);
        if (!(_la == gpsrParser::T__130

        || _la == gpsrParser::T__131)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case gpsrParser::T__132: {
        enterOuterAlt(_localctx, 6);
        setState(692);
        match(gpsrParser::T__132);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbbtakeContext ------------------------------------------------------------------

gpsrParser::VbbtakeContext::VbbtakeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbbtakeContext::getRuleIndex() const {
  return gpsrParser::RuleVbbtake;
}


std::any gpsrParser::VbbtakeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbbtake(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbbtakeContext* gpsrParser::vbbtake() {
  VbbtakeContext *_localctx = _tracker.createInstance<VbbtakeContext>(_ctx, getState());
  enterRule(_localctx, 112, gpsrParser::RuleVbbtake);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(695);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__133

    || _la == gpsrParser::T__134)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbplaceContext ------------------------------------------------------------------

gpsrParser::VbplaceContext::VbplaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbplaceContext::getRuleIndex() const {
  return gpsrParser::RuleVbplace;
}


std::any gpsrParser::VbplaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbplace(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbplaceContext* gpsrParser::vbplace() {
  VbplaceContext *_localctx = _tracker.createInstance<VbplaceContext>(_ctx, getState());
  enterRule(_localctx, 114, gpsrParser::RuleVbplace);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__135

    || _la == gpsrParser::T__136)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbbringContext ------------------------------------------------------------------

gpsrParser::VbbringContext::VbbringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbbringContext::getRuleIndex() const {
  return gpsrParser::RuleVbbring;
}


std::any gpsrParser::VbbringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbbring(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbbringContext* gpsrParser::vbbring() {
  VbbringContext *_localctx = _tracker.createInstance<VbbringContext>(_ctx, getState());
  enterRule(_localctx, 116, gpsrParser::RuleVbbring);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(699);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__105

    || _la == gpsrParser::T__133)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbdeliverContext ------------------------------------------------------------------

gpsrParser::VbdeliverContext::VbdeliverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbbringContext* gpsrParser::VbdeliverContext::vbbring() {
  return getRuleContext<gpsrParser::VbbringContext>(0);
}


size_t gpsrParser::VbdeliverContext::getRuleIndex() const {
  return gpsrParser::RuleVbdeliver;
}


std::any gpsrParser::VbdeliverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbdeliver(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbdeliverContext* gpsrParser::vbdeliver() {
  VbdeliverContext *_localctx = _tracker.createInstance<VbdeliverContext>(_ctx, getState());
  enterRule(_localctx, 118, gpsrParser::RuleVbdeliver);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(703);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__105:
      case gpsrParser::T__133: {
        enterOuterAlt(_localctx, 1);
        setState(701);
        vbbring();
        break;
      }

      case gpsrParser::T__103: {
        enterOuterAlt(_localctx, 2);
        setState(702);
        match(gpsrParser::T__103);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbtakeContext ------------------------------------------------------------------

gpsrParser::VbtakeContext::VbtakeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbtakeContext::getRuleIndex() const {
  return gpsrParser::RuleVbtake;
}


std::any gpsrParser::VbtakeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbtake(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbtakeContext* gpsrParser::vbtake() {
  VbtakeContext *_localctx = _tracker.createInstance<VbtakeContext>(_ctx, getState());
  enterRule(_localctx, 120, gpsrParser::RuleVbtake);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    _la = _input->LA(1);
    if (!(((((_la - 135) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 135)) & 57) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbspeakContext ------------------------------------------------------------------

gpsrParser::VbspeakContext::VbspeakContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbspeakContext::getRuleIndex() const {
  return gpsrParser::RuleVbspeak;
}


std::any gpsrParser::VbspeakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbspeak(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbspeakContext* gpsrParser::vbspeak() {
  VbspeakContext *_localctx = _tracker.createInstance<VbspeakContext>(_ctx, getState());
  enterRule(_localctx, 122, gpsrParser::RuleVbspeak);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(707);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__140

    || _la == gpsrParser::T__141)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbgoplContext ------------------------------------------------------------------

gpsrParser::VbgoplContext::VbgoplContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbgoplContext::getRuleIndex() const {
  return gpsrParser::RuleVbgopl;
}


std::any gpsrParser::VbgoplContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbgopl(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbgoplContext* gpsrParser::vbgopl() {
  VbgoplContext *_localctx = _tracker.createInstance<VbgoplContext>(_ctx, getState());
  enterRule(_localctx, 124, gpsrParser::RuleVbgopl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__142

    || _la == gpsrParser::T__143)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbgorContext ------------------------------------------------------------------

gpsrParser::VbgorContext::VbgorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gpsrParser::VbgoplContext* gpsrParser::VbgorContext::vbgopl() {
  return getRuleContext<gpsrParser::VbgoplContext>(0);
}


size_t gpsrParser::VbgorContext::getRuleIndex() const {
  return gpsrParser::RuleVbgor;
}


std::any gpsrParser::VbgorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbgor(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbgorContext* gpsrParser::vbgor() {
  VbgorContext *_localctx = _tracker.createInstance<VbgorContext>(_ctx, getState());
  enterRule(_localctx, 126, gpsrParser::RuleVbgor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(713);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__142:
      case gpsrParser::T__143: {
        enterOuterAlt(_localctx, 1);
        setState(711);
        vbgopl();
        break;
      }

      case gpsrParser::T__144: {
        enterOuterAlt(_localctx, 2);
        setState(712);
        match(gpsrParser::T__144);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbfindContext ------------------------------------------------------------------

gpsrParser::VbfindContext::VbfindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbfindContext::getRuleIndex() const {
  return gpsrParser::RuleVbfind;
}


std::any gpsrParser::VbfindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbfind(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbfindContext* gpsrParser::vbfind() {
  VbfindContext *_localctx = _tracker.createInstance<VbfindContext>(_ctx, getState());
  enterRule(_localctx, 128, gpsrParser::RuleVbfind);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(715);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__38 || _la == gpsrParser::T__145

    || _la == gpsrParser::T__146)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbguideContext ------------------------------------------------------------------

gpsrParser::VbguideContext::VbguideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbguideContext::getRuleIndex() const {
  return gpsrParser::RuleVbguide;
}


std::any gpsrParser::VbguideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbguide(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbguideContext* gpsrParser::vbguide() {
  VbguideContext *_localctx = _tracker.createInstance<VbguideContext>(_ctx, getState());
  enterRule(_localctx, 130, gpsrParser::RuleVbguide);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(717);
    _la = _input->LA(1);
    if (!(((((_la - 135) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 135)) & 122881) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VbfollowContext ------------------------------------------------------------------

gpsrParser::VbfollowContext::VbfollowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::VbfollowContext::getRuleIndex() const {
  return gpsrParser::RuleVbfollow;
}


std::any gpsrParser::VbfollowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitVbfollow(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::VbfollowContext* gpsrParser::vbfollow() {
  VbfollowContext *_localctx = _tracker.createInstance<VbfollowContext>(_ctx, getState());
  enterRule(_localctx, 132, gpsrParser::RuleVbfollow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    match(gpsrParser::T__151);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PoliteContext ------------------------------------------------------------------

gpsrParser::PoliteContext::PoliteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gpsrParser::PoliteContext::getRuleIndex() const {
  return gpsrParser::RulePolite;
}


std::any gpsrParser::PoliteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gpsrVisitor*>(visitor))
    return parserVisitor->visitPolite(this);
  else
    return visitor->visitChildren(this);
}

gpsrParser::PoliteContext* gpsrParser::polite() {
  PoliteContext *_localctx = _tracker.createInstance<PoliteContext>(_ctx, getState());
  enterRule(_localctx, 134, gpsrParser::RulePolite);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(721);
    _la = _input->LA(1);
    if (!(((((_la - 153) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 153)) & 15) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void gpsrParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gpsrParserInitialize();
#else
  ::antlr4::internal::call_once(gpsrParserOnceFlag, gpsrParserInitialize);
#endif
}
