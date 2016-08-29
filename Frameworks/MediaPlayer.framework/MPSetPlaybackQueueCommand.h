/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {
    NSMutableDictionary * _registeredSpecializedQueues;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)unregisterSpecializedQueueIdentifier:(id)arg1;

@end