# Generated from gpsr.g4 by ANTLR 4.13.1
from antlr4 import *
if "." in __name__:
    from .gpsrParser import gpsrParser
else:
    from gpsrParser import gpsrParser

# This class defines a complete generic visitor for a parse tree produced by gpsrParser.

class gpsrVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by gpsrParser#instruction.
    def visitInstruction(self, ctx:gpsrParser.InstructionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#mainSentence.
    def visitMainSentence(self, ctx:gpsrParser.MainSentenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#pmain.
    def visitPmain(self, ctx:gpsrParser.PmainContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#main.
    def visitMain(self, ctx:gpsrParser.MainContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#find_gender.
    def visitFind_gender(self, ctx:gpsrParser.Find_genderContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#find_gesture.
    def visitFind_gesture(self, ctx:gpsrParser.Find_gestureContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#find_pose.
    def visitFind_pose(self, ctx:gpsrParser.Find_poseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#whoWhere.
    def visitWhoWhere(self, ctx:gpsrParser.WhoWhereContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#man.
    def visitMan(self, ctx:gpsrParser.ManContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#deliver.
    def visitDeliver(self, ctx:gpsrParser.DeliverContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#complexman.
    def visitComplexman(self, ctx:gpsrParser.ComplexmanContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#cmancmd.
    def visitCmancmd(self, ctx:gpsrParser.CmancmdContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#cmanobjsrc.
    def visitCmanobjsrc(self, ctx:gpsrParser.CmanobjsrcContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#fndobj.
    def visitFndobj(self, ctx:gpsrParser.FndobjContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#talk_to_whowhere.
    def visitTalk_to_whowhere(self, ctx:gpsrParser.Talk_to_whowhereContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#find_talk_in_room.
    def visitFind_talk_in_room(self, ctx:gpsrParser.Find_talk_in_roomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#go_room_talk.
    def visitGo_room_talk(self, ctx:gpsrParser.Go_room_talkContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_name_beacon.
    def visitTell_name_beacon(self, ctx:gpsrParser.Tell_name_beaconContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_gender_beacon.
    def visitTell_gender_beacon(self, ctx:gpsrParser.Tell_gender_beaconContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_pose_beacon.
    def visitTell_pose_beacon(self, ctx:gpsrParser.Tell_pose_beaconContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_name_room.
    def visitTell_name_room(self, ctx:gpsrParser.Tell_name_roomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_gender_room.
    def visitTell_gender_room(self, ctx:gpsrParser.Tell_gender_roomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_pose_room.
    def visitTell_pose_room(self, ctx:gpsrParser.Tell_pose_roomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_gender_number.
    def visitTell_gender_number(self, ctx:gpsrParser.Tell_gender_numberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#tell_pose_number.
    def visitTell_pose_number(self, ctx:gpsrParser.Tell_pose_numberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#from_beacon_to_room.
    def visitFrom_beacon_to_room(self, ctx:gpsrParser.From_beacon_to_roomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#from_beacon_to_room_indirect.
    def visitFrom_beacon_to_room_indirect(self, ctx:gpsrParser.From_beacon_to_room_indirectContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#from_beacon_to_where.
    def visitFrom_beacon_to_where(self, ctx:gpsrParser.From_beacon_to_whereContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#fllmeet.
    def visitFllmeet(self, ctx:gpsrParser.FllmeetContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#fllwdest.
    def visitFllwdest(self, ctx:gpsrParser.FllwdestContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#guide.
    def visitGuide(self, ctx:gpsrParser.GuideContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon.
    def visitBeacon_to_beacon(self, ctx:gpsrParser.Beacon_to_beaconContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_guide_to.
    def visitBeacon_to_beacon_guide_to(self, ctx:gpsrParser.Beacon_to_beacon_guide_toContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_gobeacon_guideto.
    def visitBeacon_to_beacon_gobeacon_guideto(self, ctx:gpsrParser.Beacon_to_beacon_gobeacon_guidetoContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_gdwhere.
    def visitBeacon_to_beacon_gdwhere(self, ctx:gpsrParser.Beacon_to_beacon_gdwhereContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#guideto.
    def visitGuideto(self, ctx:gpsrParser.GuidetoContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#gdwhere.
    def visitGdwhere(self, ctx:gpsrParser.GdwhereContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_room.
    def visitBeacon_to_room(self, ctx:gpsrParser.Beacon_to_roomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_back.
    def visitBeacon_to_back(self, ctx:gpsrParser.Beacon_to_backContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#incomplete.
    def visitIncomplete(self, ctx:gpsrParser.IncompleteContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#inguidewho.
    def visitInguidewho(self, ctx:gpsrParser.InguidewhoContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#partyhost.
    def visitPartyhost(self, ctx:gpsrParser.PartyhostContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#phpeople.
    def visitPhpeople(self, ctx:gpsrParser.PhpeopleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#peopletype.
    def visitPeopletype(self, ctx:gpsrParser.PeopletypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#phpeopler.
    def visitPhpeopler(self, ctx:gpsrParser.PhpeoplerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#pgenders.
    def visitPgenders(self, ctx:gpsrParser.PgendersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#pgenderp.
    def visitPgenderp(self, ctx:gpsrParser.PgenderpContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#pose.
    def visitPose(self, ctx:gpsrParser.PoseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#abspos.
    def visitAbspos(self, ctx:gpsrParser.AbsposContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#relpos.
    def visitRelpos(self, ctx:gpsrParser.RelposContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#garbage.
    def visitGarbage(self, ctx:gpsrParser.GarbageContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#luggage.
    def visitLuggage(self, ctx:gpsrParser.LuggageContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#taxi.
    def visitTaxi(self, ctx:gpsrParser.TaxiContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#door.
    def visitDoor(self, ctx:gpsrParser.DoorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#doorpos.
    def visitDoorpos(self, ctx:gpsrParser.DoorposContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbtakeout.
    def visitVbtakeout(self, ctx:gpsrParser.VbtakeoutContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbcleanup.
    def visitVbcleanup(self, ctx:gpsrParser.VbcleanupContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbserve.
    def visitVbserve(self, ctx:gpsrParser.VbserveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbmeet.
    def visitVbmeet(self, ctx:gpsrParser.VbmeetContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#someone.
    def visitSomeone(self, ctx:gpsrParser.SomeoneContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#place.
    def visitPlace(self, ctx:gpsrParser.PlaceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#oprop.
    def visitOprop(self, ctx:gpsrParser.OpropContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#goplace.
    def visitGoplace(self, ctx:gpsrParser.GoplaceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#gobeacon.
    def visitGobeacon(self, ctx:gpsrParser.GobeaconContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#goroom.
    def visitGoroom(self, ctx:gpsrParser.GoroomContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#take.
    def visitTake(self, ctx:gpsrParser.TakeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#takefrom.
    def visitTakefrom(self, ctx:gpsrParser.TakefromContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#delivme.
    def visitDelivme(self, ctx:gpsrParser.DelivmeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#delivto.
    def visitDelivto(self, ctx:gpsrParser.DelivtoContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#delivat.
    def visitDelivat(self, ctx:gpsrParser.DelivatContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#answer_question.
    def visitAnswer_question(self, ctx:gpsrParser.Answer_questionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#speak_to.
    def visitSpeak_to(self, ctx:gpsrParser.Speak_toContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#speak.
    def visitSpeak(self, ctx:gpsrParser.SpeakContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbbtake.
    def visitVbbtake(self, ctx:gpsrParser.VbbtakeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbplace.
    def visitVbplace(self, ctx:gpsrParser.VbplaceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbbring.
    def visitVbbring(self, ctx:gpsrParser.VbbringContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbdeliver.
    def visitVbdeliver(self, ctx:gpsrParser.VbdeliverContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbtake.
    def visitVbtake(self, ctx:gpsrParser.VbtakeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbspeak.
    def visitVbspeak(self, ctx:gpsrParser.VbspeakContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbgopl.
    def visitVbgopl(self, ctx:gpsrParser.VbgoplContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbgor.
    def visitVbgor(self, ctx:gpsrParser.VbgorContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbfind.
    def visitVbfind(self, ctx:gpsrParser.VbfindContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbguide.
    def visitVbguide(self, ctx:gpsrParser.VbguideContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#vbfollow.
    def visitVbfollow(self, ctx:gpsrParser.VbfollowContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#polite.
    def visitPolite(self, ctx:gpsrParser.PoliteContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#object_alike.
    def visitObject_alike(self, ctx:gpsrParser.Object_alikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#object_known.
    def visitObject_known(self, ctx:gpsrParser.Object_knownContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#object_alike_obfuscated.
    def visitObject_alike_obfuscated(self, ctx:gpsrParser.Object_alike_obfuscatedContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#object_obfuscated.
    def visitObject_obfuscated(self, ctx:gpsrParser.Object_obfuscatedContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon.
    def visitBeacon(self, ctx:gpsrParser.BeaconContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#placement.
    def visitPlacement(self, ctx:gpsrParser.PlacementContext):
        return self.visitChildren(ctx)



del gpsrParser