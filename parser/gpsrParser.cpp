
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
      "'the'", "'on the'", "'me the'", "'to'", "'from the'", "'to the'", 
      "'my'", "'object'", "'me the object'", "'Tell me how many'", "'there are on the'", 
      "'Tell me what's the'", "'object on the'", "'tell me which are the three'", 
      "'objects'", "'three'", "'Tell me the name of the person at the'", 
      "'Tell me the gender of the person at the'", "'Tell me the pose of the person at the'", 
      "'Tell me the name of the person in the'", "'Tell me the gender of the person in the'", 
      "'Tell me the pose of the person in the'", "'tell me how many people in the'", 
      "'are'", "'meet'", "'at the'", "'find a person'", "'you'", "'may'", 
      "'can'", "'will'", "'find'", "'back'", "'drinks to'", "'and introduce'", 
      "'and ask'", "'to leave'", "'everyone'", "'all the'", "'people'", 
      "'men'", "'women'", "'guests'", "'elders'", "'children'", "'man'", 
      "'woman'", "'boy'", "'girl'", "'male person'", "'female person'", 
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
      "'follow'", "'Please'", "'Could you'", "'Robot please'", "'Could you please'", 
      "','"
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
      "", "Comma", "Category", "Object", "Object_alike", "Object_known", 
      "Object_alike_obfuscated", "Object_obfuscated", "Pron", "Gesture", 
      "Room", "Beacon", "Placement", "Location_except_room", "Name", "Question"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,168,760,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	1,7,1,7,1,7,1,7,1,7,1,7,3,7,213,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,
  	7,223,8,7,1,7,1,7,1,7,1,7,3,7,229,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,266,8,7,1,8,1,8,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,3,9,309,8,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,3,11,369,8,11,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,3,12,383,8,12,1,12,1,12,3,12,387,8,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,412,8,12,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,429,
  	8,13,1,13,1,13,3,13,433,8,13,1,13,1,13,1,13,3,13,438,8,13,1,13,1,13,1,
  	13,1,13,3,13,444,8,13,1,14,1,14,1,14,3,14,449,8,14,1,15,1,15,1,15,1,16,
  	1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,3,17,471,8,17,1,17,1,17,1,17,3,17,476,8,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,3,17,486,8,17,1,17,1,17,3,17,490,8,17,1,18,1,18,
  	1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,20,3,20,509,8,20,1,20,1,20,1,20,3,20,514,8,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,3,20,524,8,20,1,20,1,20,1,20,3,20,529,8,20,1,20,1,20,
  	1,20,1,20,1,20,3,20,536,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,3,21,563,8,21,1,21,1,21,1,21,3,21,568,8,21,1,21,1,21,1,
  	21,1,21,3,21,574,8,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,621,8,23,1,24,1,24,1,24,3,
  	24,626,8,24,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,
  	29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,35,1,
  	35,1,35,1,35,3,35,656,8,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,
  	40,1,40,1,41,1,41,3,41,670,8,41,1,42,1,42,1,42,1,42,1,43,1,43,1,44,1,
  	44,1,44,1,44,1,45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,
  	47,1,48,1,48,1,48,1,48,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,51,1,51,1,
  	51,1,51,1,51,1,51,1,52,1,52,3,52,713,8,52,1,53,1,53,1,53,1,54,1,54,1,
  	54,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,3,55,730,8,55,1,56,1,
  	56,1,57,1,57,1,58,1,58,1,59,1,59,3,59,740,8,59,1,60,1,60,1,61,1,61,1,
  	62,1,62,1,63,1,63,3,63,750,8,63,1,64,1,64,1,65,1,65,1,66,1,66,1,67,1,
  	67,1,67,0,0,68,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,
  	86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,
  	124,126,128,130,132,134,0,28,1,0,35,37,1,0,46,51,1,0,52,57,2,0,47,48,
  	58,61,1,0,62,64,1,0,65,66,1,0,67,72,1,0,73,78,1,0,79,83,1,0,84,86,2,0,
  	39,39,89,91,1,0,92,93,1,0,94,98,1,0,99,104,2,0,38,38,105,107,1,0,109,
  	114,1,0,121,122,1,0,124,126,1,0,128,129,1,0,131,132,1,0,133,134,2,0,103,
  	103,131,131,2,0,132,132,135,137,1,0,138,139,1,0,140,141,2,0,38,38,143,
  	144,2,0,132,132,145,148,1,0,150,153,785,0,137,1,0,0,0,2,143,1,0,0,0,4,
  	146,1,0,0,0,6,159,1,0,0,0,8,173,1,0,0,0,10,175,1,0,0,0,12,180,1,0,0,0,
  	14,265,1,0,0,0,16,267,1,0,0,0,18,308,1,0,0,0,20,310,1,0,0,0,22,368,1,
  	0,0,0,24,411,1,0,0,0,26,443,1,0,0,0,28,448,1,0,0,0,30,450,1,0,0,0,32,
  	453,1,0,0,0,34,489,1,0,0,0,36,491,1,0,0,0,38,496,1,0,0,0,40,535,1,0,0,
  	0,42,573,1,0,0,0,44,575,1,0,0,0,46,620,1,0,0,0,48,625,1,0,0,0,50,627,
  	1,0,0,0,52,629,1,0,0,0,54,633,1,0,0,0,56,635,1,0,0,0,58,637,1,0,0,0,60,
  	639,1,0,0,0,62,641,1,0,0,0,64,643,1,0,0,0,66,645,1,0,0,0,68,647,1,0,0,
  	0,70,655,1,0,0,0,72,657,1,0,0,0,74,659,1,0,0,0,76,661,1,0,0,0,78,663,
  	1,0,0,0,80,665,1,0,0,0,82,669,1,0,0,0,84,671,1,0,0,0,86,675,1,0,0,0,88,
  	677,1,0,0,0,90,681,1,0,0,0,92,685,1,0,0,0,94,689,1,0,0,0,96,693,1,0,0,
  	0,98,697,1,0,0,0,100,700,1,0,0,0,102,704,1,0,0,0,104,712,1,0,0,0,106,
  	714,1,0,0,0,108,717,1,0,0,0,110,729,1,0,0,0,112,731,1,0,0,0,114,733,1,
  	0,0,0,116,735,1,0,0,0,118,739,1,0,0,0,120,741,1,0,0,0,122,743,1,0,0,0,
  	124,745,1,0,0,0,126,749,1,0,0,0,128,751,1,0,0,0,130,753,1,0,0,0,132,755,
  	1,0,0,0,134,757,1,0,0,0,136,138,3,2,1,0,137,136,1,0,0,0,138,139,1,0,0,
  	0,139,137,1,0,0,0,139,140,1,0,0,0,140,1,1,0,0,0,141,144,3,4,2,0,142,144,
  	3,6,3,0,143,141,1,0,0,0,143,142,1,0,0,0,144,3,1,0,0,0,145,147,3,134,67,
  	0,146,145,1,0,0,0,146,147,1,0,0,0,147,148,1,0,0,0,148,149,3,6,3,0,149,
  	5,1,0,0,0,150,160,3,24,12,0,151,160,3,22,11,0,152,160,3,32,16,0,153,160,
  	3,26,13,0,154,160,3,40,20,0,155,160,3,42,21,0,156,160,3,12,6,0,157,160,
  	3,16,8,0,158,160,3,46,23,0,159,150,1,0,0,0,159,151,1,0,0,0,159,152,1,
  	0,0,0,159,153,1,0,0,0,159,154,1,0,0,0,159,155,1,0,0,0,159,156,1,0,0,0,
  	159,157,1,0,0,0,159,158,1,0,0,0,160,7,1,0,0,0,161,162,3,128,64,0,162,
  	163,5,1,0,0,163,164,3,54,27,0,164,174,1,0,0,0,165,166,3,128,64,0,166,
  	167,5,2,0,0,167,168,5,162,0,0,168,174,1,0,0,0,169,170,3,128,64,0,170,
  	171,5,2,0,0,171,172,3,58,29,0,172,174,1,0,0,0,173,161,1,0,0,0,173,165,
  	1,0,0,0,173,169,1,0,0,0,174,9,1,0,0,0,175,176,5,3,0,0,176,177,5,162,0,
  	0,177,178,5,4,0,0,178,179,5,163,0,0,179,11,1,0,0,0,180,181,3,14,7,0,181,
  	13,1,0,0,0,182,183,3,94,47,0,183,184,5,5,0,0,184,185,3,114,57,0,185,186,
  	5,6,0,0,186,187,5,165,0,0,187,266,1,0,0,0,188,189,3,114,57,0,189,190,
  	5,7,0,0,190,191,5,158,0,0,191,192,5,8,0,0,192,193,5,165,0,0,193,266,1,
  	0,0,0,194,195,3,116,58,0,195,196,5,9,0,0,196,197,5,158,0,0,197,266,1,
  	0,0,0,198,199,3,118,59,0,199,200,5,7,0,0,200,201,5,158,0,0,201,202,5,
  	10,0,0,202,203,3,82,41,0,203,266,1,0,0,0,204,205,3,96,48,0,205,206,5,
  	5,0,0,206,207,3,114,57,0,207,208,5,6,0,0,208,209,5,165,0,0,209,266,1,
  	0,0,0,210,212,3,88,44,0,211,213,5,154,0,0,212,211,1,0,0,0,212,213,1,0,
  	0,0,213,214,1,0,0,0,214,215,3,128,64,0,215,216,5,7,0,0,216,217,5,156,
  	0,0,217,218,5,10,0,0,218,219,3,82,41,0,219,266,1,0,0,0,220,222,3,88,44,
  	0,221,223,5,154,0,0,222,221,1,0,0,0,222,223,1,0,0,0,223,224,1,0,0,0,224,
  	225,3,128,64,0,225,226,5,7,0,0,226,228,5,156,0,0,227,229,5,154,0,0,228,
  	227,1,0,0,0,228,229,1,0,0,0,229,230,1,0,0,0,230,231,5,5,0,0,231,232,3,
  	84,42,0,232,266,1,0,0,0,233,234,3,112,56,0,234,235,5,7,0,0,235,236,5,
  	157,0,0,236,237,5,11,0,0,237,238,5,163,0,0,238,239,5,12,0,0,239,240,5,
  	165,0,0,240,266,1,0,0,0,241,242,3,116,58,0,242,243,5,9,0,0,243,244,5,
  	157,0,0,244,245,5,11,0,0,245,246,5,165,0,0,246,266,1,0,0,0,247,248,3,
  	96,48,0,248,249,5,5,0,0,249,250,3,98,49,0,250,266,1,0,0,0,251,252,3,96,
  	48,0,252,253,5,5,0,0,253,254,3,102,51,0,254,266,1,0,0,0,255,256,3,96,
  	48,0,256,257,5,5,0,0,257,258,3,84,42,0,258,266,1,0,0,0,259,260,3,112,
  	56,0,260,261,5,13,0,0,261,262,3,66,33,0,262,263,5,12,0,0,263,264,3,68,
  	34,0,264,266,1,0,0,0,265,182,1,0,0,0,265,188,1,0,0,0,265,194,1,0,0,0,
  	265,198,1,0,0,0,265,204,1,0,0,0,265,210,1,0,0,0,265,220,1,0,0,0,265,233,
  	1,0,0,0,265,241,1,0,0,0,265,247,1,0,0,0,265,251,1,0,0,0,265,255,1,0,0,
  	0,265,259,1,0,0,0,266,15,1,0,0,0,267,268,3,18,9,0,268,17,1,0,0,0,269,
  	270,3,112,56,0,270,271,5,7,0,0,271,272,5,158,0,0,272,273,5,12,0,0,273,
  	274,5,165,0,0,274,309,1,0,0,0,275,276,3,116,58,0,276,277,5,9,0,0,277,
  	278,3,60,30,0,278,279,5,14,0,0,279,280,3,20,10,0,280,309,1,0,0,0,281,
  	282,3,116,58,0,282,283,5,15,0,0,283,284,3,62,31,0,284,285,5,7,0,0,285,
  	286,5,156,0,0,286,287,3,20,10,0,287,309,1,0,0,0,288,289,3,116,58,0,289,
  	290,5,9,0,0,290,291,3,86,43,0,291,292,5,14,0,0,292,293,3,20,10,0,293,
  	309,1,0,0,0,294,295,3,116,58,0,295,296,5,9,0,0,296,297,3,86,43,0,297,
  	298,5,155,0,0,298,299,3,20,10,0,299,309,1,0,0,0,300,301,3,76,38,0,301,
  	302,5,7,0,0,302,303,5,163,0,0,303,309,1,0,0,0,304,305,3,74,37,0,305,306,
  	5,7,0,0,306,307,3,64,32,0,307,309,1,0,0,0,308,269,1,0,0,0,308,275,1,0,
  	0,0,308,281,1,0,0,0,308,288,1,0,0,0,308,294,1,0,0,0,308,300,1,0,0,0,308,
  	304,1,0,0,0,309,19,1,0,0,0,310,311,5,11,0,0,311,312,5,165,0,0,312,21,
  	1,0,0,0,313,314,5,16,0,0,314,315,5,156,0,0,315,316,5,17,0,0,316,369,5,
  	165,0,0,317,318,3,128,64,0,318,319,5,7,0,0,319,320,5,156,0,0,320,321,
  	5,4,0,0,321,322,5,163,0,0,322,369,1,0,0,0,323,324,3,128,64,0,324,325,
  	5,7,0,0,325,326,5,159,0,0,326,327,5,4,0,0,327,328,5,163,0,0,328,369,1,
  	0,0,0,329,330,5,16,0,0,330,331,5,155,0,0,331,332,5,17,0,0,332,369,5,165,
  	0,0,333,334,5,18,0,0,334,335,3,86,43,0,335,336,5,19,0,0,336,337,5,165,
  	0,0,337,369,1,0,0,0,338,339,5,18,0,0,339,340,3,86,43,0,340,341,5,155,
  	0,0,341,342,5,8,0,0,342,343,5,165,0,0,343,369,1,0,0,0,344,345,3,128,64,
  	0,345,346,5,7,0,0,346,347,5,155,0,0,347,348,5,4,0,0,348,349,5,163,0,0,
  	349,369,1,0,0,0,350,351,5,20,0,0,351,352,3,86,43,0,352,353,5,21,0,0,353,
  	354,5,8,0,0,354,355,5,165,0,0,355,369,1,0,0,0,356,357,5,20,0,0,357,358,
  	3,86,43,0,358,359,5,155,0,0,359,360,5,8,0,0,360,361,5,165,0,0,361,369,
  	1,0,0,0,362,363,3,128,64,0,363,364,5,22,0,0,364,365,5,155,0,0,365,366,
  	5,4,0,0,366,367,5,163,0,0,367,369,1,0,0,0,368,313,1,0,0,0,368,317,1,0,
  	0,0,368,323,1,0,0,0,368,329,1,0,0,0,368,333,1,0,0,0,368,338,1,0,0,0,368,
  	344,1,0,0,0,368,350,1,0,0,0,368,356,1,0,0,0,368,362,1,0,0,0,369,23,1,
  	0,0,0,370,371,3,104,52,0,371,372,5,10,0,0,372,373,3,10,5,0,373,412,1,
  	0,0,0,374,375,3,8,4,0,375,376,5,4,0,0,376,377,5,163,0,0,377,378,5,5,0,
  	0,378,379,3,104,52,0,379,412,1,0,0,0,380,382,3,92,46,0,381,383,5,154,
  	0,0,382,381,1,0,0,0,382,383,1,0,0,0,383,384,1,0,0,0,384,386,3,8,4,0,385,
  	387,5,154,0,0,386,385,1,0,0,0,386,387,1,0,0,0,387,388,1,0,0,0,388,389,
  	5,5,0,0,389,390,3,104,52,0,390,412,1,0,0,0,391,392,5,23,0,0,392,412,5,
  	164,0,0,393,394,5,24,0,0,394,412,5,164,0,0,395,396,5,25,0,0,396,412,5,
  	164,0,0,397,398,5,26,0,0,398,412,5,163,0,0,399,400,5,27,0,0,400,412,5,
  	163,0,0,401,402,5,28,0,0,402,412,5,163,0,0,403,404,5,29,0,0,404,405,5,
  	163,0,0,405,406,5,30,0,0,406,412,3,56,28,0,407,408,5,29,0,0,408,409,5,
  	163,0,0,409,410,5,30,0,0,410,412,3,58,29,0,411,370,1,0,0,0,411,374,1,
  	0,0,0,411,380,1,0,0,0,411,391,1,0,0,0,411,393,1,0,0,0,411,395,1,0,0,0,
  	411,397,1,0,0,0,411,399,1,0,0,0,411,401,1,0,0,0,411,403,1,0,0,0,411,407,
  	1,0,0,0,412,25,1,0,0,0,413,414,3,132,66,0,414,415,5,167,0,0,415,416,5,
  	11,0,0,416,417,5,164,0,0,417,418,5,12,0,0,418,419,5,163,0,0,419,444,1,
  	0,0,0,420,421,5,31,0,0,421,422,5,167,0,0,422,423,5,32,0,0,423,424,5,164,
  	0,0,424,425,5,5,0,0,425,426,3,132,66,0,426,428,5,161,0,0,427,429,3,30,
  	15,0,428,427,1,0,0,0,428,429,1,0,0,0,429,444,1,0,0,0,430,432,3,90,45,
  	0,431,433,5,154,0,0,432,431,1,0,0,0,432,433,1,0,0,0,433,434,1,0,0,0,434,
  	435,5,31,0,0,435,437,5,167,0,0,436,438,5,154,0,0,437,436,1,0,0,0,437,
  	438,1,0,0,0,438,439,1,0,0,0,439,440,5,5,0,0,440,441,3,132,66,0,441,442,
  	5,161,0,0,442,444,1,0,0,0,443,413,1,0,0,0,443,420,1,0,0,0,443,430,1,0,
  	0,0,444,27,1,0,0,0,445,446,5,31,0,0,446,449,5,167,0,0,447,449,5,33,0,
  	0,448,445,1,0,0,0,448,447,1,0,0,0,449,29,1,0,0,0,450,451,5,12,0,0,451,
  	452,5,163,0,0,452,31,1,0,0,0,453,454,3,34,17,0,454,33,1,0,0,0,455,456,
  	3,130,65,0,456,457,5,167,0,0,457,458,5,11,0,0,458,459,5,164,0,0,459,460,
  	5,12,0,0,460,461,5,164,0,0,461,490,1,0,0,0,462,463,5,31,0,0,463,464,5,
  	167,0,0,464,465,5,32,0,0,465,466,5,164,0,0,466,467,5,5,0,0,467,490,3,
  	36,18,0,468,470,3,90,45,0,469,471,5,154,0,0,470,469,1,0,0,0,470,471,1,
  	0,0,0,471,472,1,0,0,0,472,473,5,31,0,0,473,475,5,167,0,0,474,476,5,154,
  	0,0,475,474,1,0,0,0,475,476,1,0,0,0,476,477,1,0,0,0,477,478,5,5,0,0,478,
  	479,3,36,18,0,479,490,1,0,0,0,480,481,3,130,65,0,481,482,5,167,0,0,482,
  	483,5,12,0,0,483,485,5,164,0,0,484,486,5,154,0,0,485,484,1,0,0,0,485,
  	486,1,0,0,0,486,487,1,0,0,0,487,488,3,38,19,0,488,490,1,0,0,0,489,455,
  	1,0,0,0,489,462,1,0,0,0,489,468,1,0,0,0,489,480,1,0,0,0,490,35,1,0,0,
  	0,491,492,3,130,65,0,492,493,5,161,0,0,493,494,5,12,0,0,494,495,5,164,
  	0,0,495,37,1,0,0,0,496,497,5,34,0,0,497,498,7,0,0,0,498,499,5,38,0,0,
  	499,500,5,161,0,0,500,501,5,32,0,0,501,502,5,164,0,0,502,39,1,0,0,0,503,
  	504,5,31,0,0,504,505,5,167,0,0,505,506,5,32,0,0,506,508,5,164,0,0,507,
  	509,5,154,0,0,508,507,1,0,0,0,508,509,1,0,0,0,509,510,1,0,0,0,510,511,
  	3,132,66,0,511,513,5,161,0,0,512,514,5,154,0,0,513,512,1,0,0,0,513,514,
  	1,0,0,0,514,515,1,0,0,0,515,516,5,5,0,0,516,517,3,92,46,0,517,536,1,0,
  	0,0,518,519,5,31,0,0,519,520,5,167,0,0,520,521,5,32,0,0,521,523,5,164,
  	0,0,522,524,5,154,0,0,523,522,1,0,0,0,523,524,1,0,0,0,524,525,1,0,0,0,
  	525,526,3,132,66,0,526,528,5,161,0,0,527,529,5,154,0,0,528,527,1,0,0,
  	0,528,529,1,0,0,0,529,530,1,0,0,0,530,531,5,5,0,0,531,532,3,130,65,0,
  	532,533,5,161,0,0,533,534,5,39,0,0,534,536,1,0,0,0,535,503,1,0,0,0,535,
  	518,1,0,0,0,536,41,1,0,0,0,537,538,3,132,66,0,538,539,5,167,0,0,539,574,
  	1,0,0,0,540,541,3,116,58,0,541,542,5,9,0,0,542,543,5,160,0,0,543,574,
  	1,0,0,0,544,545,3,118,59,0,545,546,5,160,0,0,546,547,5,10,0,0,547,548,
  	3,82,41,0,548,574,1,0,0,0,549,550,3,130,65,0,550,551,5,167,0,0,551,552,
  	5,12,0,0,552,553,5,164,0,0,553,574,1,0,0,0,554,555,5,31,0,0,555,556,3,
  	44,22,0,556,557,5,5,0,0,557,558,3,130,65,0,558,559,5,161,0,0,559,574,
  	1,0,0,0,560,562,3,90,45,0,561,563,5,154,0,0,562,561,1,0,0,0,562,563,1,
  	0,0,0,563,564,1,0,0,0,564,565,5,31,0,0,565,567,3,44,22,0,566,568,5,154,
  	0,0,567,566,1,0,0,0,567,568,1,0,0,0,568,569,1,0,0,0,569,570,5,5,0,0,570,
  	571,3,130,65,0,571,572,5,161,0,0,572,574,1,0,0,0,573,537,1,0,0,0,573,
  	540,1,0,0,0,573,544,1,0,0,0,573,549,1,0,0,0,573,554,1,0,0,0,573,560,1,
  	0,0,0,574,43,1,0,0,0,575,576,5,167,0,0,576,45,1,0,0,0,577,578,3,78,39,
  	0,578,579,5,40,0,0,579,580,3,52,26,0,580,621,1,0,0,0,581,582,3,80,40,
  	0,582,583,5,167,0,0,583,584,5,32,0,0,584,585,3,70,35,0,585,586,5,41,0,
  	0,586,587,5,161,0,0,587,588,5,10,0,0,588,589,3,52,26,0,589,621,1,0,0,
  	0,590,591,3,80,40,0,591,592,5,167,0,0,592,593,5,32,0,0,593,594,5,164,
  	0,0,594,595,5,42,0,0,595,596,5,161,0,0,596,597,5,43,0,0,597,621,1,0,0,
  	0,598,599,3,80,40,0,599,600,5,167,0,0,600,601,5,32,0,0,601,602,5,164,
  	0,0,602,603,5,41,0,0,603,604,5,161,0,0,604,605,5,10,0,0,605,606,5,167,
  	0,0,606,607,5,32,0,0,607,608,5,164,0,0,608,621,1,0,0,0,609,610,3,80,40,
  	0,610,611,5,167,0,0,611,612,5,32,0,0,612,613,5,164,0,0,613,614,5,5,0,
  	0,614,615,3,130,65,0,615,616,5,161,0,0,616,617,5,10,0,0,617,618,5,161,
  	0,0,618,619,3,68,34,0,619,621,1,0,0,0,620,577,1,0,0,0,620,581,1,0,0,0,
  	620,590,1,0,0,0,620,598,1,0,0,0,620,609,1,0,0,0,621,47,1,0,0,0,622,626,
  	5,44,0,0,623,624,5,45,0,0,624,626,3,50,25,0,625,622,1,0,0,0,625,623,1,
  	0,0,0,626,49,1,0,0,0,627,628,7,1,0,0,628,51,1,0,0,0,629,630,3,48,24,0,
  	630,631,5,4,0,0,631,632,5,163,0,0,632,53,1,0,0,0,633,634,7,2,0,0,634,
  	55,1,0,0,0,635,636,7,3,0,0,636,57,1,0,0,0,637,638,7,4,0,0,638,59,1,0,
  	0,0,639,640,7,5,0,0,640,61,1,0,0,0,641,642,7,6,0,0,642,63,1,0,0,0,643,
  	644,7,7,0,0,644,65,1,0,0,0,645,646,7,8,0,0,646,67,1,0,0,0,647,648,7,9,
  	0,0,648,69,1,0,0,0,649,650,3,72,36,0,650,651,5,87,0,0,651,656,1,0,0,0,
  	652,653,3,72,36,0,653,654,5,88,0,0,654,656,1,0,0,0,655,649,1,0,0,0,655,
  	652,1,0,0,0,656,71,1,0,0,0,657,658,7,10,0,0,658,73,1,0,0,0,659,660,7,
  	11,0,0,660,75,1,0,0,0,661,662,7,12,0,0,662,77,1,0,0,0,663,664,7,13,0,
  	0,664,79,1,0,0,0,665,666,7,14,0,0,666,81,1,0,0,0,667,670,5,108,0,0,668,
  	670,3,10,5,0,669,667,1,0,0,0,669,668,1,0,0,0,670,83,1,0,0,0,671,672,3,
  	114,57,0,672,673,5,6,0,0,673,674,5,165,0,0,674,85,1,0,0,0,675,676,7,15,
  	0,0,676,87,1,0,0,0,677,678,3,124,62,0,678,679,5,12,0,0,679,680,5,165,
  	0,0,680,89,1,0,0,0,681,682,3,124,62,0,682,683,5,12,0,0,683,684,5,164,
  	0,0,684,91,1,0,0,0,685,686,3,124,62,0,686,687,5,12,0,0,687,688,5,163,
  	0,0,688,93,1,0,0,0,689,690,3,120,60,0,690,691,5,7,0,0,691,692,5,156,0,
  	0,692,95,1,0,0,0,693,694,3,94,47,0,694,695,5,11,0,0,695,696,5,165,0,0,
  	696,97,1,0,0,0,697,698,3,118,59,0,698,699,5,115,0,0,699,99,1,0,0,0,700,
  	701,3,118,59,0,701,702,5,116,0,0,702,703,5,167,0,0,703,101,1,0,0,0,704,
  	705,3,118,59,0,705,706,5,116,0,0,706,707,5,167,0,0,707,708,5,32,0,0,708,
  	709,5,164,0,0,709,103,1,0,0,0,710,713,3,106,53,0,711,713,3,108,54,0,712,
  	710,1,0,0,0,712,711,1,0,0,0,713,105,1,0,0,0,714,715,5,117,0,0,715,716,
  	5,168,0,0,716,107,1,0,0,0,717,718,3,122,61,0,718,719,3,110,55,0,719,109,
  	1,0,0,0,720,730,5,118,0,0,721,730,5,119,0,0,722,723,5,120,0,0,723,730,
  	7,16,0,0,724,725,5,123,0,0,725,730,7,17,0,0,726,727,5,127,0,0,727,730,
  	7,18,0,0,728,730,5,130,0,0,729,720,1,0,0,0,729,721,1,0,0,0,729,722,1,
  	0,0,0,729,724,1,0,0,0,729,726,1,0,0,0,729,728,1,0,0,0,730,111,1,0,0,0,
  	731,732,7,19,0,0,732,113,1,0,0,0,733,734,7,20,0,0,734,115,1,0,0,0,735,
  	736,7,21,0,0,736,117,1,0,0,0,737,740,3,116,58,0,738,740,5,101,0,0,739,
  	737,1,0,0,0,739,738,1,0,0,0,740,119,1,0,0,0,741,742,7,22,0,0,742,121,
  	1,0,0,0,743,744,7,23,0,0,744,123,1,0,0,0,745,746,7,24,0,0,746,125,1,0,
  	0,0,747,750,3,124,62,0,748,750,5,142,0,0,749,747,1,0,0,0,749,748,1,0,
  	0,0,750,127,1,0,0,0,751,752,7,25,0,0,752,129,1,0,0,0,753,754,7,26,0,0,
  	754,131,1,0,0,0,755,756,5,149,0,0,756,133,1,0,0,0,757,758,7,27,0,0,758,
  	135,1,0,0,0,39,139,143,146,159,173,212,222,228,265,308,368,382,386,411,
  	428,432,437,443,448,470,475,485,489,508,513,523,528,535,562,567,573,620,
  	625,655,669,712,729,739,749
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
      ((1ULL << _la) & 278092120064) != 0) || ((((_la - 92) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 92)) & 4610559568798351359) != 0));
   
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
    if (((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 15) != 0)) {
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

std::vector<tree::TerminalNode *> gpsrParser::DeliverContext::Comma() {
  return getTokens(gpsrParser::Comma);
}

tree::TerminalNode* gpsrParser::DeliverContext::Comma(size_t i) {
  return getToken(gpsrParser::Comma, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
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
      setState(212);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(211);
        match(gpsrParser::Comma);
      }
      setState(214);
      vbfind();
      setState(215);
      match(gpsrParser::T__6);
      setState(216);
      match(gpsrParser::Object);
      setState(217);
      match(gpsrParser::T__9);
      setState(218);
      someone();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(220);
      goplace();
      setState(222);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(221);
        match(gpsrParser::Comma);
      }
      setState(224);
      vbfind();
      setState(225);
      match(gpsrParser::T__6);
      setState(226);
      match(gpsrParser::Object);
      setState(228);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(227);
        match(gpsrParser::Comma);
      }
      setState(230);
      match(gpsrParser::T__4);
      setState(231);
      place();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(233);
      vbbtake();
      setState(234);
      match(gpsrParser::T__6);
      setState(235);
      match(gpsrParser::Object_alike);
      setState(236);
      match(gpsrParser::T__10);
      setState(237);
      match(gpsrParser::Room);
      setState(238);
      match(gpsrParser::T__11);
      setState(239);
      match(gpsrParser::Placement);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(241);
      vbbring();
      setState(242);
      match(gpsrParser::T__8);
      setState(243);
      match(gpsrParser::Object_alike);
      setState(244);
      match(gpsrParser::T__10);
      setState(245);
      match(gpsrParser::Placement);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(247);
      takefrom();
      setState(248);
      match(gpsrParser::T__4);
      setState(249);
      delivme();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(251);
      takefrom();
      setState(252);
      match(gpsrParser::T__4);
      setState(253);
      delivat();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(255);
      takefrom();
      setState(256);
      match(gpsrParser::T__4);
      setState(257);
      place();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(259);
      vbbtake();
      setState(260);
      match(gpsrParser::T__12);
      setState(261);
      luggage();
      setState(262);
      match(gpsrParser::T__11);
      setState(263);
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
    setState(267);
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
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(269);
      vbbtake();
      setState(270);
      match(gpsrParser::T__6);
      setState(271);
      match(gpsrParser::Object_known);
      setState(272);
      match(gpsrParser::T__11);
      setState(273);
      match(gpsrParser::Placement);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(275);
      vbbring();
      setState(276);
      match(gpsrParser::T__8);
      setState(277);
      abspos();
      setState(278);
      match(gpsrParser::T__13);
      setState(279);
      cmanobjsrc();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(281);
      vbbring();
      setState(282);
      match(gpsrParser::T__14);
      setState(283);
      relpos();
      setState(284);
      match(gpsrParser::T__6);
      setState(285);
      match(gpsrParser::Object);
      setState(286);
      cmanobjsrc();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(288);
      vbbring();
      setState(289);
      match(gpsrParser::T__8);
      setState(290);
      oprop();
      setState(291);
      match(gpsrParser::T__13);
      setState(292);
      cmanobjsrc();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(294);
      vbbring();
      setState(295);
      match(gpsrParser::T__8);
      setState(296);
      oprop();
      setState(297);
      match(gpsrParser::Category);
      setState(298);
      cmanobjsrc();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(300);
      vbcleanup();
      setState(301);
      match(gpsrParser::T__6);
      setState(302);
      match(gpsrParser::Room);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(304);
      vbtakeout();
      setState(305);
      match(gpsrParser::T__6);
      setState(306);
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
    setState(310);
    match(gpsrParser::T__10);
    setState(311);
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
    setState(368);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(313);
      match(gpsrParser::T__15);
      setState(314);
      match(gpsrParser::Object);
      setState(315);
      match(gpsrParser::T__16);
      setState(316);
      match(gpsrParser::Placement);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(317);
      vbfind();
      setState(318);
      match(gpsrParser::T__6);
      setState(319);
      match(gpsrParser::Object);
      setState(320);
      match(gpsrParser::T__3);
      setState(321);
      match(gpsrParser::Room);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(323);
      vbfind();
      setState(324);
      match(gpsrParser::T__6);
      setState(325);
      match(gpsrParser::Object_alike_obfuscated);
      setState(326);
      match(gpsrParser::T__3);
      setState(327);
      match(gpsrParser::Room);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(329);
      match(gpsrParser::T__15);
      setState(330);
      match(gpsrParser::Category);
      setState(331);
      match(gpsrParser::T__16);
      setState(332);
      match(gpsrParser::Placement);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(333);
      match(gpsrParser::T__17);
      setState(334);
      oprop();
      setState(335);
      match(gpsrParser::T__18);
      setState(336);
      match(gpsrParser::Placement);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(338);
      match(gpsrParser::T__17);
      setState(339);
      oprop();
      setState(340);
      match(gpsrParser::Category);
      setState(341);
      match(gpsrParser::T__7);
      setState(342);
      match(gpsrParser::Placement);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(344);
      vbfind();
      setState(345);
      match(gpsrParser::T__6);
      setState(346);
      match(gpsrParser::Category);
      setState(347);
      match(gpsrParser::T__3);
      setState(348);
      match(gpsrParser::Room);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(350);
      match(gpsrParser::T__19);
      setState(351);
      oprop();
      setState(352);
      match(gpsrParser::T__20);
      setState(353);
      match(gpsrParser::T__7);
      setState(354);
      match(gpsrParser::Placement);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(356);
      match(gpsrParser::T__19);
      setState(357);
      oprop();
      setState(358);
      match(gpsrParser::Category);
      setState(359);
      match(gpsrParser::T__7);
      setState(360);
      match(gpsrParser::Placement);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(362);
      vbfind();
      setState(363);
      match(gpsrParser::T__21);
      setState(364);
      match(gpsrParser::Category);
      setState(365);
      match(gpsrParser::T__3);
      setState(366);
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

