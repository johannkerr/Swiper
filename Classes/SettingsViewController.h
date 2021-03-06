#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ScannerViewController.h"
#import "ProgressViewController.h"

@interface SettingsViewController : UIViewController <DTDeviceDelegate,UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate,UITextFieldDelegate> {
	IBOutlet UITableView *settingsTable;
	IBOutlet ProgressViewController *progressViewController;

	DTDevices *dtdev;
    
    NSMutableArray *btDevices;
    NSArray *btConnectedDevices;
    bool btListening;
    int firmareTarget;
    NSString *firmwareFile;
}

@property(assign) int scanMode;

@end
