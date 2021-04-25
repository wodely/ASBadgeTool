#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "PPBadgeControl.h"
#import "PPBadgeView.h"
#import "UIBarButtonItem+PPBadgeView.h"
#import "UITabBarItem+PPBadgeView.h"
#import "UIView+PPBadgeView.h"

FOUNDATION_EXPORT double ASBadgeToolVersionNumber;
FOUNDATION_EXPORT const unsigned char ASBadgeToolVersionString[];

