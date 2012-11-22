//
//  CKRemoteURL.h
//  Connection
//
//  Created by Mike on 11/10/2012.
//
//

#import <Foundation/Foundation.h>

@interface CKRemoteURL : NSURL
{
  @private
    NSMutableDictionary *_temporaryResourceValues;
}

/**
 Return a new CKRemoteURL from an existing URL.
 
 @param url The URL to copy.
 @return The equivalent CKRemoteURL.
 */

+ (CKRemoteURL*)URLWithURL:(NSURL*)url;

// Equivalent to CFURLSetTemporaryResourcePropertyForKey() except it works for more than just file: URLs. rdar://problem/11069131
// Like NSMutableDictionary do not attempt to set from one thread while reading from another
- (void)setTemporaryResourceValue:(id)value forKey:(NSString *)key;

@end
