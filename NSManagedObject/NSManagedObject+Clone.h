//
//  NSManagedObject+Clone.h
//  AutoReset
//
//  Created by Arjan on 16/03/15.
//
// Source: http://stackoverflow.com/questions/2730832/how-can-i-duplicate-or-copy-a-core-data-managed-object

#import <CoreData/CoreData.h>

@interface NSManagedObject (Clone)
/**
 E.g. [object cloneInContext:context excludeEntities:@[@"parentProperty"]]
 @param self the object to clone
 @param context the NSManagedObjectContext in which to clone
 @param namesOfEntitiesToExclude make sure you exclude e.g. parent entities that should not be cloned
 */
-(NSManagedObject *)cloneInContext:(NSManagedObjectContext *)context exludeEntities:(NSArray *)namesOfEntitiesToExclude;
-(NSManagedObject *) clone;
@end
