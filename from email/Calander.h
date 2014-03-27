//
//  Calander.h
//  StudentsHelpingHonduras
//
//  Created by Roberto Fernandez de cordoba on 3/22/14.
//  Copyright (c) 2014 Global App Initiative. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calander : NSCalendar
@property(nonatomic, copy) NSString *Caledar;
@property(nonatomic, readonly) EKCalendarType type;
typedef enum { EKCalendarTypeLocal,
EKCalendarTypeCalDAV,
EKCalendarTypeExchange,
EKCalendarTypeSubscription,
EKCalendarTypeBirthday,
} EKCalendarType;

@end
