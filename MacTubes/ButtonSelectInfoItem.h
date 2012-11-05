/* ButtonSelectInfoItem */

#import <Cocoa/Cocoa.h>
#import "ControlTypes.h"

@interface ButtonSelectInfoItem : NSButton
{

}
- (IBAction)selectPlayItem:(id)sender;
- (void)setBindButtonEnabled:(NSArrayController*)arrayController;

@end