std::vector<tree::TerminalNode *> gpsrParser::FndpplContext::Comma() {
  return getTokens(gpsrParser::Comma);
}

tree::TerminalNode* gpsrParser::FndpplContext::Comma(size_t i) {
  return getToken(gpsrParser::Comma, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(370);
      talk();
      setState(371);
      match(gpsrParser::T__9);
      setState(372);
      whoWhere();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(374);
      findp();
      setState(375);
      match(gpsrParser::T__3);
      setState(376);
      match(gpsrParser::Room);
      setState(377);
      match(gpsrParser::T__4);
      setState(378);
      talk();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(380);
      goroom();
      setState(382);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(381);
        match(gpsrParser::Comma);
      }
      setState(384);
      findp();
      setState(386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(385);
        match(gpsrParser::Comma);
      }
      setState(388);
      match(gpsrParser::T__4);
      setState(389);
      talk();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(391);
      match(gpsrParser::T__22);
      setState(392);
      match(gpsrParser::Beacon);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(393);
      match(gpsrParser::T__23);
      setState(394);
      match(gpsrParser::Beacon);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(395);
      match(gpsrParser::T__24);
      setState(396);
      match(gpsrParser::Beacon);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(397);
      match(gpsrParser::T__25);
      setState(398);
      match(gpsrParser::Room);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(399);
      match(gpsrParser::T__26);
      setState(400);
      match(gpsrParser::Room);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(401);
      match(gpsrParser::T__27);
      setState(402);
      match(gpsrParser::Room);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(403);
      match(gpsrParser::T__28);
      setState(404);
      match(gpsrParser::Room);
      setState(405);
      match(gpsrParser::T__29);
      setState(406);
      pgenderp();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(407);
      match(gpsrParser::T__28);
      setState(408);
      match(gpsrParser::Room);
      setState(409);
      match(gpsrParser::T__29);
      setState(410);
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

std::vector<tree::TerminalNode *> gpsrParser::FollowContext::Comma() {
  return getTokens(gpsrParser::Comma);
}

tree::TerminalNode* gpsrParser::FollowContext::Comma(size_t i) {
  return getToken(gpsrParser::Comma, i);
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
    setState(443);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__148: {
        enterOuterAlt(_localctx, 1);
        setState(413);
        vbfollow();
        setState(414);
        match(gpsrParser::Name);
        setState(415);
        match(gpsrParser::T__10);
        setState(416);
        match(gpsrParser::Beacon);
        setState(417);
        match(gpsrParser::T__11);
        setState(418);
        match(gpsrParser::Room);
        break;
      }

      case gpsrParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(420);
        match(gpsrParser::T__30);
        setState(421);
        match(gpsrParser::Name);
        setState(422);
        match(gpsrParser::T__31);
        setState(423);
        match(gpsrParser::Beacon);
        setState(424);
        match(gpsrParser::T__4);
        setState(425);
        vbfollow();
        setState(426);
        match(gpsrParser::Pron);
        setState(428);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gpsrParser::T__11) {
          setState(427);
          fllwdest();
        }
        break;
      }

      case gpsrParser::T__139:
      case gpsrParser::T__140: {
        enterOuterAlt(_localctx, 3);
        setState(430);
        gobeacon();
        setState(432);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gpsrParser::Comma) {
          setState(431);
          match(gpsrParser::Comma);
        }
        setState(434);
        match(gpsrParser::T__30);
        setState(435);
        match(gpsrParser::Name);
        setState(437);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gpsrParser::Comma) {
          setState(436);
          match(gpsrParser::Comma);
        }
        setState(439);
        match(gpsrParser::T__4);
        setState(440);
        vbfollow();
        setState(441);
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
    setState(448);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__30: {
        enterOuterAlt(_localctx, 1);
        setState(445);
        match(gpsrParser::T__30);
        setState(446);
        match(gpsrParser::Name);
        break;
      }

      case gpsrParser::T__32: {
        enterOuterAlt(_localctx, 2);
        setState(447);
        match(gpsrParser::T__32);
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
    setState(450);
    match(gpsrParser::T__11);
    setState(451);
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
    setState(453);
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

std::vector<tree::TerminalNode *> gpsrParser::GdcmdContext::Comma() {
  return getTokens(gpsrParser::Comma);
}

tree::TerminalNode* gpsrParser::GdcmdContext::Comma(size_t i) {
  return getToken(gpsrParser::Comma, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(455);
      vbguide();
      setState(456);
      match(gpsrParser::Name);
      setState(457);
      match(gpsrParser::T__10);
      setState(458);
      match(gpsrParser::Beacon);
      setState(459);
      match(gpsrParser::T__11);
      setState(460);
      match(gpsrParser::Beacon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(462);
      match(gpsrParser::T__30);
      setState(463);
      match(gpsrParser::Name);
      setState(464);
      match(gpsrParser::T__31);
      setState(465);
      match(gpsrParser::Beacon);
      setState(466);
      match(gpsrParser::T__4);
      setState(467);
      guideto();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(468);
      gobeacon();
      setState(470);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(469);
        match(gpsrParser::Comma);
      }
      setState(472);
      match(gpsrParser::T__30);
      setState(473);
      match(gpsrParser::Name);
      setState(475);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(474);
        match(gpsrParser::Comma);
      }
      setState(477);
      match(gpsrParser::T__4);
      setState(478);
      guideto();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(480);
      vbguide();
      setState(481);
      match(gpsrParser::Name);
      setState(482);
      match(gpsrParser::T__11);
      setState(483);
      match(gpsrParser::Beacon);
      setState(485);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(484);
        match(gpsrParser::Comma);
      }
      setState(487);
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
    setState(491);
    vbguide();
    setState(492);
    match(gpsrParser::Pron);
    setState(493);
    match(gpsrParser::T__11);
    setState(494);
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
    setState(496);
    match(gpsrParser::T__33);
    setState(497);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 240518168576) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(498);
    match(gpsrParser::T__37);
    setState(499);
    match(gpsrParser::Pron);
    setState(500);
    match(gpsrParser::T__31);
    setState(501);
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

