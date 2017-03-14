//
//  FastQAViewController.h
//  Union
//
//  Created by xiaoyu on 15/11/17.
//  Copyright © 2015年 _companyname_. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FastQAViewController : UIViewController

@end

@interface FastQATableViewCell : UITableViewCell

@property (nonatomic,copy) NSString *titleString;

@property (nonatomic,copy) NSString *decriptionString;

+(CGFloat)staticHeightForCellWithTitleString:(NSString *)titleString decriptionString:(NSString *)decriptionString;

@end