grammar gpsr;

/* MAIN */
instruction : mainSentence+;
mainSentence : pmain | main;
pmain : Polite? main;

main : fndppl | fndobj | guide | follow | followout | incomplete | man | complexman | partyhost;

/* --------------------- category1.txt -------------------------- */

/* Production Rules required by common.txt */
/* What to say */


// Rule for finding a specific (named) person
findp
    : vbfind 'a' pgenders           # find_gender
    | vbfind 'a' 'person' Gesture     # find_gesture
    | vbfind 'a' 'person' Pose        # find_Pose
    ;
// A named or described person in the given place
whoWhere : 'the' 'person' Gesture 'in' 'the' Room;

/* Manipulation */
man : deliver;
deliver
    : take 'and' vbplace 'it' 'on' 'the' placement      
    | vbplace 'the' object_known 'on' 'the' placement
    | vbbring 'me' 'the' object_known
    | vbdeliver 'the' object_known 'to' someone
    | takefrom 'and' vbplace 'it' 'on' 'the' placement
    | goplace Comma? vbfind 'the' Object 'to' someone
    | goplace Comma? vbfind 'the' Object Comma? 'and' place
    | vbbtake 'the' object_alike 'from' 'the' Room 'to' 'the' placement
    | vbbring 'me' 'the' object_alike 'from' 'the' placement
    | takefrom 'and' delivme
    | takefrom 'and' delivat
    | takefrom 'and' place
    | vbbtake 'my' Luggage 'to' 'the' Taxi
    ;

/* Complex manipulation */
complexman : cmancmd;
cmancmd
    : vbbtake 'the' object_known 'to' 'the' placement
    | vbbring 'me' 'the' Abspos 'object' cmanobjsrc
    | vbbring 'me' 'the' 'object' Relpos 'the' Object cmanobjsrc
    // | vbbring 'me' 'the' Oprop 'object' cmanobjsrc
    | vbbring 'me' 'the' Oprop Category cmanobjsrc
    | Vbcleanup 'the' Room
    | Vbtakeout 'the' Garbage
    | vbbring 'the' Object 'from' 'the' (Room | beacon) 'to' 'the' (Room | beacon)
    ;
cmanobjsrc : 'from' 'the' placement;

/* Find objects */
fndobj
    : TELL 'me' 'how' 'many' Object 'there' 'are' 'on' 'the' placement
    | vbfind 'the' Object 'in' 'the' Room
    // | vbfind 'the' object_alike_obfuscated 'in' 'the' Room
    | TELL 'me' 'how' 'many' Category 'there' 'are' 'on' 'the' placement
    | TELL 'me' 'what\'s' 'the' Oprop 'object' 'on' 'the' placement
    | TELL 'me' 'what\'s' 'the' Oprop Category 'on' 'the' placement
    | vbfind 'the' Category 'in' 'the' Room
    | TELL 'me' 'which' 'are' 'the' 'three' Oprop 'objects' 'on' 'the' placement
    | TELL 'me' 'which' 'are' 'the' 'three' Oprop Category 'on' 'the' placement
    | vbfind 'three' Category 'in' 'the' Room
    ;

/* Find people */
fndppl
    : talk 'to' whoWhere                                    # talk_to_whowhere
    | findp 'in' 'the' Room 'and' talk                        # find_talk_in_room
    | goroom Comma? findp Comma? 'and' talk                 # go_room_talk
    | TELL 'me' 'the' 'name' 'of' 'the' 'person' 'at' 'the' beacon        # tell_name_beacon
    | TELL 'me' 'the' 'gender' 'of' 'the' 'person' 'at' 'the' beacon      # tell_gender_beacon
    | TELL 'me' 'the' 'Pose' 'of' 'the' 'person' 'at' 'the' beacon        # tell_Pose_beacon
    | TELL 'me' 'the' 'name' 'of' 'the' 'person' 'in' 'the' Room          # tell_name_room
    | TELL 'me' 'the' 'gender' 'of' 'the' 'person' 'in' 'the' Room        # tell_gender_room
    | TELL 'me' 'the' 'Pose' 'of' 'the' 'person' 'in' 'the' Room          # tell_Pose_room
    | TELL 'me' 'how' 'many' 'people' 'in' 'the' Room 'are' pgenderp  # tell_gender_number
    | TELL 'me' 'how' 'many' 'people' 'in' 'the' Room 'are' Pose      # tell_Pose_number
    ;

