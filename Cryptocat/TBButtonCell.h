//
//  TBButtonCell.h
//  Cryptocat
//
//  Created by Thomas Balthazar on 05/11/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import <UIKit/UIKit.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@interface TBButtonCell : UITableViewCell

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;

@end
