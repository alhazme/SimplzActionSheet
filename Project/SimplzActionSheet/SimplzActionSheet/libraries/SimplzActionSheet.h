
#define UIControlStateAll UIControlStateNormal & UIControlStateSelected & UIControlStateHighlighted
#define SYSTEM_VERSION_LESS_THAN(version) ([[[UIDevice currentDevice] systemVersion] compare:version options:NSNumericSearch] == NSOrderedAscending)

typedef NS_ENUM(NSInteger, SimplzActionSheetButtonResponse) {
    
    SimplzActionSheetButtonResponseFadesOnPress,
    SimplzActionSheetButtonResponseReversesColorsOnPress,
    SimplzActionSheetButtonResponseShrinksOnPress,
    SimplzActionSheetButtonResponseHighlightsOnPress
};

typedef NS_ENUM(NSInteger, SimplzActionSheetButtonCornerType) {
    
    SimplzActionSheetButtonCornerTypeNoCornersRounded,
    SimplzActionSheetButtonCornerTypeTopCornersRounded,
    SimplzActionSheetButtonCornerTypeBottomCornersRounded,
    SimplzActionSheetButtonCornerTypeAllCornersRounded
    
};

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


// forward declarations
@class SimplzActionSheet, SimplzActionSheetTitleView;

#pragma mark - SimplzActionSheetDelegate Protocol

// Protocol needed to receive notifications from the SimplzActionSheet (Will receive UIActionSheet notifications as well)
@protocol SimplzActionSheetDelegate <NSObject>

-(void)actionSheet:(SimplzActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;

@end

#pragma mark - SimplzActionSheet

@interface SimplzActionSheet : UIView {
    
}

- (void)showInView:(UIView *)theView;
- (NSInteger)addButtonWithTitle:(NSString *)title;
- (void)dismissWithClickedButtonIndex:(NSInteger)buttonIndex animated:(BOOL)animated;
- (id)initWithTitle:(NSString *)title delegate:(id<SimplzActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelTitle destructiveButtonTitle:(NSString *)destructiveTitle otherButtonTitles:(NSString *)otherTitles, ... NS_REQUIRES_NIL_TERMINATION;
- (id)initWithTitle:(NSString *)title delegate:(id<SimplzActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelTitle destructiveButtonTitle:(NSString *)destructiveTitle otherButtonTitlesArray:(NSArray *)otherTitlesArray;

- (id)initWithTitle:(NSString *)title delegate:(id<SimplzActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelTitle destructiveButtonTitle:(NSString *)destructiveTitle buttonTextColor:(UIColor *)color otherButtonTitlesArray:(NSArray *)otherTitlesArray;
- (id)initWithTitle:(NSString *)title delegate:(id<SimplzActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelTitle destructiveButtonTitle:(NSString *)destructiveTitle buttonTextColor:(UIColor *)color otherButtonTitlesArray:(NSArray *)otherTitlesArray otherImagesTitlesArray:(NSArray *)otherImagesArray buttonTextAlign:(NSString *)align;

- (NSInteger)numberOfButtons;
- (NSString *)buttonTitleAtIndex:(NSInteger)index;
- (void)rotateToCurrentOrientation;

// fonts
- (void)setFont:(UIFont *)font;
- (void)setTitleFont:(UIFont *)font;
- (void)setFont:(UIFont *)font forButtonAtIndex:(NSInteger)index;

// standard colors
- (void)setTitleTextColor:(UIColor *)color;
- (void)setButtonTextColor:(UIColor *)color;
- (void)setTitleBackgroundColor:(UIColor *)color;
- (void)setButtonBackgroundColor:(UIColor *)color;
- (UIColor *)buttonTextColorAtIndex:(NSInteger)index;
- (UIColor *)buttonBackgroundColorAtIndex:(NSInteger)index;
- (void)setButtonTextColor:(UIColor *)color forButtonAtIndex:(NSInteger)index;
- (void)setButtonBackgroundColor:(UIColor *)color forButtonAtIndex:(NSInteger)index;

// highlight colors
- (void)setButtonHighlightBackgroundColor:(UIColor *)color;
- (void)setButtonHighlightTextColor:(UIColor *)color;
- (void)setButtonHighlightTextColor:(UIColor *)color forButtonAtIndex:(NSInteger)index;
- (void)setButtonHighlightBackgroundColor:(UIColor *)color forButtonAtIndex:(NSInteger)index;

@property UIView *transparentView;
@property NSMutableArray *buttons;
@property (nonatomic) NSString *title;
@property SimplzActionSheetTitleView *titleView;
@property (weak) id <SimplzActionSheetDelegate> delegate;
@property SimplzActionSheetButtonResponse buttonResponse;
@property BOOL visible, hasCancelButton, hasDestructiveButton, shouldCancelOnTouch;


@end

#pragma mark - SimplzActionSheetButton

@interface SimplzActionSheetButton : UIButton


- (id)initWithTopCornersRounded;
- (id)initWithAllCornersRounded;
- (id)initWithBottomCornersRounded;
- (void)resizeForPortraitOrientation;
- (void)resizeForLandscapeOrientation;
- (void)setTextColor:(UIColor *)color;
- (void)setTextAlign:(NSString *)align;
- (void)setImage:(UIImage *)image;

@property NSInteger index;
@property SimplzActionSheetButtonCornerType cornerType;
@property UIColor *originalTextColor, *highlightTextColor;
@property UIColor *originalBackgroundColor, *highlightBackgroundColor;


@end


#pragma mark - SimplzActionSheetTitleView

@interface SimplzActionSheetTitleView : UIView

- (void)resizeForPortraitOrientation;
- (void)resizeForLandscapeOrientation;
- (id)initWithTitle:(NSString *)title font:(UIFont *)font;



@property UILabel *titleLabel;

@end