/* Follow People */
follow 
    : vbfollow Name ('from' 'the' beacon 'to' 'the' Room)?                 # from_beacon_to_room
    | 'meet' Name 'at' 'the' beacon 'and' vbfollow Pron fllwdest?     # from_beacon_to_room_indirect
    | gobeacon Comma? 'meet' Name Comma? 'and' vbfollow Pron        # from_beacon_to_where
    ;
fllmeet
    : ('meet' Name) | 'find a person'
    ;
fllwdest
    : ('to' 'the' Room)
    ;

/* Follow [& Guide] */
guide : gdcmd;
gdcmd
    : vbguide Name 'from' 'the' beacon 'to' 'the' beacon        # beacon_to_beacon
    | 'meet' Name 'at' 'the' beacon 'and' guideto             # beacon_to_beacon_guide_to
    | gobeacon Comma? 'meet' Name Comma? 'and' guideto      # beacon_to_beacon_gobeacon_guideto
    | vbguide Name 'to' 'the' beacon Comma? gdwhere           # beacon_to_beacon_gdwhere
    ;
guideto : vbguide Pron 'to' 'the' beacon;
gdwhere : 'you' ( 'may' | 'can' | 'will' ) 'find' Pron 'at' 'the' beacon;
followout
    : 'meet' Name 'at' 'the' beacon Comma? vbfollow Pron Comma? 'and' goroom              # beacon_to_room
    | 'meet' Name 'at' 'the' beacon Comma? vbfollow Pron Comma? 'and' vbguide Pron 'back' # beacon_to_back
    ;

/* Incomplete commands */
incomplete
    : vbfollow Name
    | vbbring 'me' 'the' object_obfuscated
    | vbdeliver object_obfuscated 'to' someone
    | vbguide Name 'to' 'the' beacon
    | 'meet' inguidewho 'and' vbguide Pron
    | gobeacon Comma? 'meet' inguidewho Comma? 'and' vbguide Pron
    ;
inguidewho : Name;

/* Party host */
partyhost
    : Vbserve 'drinks' 'to' phpeopler
    | Vbmeet Name 'at' 'the' door 'and' 'introduce' Pron 'to' phpeopler
    | Vbmeet Name 'at' 'the' beacon 'and' 'ask' Pron 'to' 'leave'
    | Vbmeet Name 'at' 'the' beacon 'and' 'introduce' Pron 'to' Name 'at' 'the' beacon
    | Vbmeet Name 'at' 'the' beacon 'and' vbguide Pron 'to' Pron Taxi
    ;
phpeople   : 'everyone' | 'all' 'the' peopletype;
peopletype : 'people' | 'men' | 'women' | 'guests' | 'elders' | 'children';
phpeopler  : phpeople 'in' 'the' Room;

/* Rules */
MAN : 'man';
WOMAN : 'woman';
BOY : 'boy';
GIRL : 'girl';
MEN : 'men';
WOMEN : 'women';
BOYS : 'boys';
GIRLS : 'girls';
MALE : 'male';
FEMALE : 'female';

pgenders : MAN | WOMAN | BOY | GIRL;
pgenderp : MEN | WOMEN | BOYS | GIRLS | MALE | FEMALE;
Pose     : 'sitting' | 'standing' | 'lying' 'down';
Abspos   : 'left' 'most' | 'right' 'most';
Relpos   : 'at' 'the' 'left' 'of' | 'at' 'the' 'right' 'of' | 'on' 'top' 'of' | 'above' | 'behind' | 'under';
Garbage  : 'litter' | 'Garbage' | 'trash' | 'waste' | 'debris' | 'junk';
Luggage  : 'bag' | 'baggage' | 'valise' | 'suitcase' | 'trolley';
Taxi     : 'Taxi' | 'cab' | 'uber';
door     : Doorpos 'entrance' | Doorpos 'door';
Doorpos  : 'front' | 'back' | 'main' | 'rear';

