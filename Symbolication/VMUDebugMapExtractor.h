/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUSymbolExtractor.h>

@interface VMUDebugMapExtractor : VMUSymbolExtractor
{
}

+ (id)debugMapExtractorWithMachOHeader:(id)arg1;
- (id)initWithMachOHeader:(id)arg1;
- (void)readDebugMapsFromMachOHeader:(id)arg1 nsyms:(unsigned int)arg2 nlist:(id)arg3 stringTable:(id)arg4;

@end