std::vector<tree::TerminalNode *> gpsrParser::FollowoutContext::Comma() {
  return getTokens(gpsrParser::Comma);
}

tree::TerminalNode* gpsrParser::FollowoutContext::Comma(size_t i) {
  return getToken(gpsrParser::Comma, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(535);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(503);
      match(gpsrParser::T__30);
      setState(504);
      match(gpsrParser::Name);
      setState(505);
      match(gpsrParser::T__31);
      setState(506);
      match(gpsrParser::Beacon);
      setState(508);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(507);
        match(gpsrParser::Comma);
      }
      setState(510);
      vbfollow();
      setState(511);
      match(gpsrParser::Pron);
      setState(513);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(512);
        match(gpsrParser::Comma);
      }
      setState(515);
      match(gpsrParser::T__4);
      setState(516);
      goroom();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(518);
      match(gpsrParser::T__30);
      setState(519);
      match(gpsrParser::Name);
      setState(520);
      match(gpsrParser::T__31);
      setState(521);
      match(gpsrParser::Beacon);
      setState(523);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(522);
        match(gpsrParser::Comma);
      }
      setState(525);
      vbfollow();
      setState(526);
      match(gpsrParser::Pron);
      setState(528);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(527);
        match(gpsrParser::Comma);
      }
      setState(530);
      match(gpsrParser::T__4);
      setState(531);
      vbguide();
      setState(532);
      match(gpsrParser::Pron);
      setState(533);
      match(gpsrParser::T__38);
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

