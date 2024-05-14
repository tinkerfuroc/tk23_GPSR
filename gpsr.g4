grammar instruction;

/* MAIN */
instruction : mainSentence+;
mainSentence : pmain | main;
pmain : polite main;

main : fndppl | fndobj | guide | follow | followout | incomplete | man | complexman | partyhost;

/* --------------------- category1.txt -------------------------- */

/* Production Rules required by common.txt */

// Rule for finding a specific (named) person
findp
    : vbfind 'a' pgenders
    | vbfind 'a person' Gesture
    | vbfind 'a person' Pose
    ;
// A named or described person in the given place
whoWhere : 'the person' Gesture 'in the' Room;

/* Manipulation */
man : deliver;
deliver
    : vbbtake 'the' Object_alike 'from the' Room 'to the' Placement
    | vbbring 'me the' Object_alike 'from the' Placement
    | takefrom 'and' delivme
    | takefrom 'and' delivat
    | takefrom 'and' place
    | vbbtake 'my' luggage 'to the' taxi
    ;

/* Complex manipulation */
complexman : cmancmd;
cmancmd
    : vbbtake 'the' Object_known 'to the' Placement
    | vbbring 'me the' abspos 'object' cmanobjsrc
    | vbbring 'me the object' relpos 'the' Object cmanobjsrc
    | vbbring 'me the' oprop 'object' cmanobjsrc
    | vbbring 'me the' oprop Category cmanobjsrc
    | vbclean 'the' Room
    | vbtakeout 'the' garbage
    ;
cmanobjsrc : 'from the' Placement;

/* Find objects */
fndobj
    : vbfind 'the' Object_alike_obfuscated 'in the' Room
    | 'Tell me how many' Category 'there are on the' Placement
    | 'Tell me what\'s the' oprop 'object on the' Placement
    | 'Tell me what\'s the' oprop Category 'on the' Placement
    | vbfind 'the' Category 'in the' Room
    | 'tell me which are the three' oprop 'objects' 'on the' Placement
    | 'tell me which are the three' oprop Category 'on the' Placement
    | vbfind 'three' Category 'in the' Room
    ;

/* Find people */
fndppl
    : 'Tell me the name of the person at the' Beacon
    | 'Tell me the gender of the person at the' Beacon
    | 'Tell me the pose of the person at the' Beacon
    | 'Tell me the name of the person in the' Room
    | 'Tell me the gender of the person in the' Room
    | 'Tell me the pose of the person in the' Room
    | 'tell me how many people in the' Room 'are' pgenderp
    | 'tell me how many people in the' Room 'are' pose
    ;

/* Follow [& Guide] */
followout
    : 'meet' Name 'at the' Beacon ',' vbfollow Pron ', and' goroom
    | 'meet' Name 'at the' Beacon ',' vbfollow Pron ', and' vbguide Pron 'back'
    ;

/* Incomplete commands */
incomplete
    : vbfollow Name
    | cmanwarn vbbring 'me the' Object_obfuscated
    | vbdeliver Object_obfuscated 'to' someone
    | vbguide Name 'to the' Beacon
    | 'meet' inguidewho 'and' vbguide Pron
    | gobeacon ', meet' inguidewho ', and' vbguide Pron
    ;
inguidewho : Name;

/* Party host */
partyhost
    : vbserve 'drinks to' phpeopler
    | vbmeet Name 'at the' door 'and introduce' Pron 'to' phpeopler
    | vbmeet Name 'at the' Beacon 'and ask' Pron 'to leave'
    | vbmeet Name 'at the' Beacon 'and introduce' Pron 'to' Name 'at the' Beacon
    | vbmeet Name 'at the' Beacon 'and' vbguide Pron 'to' Pron taxi
    ;
phpeople   : 'everyone' | 'all the' peopletype;
peopletype : 'people' | 'men' | 'women' | 'guests' | 'elders' | 'children';
phpeopler  : phpeople 'in the' Room;

/* Rules */
pgenders : 'man' | 'woman' | 'boy' | 'girl' | 'male person' | 'female person';
pgenderp : 'men' | 'women' | 'boys' | 'girls' | 'male' | 'female';
pose     : 'sitting' | 'standing' | 'lying down';
abspos   : 'left most' | 'right most';
relpos   : 'at the left of' | 'at the right of' | 'on top of' | 'above' | 'behind' | 'under';
garbage  : 'litter' | 'garbage' | 'trash' | 'waste' | 'debris' | 'junk';
luggage  : 'bag' | 'baggage' | 'valise' | 'suitcase' | 'trolley';
taxi     : 'taxi' | 'cab' | 'uber';
door     : doorpos 'entrance' | doorpos 'door';
doorpos  : 'front' | 'back' | 'main' | 'rear';

