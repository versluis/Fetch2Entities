//
//  Event.h
//  
//
//  Created by Jay Versluis on 07/09/2015.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * flightNumber;

@end
