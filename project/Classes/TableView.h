//
//  main.h
//  tableview
//
//  Created by Алена Гусева on 4/4/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
@interface TableView: UITableViewController {
	NSMutableArray *items;
	CFTypeRef addressbook;
}

@end
