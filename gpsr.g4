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
    : vbbtake 'the' Object_alike 'from the' Room 'to the' Location_placement
    | vbbring 'me the' Object_alike 'from the' Location_placement
    | takefrom 'and' delivme
    | takefrom 'and' delivat
    | takefrom 'and' place
    | vbbtake 'my' luggage 'to the' taxi
    ;

/* Complex manipulation */
complexman : cmanwarn cmancmd;
cmancmd
    : vbbtake 'the' Object_known 'to the' Location_placement
    | vbbring 'me the' abspos 'object' cmanobjsrc
    | vbbring 'me the object' relpos 'the' Object cmanobjsrc
    | vbbring 'me the' oprop 'object' cmanobjsrc
    | vbbring 'me the' oprop Category cmanobjsrc
    | vbclean 'the' Room
    | vbtakeout 'the' garbage
    ;
cmanwarn   : Void;
cmanobjsrc : 'from the' Location_placement;

/* Find objects */
fndobj
    : vbfind 'the' Object_alike_obfuscated 'in the' Room
    | 'Tell me how many' Category 'there are on the' Location_placement
    | 'Tell me what\'s the' oprop 'object on the' Location_placement
    | 'Tell me what\'s the' oprop Category 'on the' Location_placement
    | vbfind 'the' Category 'in the' Room
    | 'tell me which are the three' oprop 'objects' 'on the' Location_placement
    | 'tell me which are the three' oprop Category 'on the' Location_placement
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
    : fllwoutdest 'meet' Name 'at the' Beacon ',' vbfollow Pron ', and' goroom
    | fllwoutdest 'meet' Name 'at the' Beacon ',' vbfollow Pron ', and' vbguide Pron 'back'
    ;
fllwoutdest : Void;

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

/* Categories (giving the .xml files)*/
Category : 'food' | 'drinks' | 'cleaning stuff' | 'food';
Object : 'chip' | 'biscuit' | 'bread' | 'sprite' | 'cola' | 'water'
                | 'dishsoap' | 'handwash' | 'shampoo' | 'cookie' | 'lays';
ObjectNew : 'bowl' | 'cloth' | 'tray';
Gesture : 'waving' | 'raising their left arm' | 'raising their right arm' 
        | 'pointing to the left' | 'pointing to the right';
Room : 'bedroom' | 'dining room' | 'living room' | 'kitchen';