/* Verbs */
Vbtakeout : 'take out' | 'dump';
Vbcleanup : 'clean' 'out' | 'clean' 'up' | 'tidy' 'op' | 'neaten' | 'order';
Vbserve   : 'serve' | 'arrange' | 'deliver' | 'distribute' | 'give' | 'provide';
Vbmeet    : 'contact' | 'face' | 'find' | 'greet';

/* --------------------- common.txt -------------------------- */
/* Rules */
// people
someone : 'me' | whoWhere;
// place an object
place : vbplace 'it' 'on' 'the' placement;
// object properties
Oprop : 'biggest' | 'largest' | 'smallest' | 'heaviest' | 'lightest' | 'thinnest';
// navigating
goplace : vbgopl 'to' 'the' placement;
gobeacon : vbgopl 'to' 'the' beacon;
goroom : vbgopl 'to' 'the' Room;
// take an object
take : vbtake 'the' Object;
takefrom : take 'from' 'the' placement;
// deliver an object
delivme : vbdeliver 'it' 'to' 'me';
delivto : vbdeliver 'it' 'to' Name;
delivat : vbdeliver 'it' 'to' Name 'at' 'the' beacon;
// speak
talk 
    : Answer    # answer_question 
    | speak     # speak_to
    ;
Answer : 'answer a question';
speak : vbspeak Whattosay;

Whattosay
    : 'something about yourself'
    | 'the time'
    | 'what day is tomorrow'
    | 'what day is today'
    | 'your team\'s' ( 'name' | 'country' | 'affiliation' )
    | 'the day of the' ( 'week' | 'month' )
    | 'a joke'
    ;

/* Verbs */
BRING : 'bring';
TAKE : 'take';
PUT : 'put';
PLACE : 'place';
GET : 'get';
GRASP : 'grasp';
PICK_UP : 'pick up';
TELL : 'tell';
SAY : 'say';
GO : 'go';
NAVIGATE : 'navigate';
ENTER : 'enter';
LOCATE : 'locate';
LOOK_FOR : 'look_for';
GUIDE : 'guide';
ESCORT : 'escort';
LEAD : 'lead';
ACCOMPANY : 'accompany';
FOLLOW : 'follow';

vbbtake : BRING | TAKE;
vbplace : PUT | PLACE;
vbbring : BRING | 'bring';
vbdeliver :  vbbring | 'diliver';
vbtake : GET | GRASP | TAKE | PICK_UP;
vbspeak : TELL | SAY;
vbgopl : GO | NAVIGATE;
vbgor : vbgopl | ENTER;
vbfind : 'find' | LOCATE | LOOK_FOR;
vbguide : GUIDE | ESCORT | TAKE | LEAD | ACCOMPANY;
vbfollow : FOLLOW;

/* Polite */
Polite
    : 'please'
    | 'could you'
    | 'robot please'
    | 'could you please'
    ;


Comma : ',';

/* ---------------------    xmls    -------------------------- */
/* Locations */
Room      : 'bedroom' | 'dining room' | 'living room' | 'kitchen' | 'corridot';
beacon    : Location_except_room;
placement : Location_except_room;
Location_except_room : 'bed' | 'dresser' | 'desk' | 'dining table' | 'storage box'
                     | 'wine rack' | 'couch' | 'side table' | 'tv cabinet' | 'storage table'
                     | 'sink' | 'dishwasher' | 'entrance' | 'exit';

/* Object categories (giving the objects.xml)*/
Category : 'food' | 'drinks' | 'cleaning stuff' | 'object';

