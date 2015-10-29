/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBEurekaLogMsg : PLBasebandMessage {
    NSDate *_bbDate;
    NSNumber *_bbSeqNum;
    double *_bbTimeCal;
    NSMutableDictionary *_commonInfo;
    unsigned char _inited;
    NSMutableDictionary *_kvPairs;
    NSMutableString *_sdAct;
    NSMutableString *_sdEvent;
    NSMutableString *_sdState;
}

@property (retain) NSDate *bbDate;
@property (retain) NSNumber *bbSeqNum;
@property double*bbTimeCal;
@property (nonatomic, retain) NSMutableDictionary *commonInfo;
@property (nonatomic) unsigned char inited;
@property (nonatomic, retain) NSMutableDictionary *kvPairs;
@property (nonatomic, retain) NSMutableString *sdAct;
@property (nonatomic, retain) NSMutableString *sdEvent;
@property (nonatomic, retain) NSMutableString *sdState;

+ (id)bbEuLogMsgNameICEStats;
+ (id)bbEuLogMsgNameLTESleepMgrStats;

- (void).cxx_destruct;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (id)bbDate;
- (id)bbSeqNum;
- (double*)bbTimeCal;
- (id)commonInfo;
- (id)init;
- (unsigned char)inited;
- (id)kvPairs;
- (void)logEventBackwardICEStats;
- (void)logEventBackwardLTESleepMgrStatsWithVer:(id)arg1 andML1State:(id)arg2 andSES:(id)arg3 andSDS:(id)arg4 andStDur:(id)arg5 andDSlpDur:(id)arg6 andLSlpDur:(id)arg7;
- (void)refreshICEStats;
- (void)refreshLTESleepMgrStats;
- (id)sdAct;
- (id)sdEvent;
- (id)sdState;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)setBbDate:(id)arg1;
- (void)setBbSeqNum:(id)arg1;
- (void)setBbTimeCal:(double*)arg1;
- (void)setCommonInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEventCode:(unsigned int)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setInited:(unsigned char)arg1;
- (void)setKvPairs:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSdAct:(id)arg1;
- (void)setSdEvent:(id)arg1;
- (void)setSdState:(id)arg1;

@end