//
//  UserCarsCell.h
//  Carwash
//
//  Created by Andrei Sabinin on 9/13/15.
//  Copyright (c) 2015 Empty. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserCarsCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView *bgView;
@property (weak, nonatomic) IBOutlet UILabel *carLabel;
@property (weak, nonatomic) IBOutlet UIButton *deleteButton;

@end
