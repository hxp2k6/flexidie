/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"
//
//#import "GBMUserClientObserver-Protocol.h"

@class GBAConversationListDataSource; //, NSObject<GBMUserClient>;

@interface GBAUserClientBridge : NSObject //<GBMUserClientObserver>
{
    //NSObject<GBMUserClient> *userClient_;
    GBAConversationListDataSource *dataSource_;
}

//- (void).cxx_destruct;
- (void)userClient:(id)arg1 eventChanged:(id)arg2;
- (void)userClient:(id)arg1 receivedNewEvent:(id)arg2;
- (void)userClientDidFinishSyncWithResultCode:(int)arg1;
- (void)userClientDidChangeIsConversationSyncOngoing:(id)arg1;
- (void)userClient:(id)arg1 mergedConversation:(id)arg2;
- (void)userClient:(id)arg1 prunedConversation:(id)arg2;
- (void)userClient:(id)arg1 leftConversation:(id)arg2;
- (void)userClient:(id)arg1 receivedNewConversation:(id)arg2;
- (void)userClient:(id)arg1 conversation:(id)arg2 watermarkChangedForParticipant:(id)arg3;
- (void)userClient:(id)arg1 conversation:(id)arg2 changedGroup:(int)arg3;
- (void)userClient:(id)arg1 didChangeStateFrom:(int)arg2;
- (id)initWithUserClient:(id)arg1 dataSource:(id)arg2;

@end

