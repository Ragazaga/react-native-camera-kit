#import <UIKit/UIKit.h>

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#else
#import "RCTBridge.h"
#endif

#define CUSOM_BUTTON_IMAGE                      @"image"
#define CUSOM_BUTTON_BACKGROUND_COLOR           @"backgroundColor"
#define CUSOM_BUTTON_COMPONENT                  @"component"

@interface CKGalleryCustomCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) RCTBridge *bridge;

-(void) applyStyle:(NSDictionary*)styleDict;


@end
