//
//  PSFeed.h
//
//  Created by Mickaël Remars on 16/09/10.
//

#import <Foundation/Foundation.h>

typedef enum { 
  PSUnknownFormat = 0, 
  PSRSSFormat = 1, 
  PSAtomFormat = 2, 
} PSFeedFormat;  


@interface PSFeed : NSObject {

}

- (id)initWithURL:(NSURL*)url; 
- (BOOL)refresh:(NSError**)error; 

@end
