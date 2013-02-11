@class BBObserver, BBAssertion, BBAttachments, BBSound, BBContent, NSDate, NSArray, NSTimeZone, NSDictionary, NSSet, BBAction, NSString, NSMutableDictionary;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
    NSString *_sectionID;
    NSString *_publisherRecordID;
    NSString *_publisherBulletinID;
    int _addressBookRecordID;
    int _sectionSubtype;
    BBContent *_content;
    BBContent *_modalAlertContent;
    NSDate *_date;
    NSDate *_endDate;
    NSDate *_recencyDate;
    int _dateFormatStyle;
    BOOL _dateIsAllDay;
    NSTimeZone *_timeZone;
    int _accessoryStyle;
    BOOL _clearable;
    BBSound *_sound;
    BBAttachments *_attachments;
    NSString *_unlockActionLabelOverride;
    NSMutableDictionary *_actions;
    NSArray *_buttons;
    BOOL _expiresOnPublisherDeath;
    NSDictionary *_context;
    NSDate *_expirationDate;
    NSString *_bulletinID;
    NSDate *_lastInterruptDate;
    BBAssertion *_lifeAssertion;
    BBObserver *_observer;
    unsigned int realertCount_deprecated;
    NSSet *alertSuppressionAppIDs_deprecated;
}

@property(readonly) BOOL showsSubtitle;
@property(readonly) unsigned int messageNumberOfLines;
@property(readonly) BOOL usesVariableLayout;
@property(readonly) BOOL orderSectionUsingRecencyDate;
@property(readonly) BOOL showsDateInFloatingLockScreenAlert;
@property(readonly) NSString * topic;
@property(readonly) NSString * missedBannerDescriptionFormat;
@property(readonly) NSString * fullUnlockActionLabel;
@property(readonly) NSString * unlockActionLabel;
@property(readonly) NSSet * alertSuppressionAppIDs;
@property(readonly) BOOL coalescesWhenLocked;
@property(readonly) BOOL suppressesMessageForPrivacy;
@property(readonly) unsigned int realertCount;
@property(readonly) BOOL inertWhenLocked;
@property(readonly) BOOL preservesUnlockActionCase;
@property(readonly) BOOL bannerShowsSubtitle;
@property(readonly) BOOL visuallyIndicatesWhenDateIsInFuture;
@property(readonly) unsigned int subtypePriority;
@property(readonly) int iPodOutAlertType;
@property(copy) NSString * bulletinID;
@property(copy) NSString * section;
@property(copy) NSString * sectionID;
@property(copy) NSString * recordID;
@property(copy) NSString * publisherBulletinID;
@property int addressBookRecordID;
@property int sectionSubtype;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(copy) NSString * message;
@property(retain) BBContent * modalAlertContent;
@property(retain) NSDate * date;
@property(retain) NSDate * endDate;
@property(retain) NSDate * recencyDate;
@property int dateFormatStyle;
@property BOOL dateIsAllDay;
@property(retain) NSTimeZone * timeZone;
@property int accessoryStyle;
@property BOOL clearable;
@property(retain) BBSound * sound;
@property(readonly) int primaryAttachmentType;
@property(copy) BBAction * defaultAction;
@property(copy) BBAction * acknowledgeAction;
@property(copy) BBAction * replyAction;
@property(copy) NSArray * buttons;
@property BOOL expiresOnPublisherDeath;
@property(retain) NSDictionary * context;
@property(retain) NSDate * lastInterruptDate;
@property(retain) BBContent * content;
@property(retain) BBAttachments * attachments;
@property(copy) NSString * unlockActionLabelOverride;
@property(retain) NSMutableDictionary * actions;
@property(retain) NSDate * expirationDate;
@property(copy) BBAction * expireAction;
@property(retain) BBAssertion * lifeAssertion;
@property(retain) BBObserver * observer;
@property unsigned int realertCount_deprecated;
@property(copy) NSSet * alertSuppressionAppIDs_deprecated;

+ (id)bulletinWithBulletin:(id)arg1;
+ (void)killSounds;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CGSize)composedAttachmentImageSize;
- (id)composedAttachmentImage;
- (CGSize)composedAttachmentImageSizeForKey:(id)arg1;
- (id)composedAttachmentImageForKey:(id)arg1;
- (int)iPodOutAlertType;
- (unsigned int)subtypePriority;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;
- (BOOL)bannerShowsSubtitle;
- (BOOL)preservesUnlockActionCase;
- (BOOL)inertWhenLocked;
- (BOOL)suppressesMessageForPrivacy;
- (BOOL)coalescesWhenLocked;
- (id)alertSuppressionAppIDs;
- (id)unlockActionLabel;
- (id)fullUnlockActionLabel;
- (id)missedBannerDescriptionFormat;
- (BOOL)showsDateInFloatingLockScreenAlert;
- (BOOL)orderSectionUsingRecencyDate;
- (BOOL)usesVariableLayout;
- (unsigned int)messageNumberOfLines;
- (BOOL)showsSubtitle;
- (unsigned int)realertCount;
- (void)setExpiresOnPublisherDeath:(BOOL)arg1;
- (BOOL)expiresOnPublisherDeath;
- (id)responseForExpireAction;
- (id)responseForButtonActionAtIndex:(unsigned int)arg1;
- (id)responseForAcknowledgeAction;
- (id)responseForReplyAction;
- (id)responseForDefaultAction;
- (void)deliverResponse:(id)arg1;
- (id)_responseForActionKey:(id)arg1;
- (id)responseSendBlock;
- (id)_actionKeyForButtonIndex:(unsigned int)arg1;
- (id)attachmentsCreatingIfNecessary:(BOOL)arg1;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (unsigned int)numberOfAdditionalAttachments;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)description;
- (id)copyWithZone:(NSZone*)arg1;
- (id)init;
- (void)dealloc;
- (id)defaultAction;
- (BOOL)playSound;
- (void)killSound;
- (id)defaultLaunchBlock;
- (id)launchBlockForButtonIndex:(unsigned int)arg1;
- (id)defaultLaunchBlockWithOrigin:(int)arg1;
- (id)launchBlockForButtonIndex:(unsigned int)arg1 withOrigin:(int)arg2;

@end