grammar instruction;

/* MAIN */
instruction : mainSentence+
mainSentence : pmain | main
pmain : polite main

main : fndppl | fndobj | guide | follow |l followout | incomplete | man | complexman | partyhost


/* Production Rules required by common.txt */
object : Object | ObjectNew
findp : vbfind 'a' pgenders | vbfind 'a person' Gesture | vbfind 'a person' Pose
whoWhere : 'the person' Gesture 'in the' Room


/* Categories (giving the .xml files)*/
Category : 'food' | 'drinks' | 'cleaning stuff' | 'food' 
Object : 'chip' | 'biscuit' | 'bread' | 'sprite' | 'cola' | 'water'     
                | 'dishsoap' | 'handwash' | 'shampoo' | 'cookie' | 'lays'
ObjectNew : 'bowl' | 'cloth' | 'tray'
Gesture : 'waving' | 'raising their left arm' | 'raising their right arm' 
        | 'pointing to the left' | pointing to the right'
Room : 'bedroom' | 'dining room' | 'living room' | 'kitchen'
Placement
Placement2


/* Manipulation */
man : deliver
deliver : vbbtake 'the' Aobject 'from the' Room 'to the' Placement2 | takefrom 'and' (delivme | delivat)
        | takefrom 'and' place | vbbtake 'my' luggage 'to the' taxi


/* Complex Manipulation */
complexman : cmanwarn cmancmd
cmancmd : vbbtake 'the' Kobject 'to the' Placement2 | vbbring 'me the' abspos 'object' smanobjsrc
        | vbbring 'me the object' relpos 'the' Object cmanobjsrc | vbbring 'me the' oprop ('object' | Category) cmanobjsrc
        | vbclean 'the' Room
cmanwarn : Void
cmanobjsrc : 'from the' Placement2


/* Find Objects */
fndobj : vbfind 'the' Aobject  'in the' Room | 'Tell me how many' Category 'there are on the' Placement
        | 'Tell me what's the' oprop 'object on the' Placement | 'Tell me what's the' oprop Category 'on the' Placement
        | vbfind 'the' Category 'in the' Room | 'tell me which are the three' oprop ('objects' | Category) 'on the' Placement1
        | vbfind 'three' Category 'in the' Room


/* Find People */
fndppl : 'Tell me the' ('name' | 'gender' | 'pose') 'of the person at the' Beacon | 'Tell me the' ('name' | 'gender' | 'pose') of the person in the Room
        | 'tell me how many people in the' Room 'are' (pgenderp | Pose)


/* Follow [& Guide] */
followout : fllwoutdest 'meet' Name 'at the' Beacon ',' vbfollow Pron ', and' goroom
            | fllwoutdest 'meet' Name 'at the' Beacon ',' vbfollow Pron ', and' vbguide Pron 'back'

fllwoutdest : Void





/* Rules */
Pose : 'sitting' | 'standing' | 'lying down'


/* Random other stuff */
Void : ''