std::vector<tree::TerminalNode *> gpsrParser::IncompleteContext::Comma() {
  return getTokens(gpsrParser::Comma);
}

tree::TerminalNode* gpsrParser::IncompleteContext::Comma(size_t i) {
  return getToken(gpsrParser::Comma, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(573);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(537);
      vbfollow();
      setState(538);
      match(gpsrParser::Name);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(540);
      vbbring();
      setState(541);
      match(gpsrParser::T__8);
      setState(542);
      match(gpsrParser::Object_obfuscated);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(544);
      vbdeliver();
      setState(545);
      match(gpsrParser::Object_obfuscated);
      setState(546);
      match(gpsrParser::T__9);
      setState(547);
      someone();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(549);
      vbguide();
      setState(550);
      match(gpsrParser::Name);
      setState(551);
      match(gpsrParser::T__11);
      setState(552);
      match(gpsrParser::Beacon);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(554);
      match(gpsrParser::T__30);
      setState(555);
      inguidewho();
      setState(556);
      match(gpsrParser::T__4);
      setState(557);
      vbguide();
      setState(558);
      match(gpsrParser::Pron);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(560);
      gobeacon();
      setState(562);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(561);
        match(gpsrParser::Comma);
      }
      setState(564);
      match(gpsrParser::T__30);
      setState(565);
      inguidewho();
      setState(567);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == gpsrParser::Comma) {
        setState(566);
        match(gpsrParser::Comma);
      }
      setState(569);
      match(gpsrParser::T__4);
      setState(570);
      vbguide();
      setState(571);
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
    setState(575);
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
    setState(620);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(577);
      vbserve();
      setState(578);
      match(gpsrParser::T__39);
      setState(579);
      phpeopler();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(581);
      vbmeet();
      setState(582);
      match(gpsrParser::Name);
      setState(583);
      match(gpsrParser::T__31);
      setState(584);
      door();
      setState(585);
      match(gpsrParser::T__40);
      setState(586);
      match(gpsrParser::Pron);
      setState(587);
      match(gpsrParser::T__9);
      setState(588);
      phpeopler();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(590);
      vbmeet();
      setState(591);
      match(gpsrParser::Name);
      setState(592);
      match(gpsrParser::T__31);
      setState(593);
      match(gpsrParser::Beacon);
      setState(594);
      match(gpsrParser::T__41);
      setState(595);
      match(gpsrParser::Pron);
      setState(596);
      match(gpsrParser::T__42);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(598);
      vbmeet();
      setState(599);
      match(gpsrParser::Name);
      setState(600);
      match(gpsrParser::T__31);
      setState(601);
      match(gpsrParser::Beacon);
      setState(602);
      match(gpsrParser::T__40);
      setState(603);
      match(gpsrParser::Pron);
      setState(604);
      match(gpsrParser::T__9);
      setState(605);
      match(gpsrParser::Name);
      setState(606);
      match(gpsrParser::T__31);
      setState(607);
      match(gpsrParser::Beacon);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(609);
      vbmeet();
      setState(610);
      match(gpsrParser::Name);
      setState(611);
      match(gpsrParser::T__31);
      setState(612);
      match(gpsrParser::Beacon);
      setState(613);
      match(gpsrParser::T__4);
      setState(614);
      vbguide();
      setState(615);
      match(gpsrParser::Pron);
      setState(616);
      match(gpsrParser::T__9);
      setState(617);
      match(gpsrParser::Pron);
      setState(618);
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
    setState(625);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__43: {
        enterOuterAlt(_localctx, 1);
        setState(622);
        match(gpsrParser::T__43);
        break;
      }

      case gpsrParser::T__44: {
        enterOuterAlt(_localctx, 2);
        setState(623);
        match(gpsrParser::T__44);
        setState(624);
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
    setState(627);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4433230883192832) != 0))) {
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
    setState(629);
    phpeople();
    setState(630);
    match(gpsrParser::T__3);
    setState(631);
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
    setState(633);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 283726776524341248) != 0))) {
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
    setState(635);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4323877854740742144) != 0))) {
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
    setState(637);
    _la = _input->LA(1);
    if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & 7) != 0))) {
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
    setState(639);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__64

    || _la == gpsrParser::T__65)) {
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
    setState(641);
    _la = _input->LA(1);
    if (!(((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 63) != 0))) {
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
    setState(643);
    _la = _input->LA(1);
    if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 63) != 0))) {
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
    setState(645);
    _la = _input->LA(1);
    if (!(((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & 31) != 0))) {
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
    setState(647);
    _la = _input->LA(1);
    if (!(((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & 7) != 0))) {
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
    setState(655);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(649);
      doorpos();
      setState(650);
      match(gpsrParser::T__86);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(652);
      doorpos();
      setState(653);
      match(gpsrParser::T__87);
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
    setState(657);
    _la = _input->LA(1);
    if (!(((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & 7881299347898369) != 0))) {
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
    setState(659);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__91

    || _la == gpsrParser::T__92)) {
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
    setState(661);
    _la = _input->LA(1);
    if (!(((((_la - 94) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 94)) & 31) != 0))) {
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
    setState(663);
    _la = _input->LA(1);
    if (!(((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & 63) != 0))) {
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
    setState(665);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__37 || ((((_la - 105) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 105)) & 7) != 0))) {
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
    setState(669);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__107: {
        enterOuterAlt(_localctx, 1);
        setState(667);
        match(gpsrParser::T__107);
        break;
      }

      case gpsrParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(668);
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
    setState(671);
    vbplace();
    setState(672);
    match(gpsrParser::T__5);
    setState(673);
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
    setState(675);
    _la = _input->LA(1);
    if (!(((((_la - 109) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 109)) & 63) != 0))) {
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
    setState(677);
    vbgopl();
    setState(678);
    match(gpsrParser::T__11);
    setState(679);
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
    setState(681);
    vbgopl();
    setState(682);
    match(gpsrParser::T__11);
    setState(683);
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
    setState(685);
    vbgopl();
    setState(686);
    match(gpsrParser::T__11);
    setState(687);
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
    setState(689);
    vbtake();
    setState(690);
    match(gpsrParser::T__6);
    setState(691);
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
    setState(693);
    take();
    setState(694);
    match(gpsrParser::T__10);
    setState(695);
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
    setState(697);
    vbdeliver();
    setState(698);
    match(gpsrParser::T__114);
   
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
    setState(700);
    vbdeliver();
    setState(701);
    match(gpsrParser::T__115);
    setState(702);
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
    setState(704);
    vbdeliver();
    setState(705);
    match(gpsrParser::T__115);
    setState(706);
    match(gpsrParser::Name);
    setState(707);
    match(gpsrParser::T__31);
    setState(708);
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
    setState(712);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__116: {
        enterOuterAlt(_localctx, 1);
        setState(710);
        answer();
        break;
      }

      case gpsrParser::T__137:
      case gpsrParser::T__138: {
        enterOuterAlt(_localctx, 2);
        setState(711);
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
    setState(714);
    match(gpsrParser::T__116);
    setState(715);
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
    setState(717);
    vbspeak();
    setState(718);
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
    setState(729);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__117: {
        enterOuterAlt(_localctx, 1);
        setState(720);
        match(gpsrParser::T__117);
        break;
      }

      case gpsrParser::T__118: {
        enterOuterAlt(_localctx, 2);
        setState(721);
        match(gpsrParser::T__118);
        break;
      }

      case gpsrParser::T__119: {
        enterOuterAlt(_localctx, 3);
        setState(722);
        match(gpsrParser::T__119);
        setState(723);
        _la = _input->LA(1);
        if (!(_la == gpsrParser::T__120

        || _la == gpsrParser::T__121)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case gpsrParser::T__122: {
        enterOuterAlt(_localctx, 4);
        setState(724);
        match(gpsrParser::T__122);
        setState(725);
        _la = _input->LA(1);
        if (!(((((_la - 124) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 124)) & 7) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case gpsrParser::T__126: {
        enterOuterAlt(_localctx, 5);
        setState(726);
        match(gpsrParser::T__126);
        setState(727);
        _la = _input->LA(1);
        if (!(_la == gpsrParser::T__127

        || _la == gpsrParser::T__128)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case gpsrParser::T__129: {
        enterOuterAlt(_localctx, 6);
        setState(728);
        match(gpsrParser::T__129);
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
    setState(731);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__130

    || _la == gpsrParser::T__131)) {
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
    setState(733);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__132

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
    setState(735);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__102

    || _la == gpsrParser::T__130)) {
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
    setState(739);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__102:
      case gpsrParser::T__130: {
        enterOuterAlt(_localctx, 1);
        setState(737);
        vbbring();
        break;
      }

      case gpsrParser::T__100: {
        enterOuterAlt(_localctx, 2);
        setState(738);
        match(gpsrParser::T__100);
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
    setState(741);
    _la = _input->LA(1);
    if (!(((((_la - 132) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 132)) & 57) != 0))) {
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
    setState(743);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__137

    || _la == gpsrParser::T__138)) {
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
    setState(745);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__139

    || _la == gpsrParser::T__140)) {
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
    setState(749);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gpsrParser::T__139:
      case gpsrParser::T__140: {
        enterOuterAlt(_localctx, 1);
        setState(747);
        vbgopl();
        break;
      }

      case gpsrParser::T__141: {
        enterOuterAlt(_localctx, 2);
        setState(748);
        match(gpsrParser::T__141);
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
    setState(751);
    _la = _input->LA(1);
    if (!(_la == gpsrParser::T__37 || _la == gpsrParser::T__142

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
    setState(753);
    _la = _input->LA(1);
    if (!(((((_la - 132) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 132)) & 122881) != 0))) {
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
    setState(755);
    match(gpsrParser::T__148);
   
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
    setState(757);
    _la = _input->LA(1);
    if (!(((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & 15) != 0))) {
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
