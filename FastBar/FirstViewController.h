//
//  FirstViewController.h
//  FastBar
//
//  Created by Chris Li on 3/21/14.
//  Copyright (c) 2014 Chris Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CartDetailPopoverController.h"

@interface FirstViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UITableViewDataSource,UITableViewDelegate,CartDetailPopoverControllerDelegate,UITextFieldDelegate,UIToolbarDelegate>

@property (strong,nonatomic) IBOutlet UITableView *tableView;
@property (strong,nonatomic) IBOutlet UICollectionView *collectionView;

@property (strong,nonatomic) IBOutlet UILabel *userNameLabel;
@property (strong,nonatomic) IBOutlet UILabel *barCodeLabel;

@property (strong,nonatomic) IBOutlet UILabel *grandTotalLabel;
@property (strong,nonatomic) IBOutlet UIButton *checkoutButton;
@property (strong,nonatomic) IBOutlet UIButton *clearButton;

@property (strong, nonatomic) IBOutlet UITextField *barcodeEntryTextField;

@property (strong, nonatomic) IBOutlet UIToolbar *toolbar;

-(IBAction)checkout:(id)sender;
-(IBAction)clearCurrentBarcode:(id)sender;

@end