/* Verbs */
vbtakeout : 'take out' | 'dump';
vbcleanup : 'clean out' | 'clean up' | 'tidy op' | 'neaten' | 'order';
vbserve   : 'serve' | 'arrange' | 'deliver' | 'distribute' | 'give' | 'provide';
vbmeet    : 'contact' | 'face' | 'find' | 'greet';

/* --------------------- common.txt -------------------------- */

/* ---------------------    xmls    -------------------------- */

/* Object categories (giving the objects.xml)*/
Category : 'food' | 'drinks' | 'cleaning stuff' | 'object';

/* Objects */
Object       : 'chip' | 'biscuit' | 'bread' | 'sprite' | 'cola' | 'water' | 'dishsoap'
             | 'handwash' | 'shampoo' | 'cookie' | 'lays' | 'bowl' | 'cloth' | 'tray';
Object_alike : Object;
Object_known : Object;

/* Gestures */
Gesture : 'waving' | 'raising their left arm' | 'raising their right arm' 
        | 'pointing to the left' | 'pointing to the right';

/* Locations */
Room      : 'bedroom' | 'dining room' | 'living room' | 'kitchen';
Beacon    : Location_except_room;
Placement : Location_except_room;
Location_except_room : 'bed' | 'dresser' | 'desk' | 'dining table' | 'storage box'
                     | 'wine rack' | 'sofa' | 'side table' | 'TV cabinet' | 'storage table'
                     | 'sink' | 'dishwasher';

/* Names */
Name
    : 'Alex'
    | 'Charlie'
    | 'Francis'
    | 'James'
    | 'John'
    | 'Michael'
    | 'Robert'
    | 'Robin'
    | 'Skyler'
    | 'William'
    | 'Elizabeth'
    | 'Jennifer'
    | 'Linda'
    | 'Mary'
    | 'Patricia'
    ;

Question
    : 'Who\'s the most handsome person in Canada?'
    | 'How many time zones are there in Canada?'
    | 'What\'s the longest street in the world?'
    | 'How long is Yonge Street in Ontario?'
    | 'What\'s the name of the bear cub exported from Canada to the London Zoo in 1915?'
    | 'Where was the Blackberry Smartphone developed?'
    | 'What is the world\'s largest coin?'
    | 'In what year was Canada invaded by the USA for the first time?'
    | 'What year was Canada invaded by the USA for the second time?'
    | 'What country holds the record for the most gold medals at the Winter Olympics?'
    | 'Who coined the term Beatlemania?'
    | 'Why is Canada named Canada?'
    | 'When was The Mounted Police formed?'
    | 'When was The Royal Canadian Mounted Police formed?'
    | 'How big is the RCMP?'
    | 'What else is Montreal called?'
    | 'Where is The Hotel de Glace located?'
    | 'How many tons of ice are required to build The Hotel de Glace?'
    | 'How many tons of snow are required to build The Hotel de Glace?'
    | 'Can I visit the Hotel de Glace in summer?'
    | 'Where is Canada\'s only desert?'
    | 'How big is Canada\'s only desert?'
    | 'Name 3 famous male Canadians.'
    | 'Name 3 famous female Canadians.'
    | 'What\'s the origin of the Comic Sans font?'
    | 'What is a nanobot?'
    | 'How small can a nanobot be?'
    | 'Why wasn\'t Tron nominated for an award by The Motion Picture Academy?'
    | 'Which was the first computer with a hard disk drive?'
    | 'When was the first computer with a hard disk drive launched?'
    | 'How big was the first hard disk drive?'
    | 'What does CAPTCHA stands for?'
    | 'What was the first computer bug?'
    | 'Name all of the robots on Mars.'
    | 'Who is the world\'s first android?'
    | 'What is a Mechanical Knight?'
    | 'What was the first computer in pass the Turing test?'
    | 'What does Moravec\'s paradox state?'
    | 'What is the AI knowledge engineering bottleneck?'
    | 'Why is Elon Musk is worried about AI\'s impact on humanity?'
    | 'Do you think robots are a threat to humanity?'
    | 'What is a chatbot?'
    | 'Are self-driving cars safe?'
    | 'Who invented the compiler?'
    | 'Who created the C Programming Language?'
    | 'Who created the Python Programming Language?'
    | 'Is Mark Zuckerberg a robot?'
    | 'Who is the inventor of the Apple I microcomputer?'
    | 'Who is considered to be the first computer programmer?'
    | 'Which program do Jedi use to open PDF files?'
    ;