/* Objects */
Object       : 'chip' | 'biscuit' | 'bread' | 'sprite' | 'cola' | 'water' | 'dishsoap' | 'dish soap'
             | 'handwash' | 'shampoo' | 'cookie' | 'lays' | 'bowl' | 'cloth' | 'tray' | 'orange juice';
object_alike : Object;
object_known : Object;

object_alike_obfuscated: Category;
object_obfuscated: Category;

Pron
    : 'he' | 'him' | 'his' | 'himself'
    | 'she' | 'her' |'hers' | 'herself'
    | 'it' | 'its' | 'itself'
    | 'my' | 'mine' | 'your' | 'yours' | 'myself'
    | 'they' | 'them'| 'their' | 'theirs' 
    ;

/* Gestures */
Gesture : 'waving' | 'raising their left arm' | 'raising their right arm' 
        | 'pointing to the left' | 'pointing to the right';

/* Names */
Name
    : 'alex'
    | 'charlie'
    | 'francis'
    | 'james'
    | 'john'
    | 'michael'
    | 'robert'
    | 'robin'
    | 'skyler'
    | 'william'
    | 'elizabeth'
    | 'jennifer'
    | 'linda'
    | 'mary'
    | 'patricia'
    | 'someone'
    ;

// Question
//     : 'Who\'s the most handsome person in Canada?'
//     | 'How many time zones are there in Canada?'
//     | 'What\'s the longest street in the world?'
//     | 'How long is Yonge Street in Ontario?'
//     | 'What\'s the name of the bear cub exported from Canada to the London Zoo in 1915?'
//     | 'Where was the Blackberry Smartphone developed?'
//     | 'What is the world\'s largest coin?'
//     | 'In what year was Canada invaded by the USA for the first time?'
//     | 'What year was Canada invaded by the USA for the second time?'
//     | 'What country holds the record for the most gold medals at the Winter Olympics?'
//     | 'Who coined the term Beatlemania?'
//     | 'Why is Canada named Canada?'
//     | 'When was The Mounted Police formed?'
//     | 'When was The Royal Canadian Mounted Police formed?'
//     | 'How big is the RCMP?'
//     | 'What else is Montreal called?'
//     | 'Where is The Hotel de Glace located?'
//     | 'How many tons of ice are required to build The Hotel de Glace?'
//     | 'How many tons of snow are required to build The Hotel de Glace?'
//     | 'Can I visit the Hotel de Glace in summer?'
//     | 'Where is Canada\'s only desert?'
//     | 'How big is Canada\'s only desert?'
//     | 'Name 3 famous male Canadians.'
//     | 'Name 3 famous female Canadians.'
//     | 'What\'s the origin of the Comic Sans font?'
//     | 'What is a nanobot?'
//     | 'How small can a nanobot be?'
//     | 'Why wasn\'t Tron nominated for an award by The Motion Picture Academy?'
//     | 'Which was the first computer with a hard disk drive?'
//     | 'When was the first computer with a hard disk drive launched?'
//     | 'How big was the first hard disk drive?'
//     | 'What does CAPTCHA stands for?'
//     | 'What was the first computer bug?'
//     | 'Name all of the robots on Mars.'
//     | 'Who is the world\'s first android?'
//     | 'What is a Mechanical Knight?'
//     | 'What was the first computer in pass the Turing test?'
//     | 'What does Moravec\'s paradox state?'
//     | 'What is the AI knowledge engineering bottleneck?'
//     | 'Why is Elon Musk is worried about AI\'s impact on humanity?'
//     | 'Do you think robots are a threat to humanity?'
//     | 'What is a chatbot?'
//     | 'Are self-driving cars safe?'
//     | 'Who invented the compiler?'
//     | 'Who created the C Programming Language?'
//     | 'Who created the Python Programming Language?'
//     | 'Is Mark Zuckerberg a robot?'
//     | 'Who is the inventor of the Apple I microcomputer?'
//     | 'Who is considered to be the first computer programmer?'
//     | 'Which program do Jedi use to open PDF files?'
//     ;
