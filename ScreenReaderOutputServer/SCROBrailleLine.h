/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableAttributedString;

@interface SCROBrailleLine : NSObject
{
    id <SCROBrailleDriverProtocol> _brailleDriver;
    int _size;
    int _statusSize;
    int _insetSize;
    int _lineOffset;
    int _leftInset;
    int _rightInset;
    int _masterStatusCellIndex;
    int _iBeamLocation;
    int _displayMode;
    BOOL _needsDisplayFlush;
    BOOL _needsStatusFlush;
    BOOL _blink;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _isPanning;
    BOOL _showDotsSevenAndEight;
    char *_displayBuffer;
    char *_displayFilter;
    char *_blinkerBuffer;
    char *_statusFilter;
    NSData *_statusData;
    struct __CFArray *_chunkArray;
    struct __CFDictionary *_chunkDictionary;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    int _firstToken;
    int _lastToken;
    struct {
        NSData *data;
        int alignment;
        int length;
        char *cells;
    } _virtualStatus;
}

+ (void)initialize;
- (id)initWithDriver:(id)arg1 mainSize:(int)arg2 statusSize:(int)arg3;
- (void)dealloc;
- (void)setAppToken:(id)arg1;
- (id)appToken;
- (void)setMainSize:(int)arg1;
- (void)setStatusSize:(int)arg1;
- (void)setMasterStatusCellIndex:(int)arg1;
- (int)masterStatusCellIndex;
- (void)setRealStatus:(id)arg1;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (BOOL)_allowInset;
- (void)_updateOffsets;
- (BOOL)canPanLeft;
- (BOOL)panLeft;
- (BOOL)canPanRight;
- (BOOL)panRight;
- (void)setCurrentUnread:(BOOL)arg1;
- (BOOL)currentUnread;
- (void)setAnyUnread:(BOOL)arg1;
- (BOOL)anyUnread;
- (void)setFormatter:(id)arg1;
- (int)firstToken;
- (int)lastToken;
- (BOOL)getStatusRouterIndex:(int *)arg1 forRawIndex:(int)arg2;
- (int)tokenForRouterIndex:(int)arg1 location:(int *)arg2 appToken:(id *)arg3;
- (id)newLineDescriptorscriptor;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (BOOL)showDotsSevenAndEight;
- (void)setDisplayMode:(int)arg1;
- (int)displayMode;
- (void)blinker;
- (BOOL)_blink:(BOOL)arg1;
- (BOOL)display;
- (void)_flushRealStatus;
- (void)_flush;
@property(readonly, nonatomic) BOOL needsDisplayFlush; // @synthesize needsDisplayFlush=_needsDisplayFlush;

@end

