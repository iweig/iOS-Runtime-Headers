/* Generated by RuntimeBrowser.
 */

@protocol FBSDisplayLayoutMonitorClientDelegate <NSObject>

@required

- (void)client:(FBSDisplayLayoutMonitorClient *)arg1 handleNewDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;
- (unsigned int)clientDisplayType:(FBSDisplayLayoutMonitorClient *)arg1;
- (unsigned int)clientQualityOfService:(FBSDisplayLayoutMonitorClient *)arg1;

@end
