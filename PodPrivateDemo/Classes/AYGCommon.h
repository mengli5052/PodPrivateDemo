//
//  AYGCommon.h
//  AmbushDemo
//
//  Created by 众忆捷科技 on 2019/4/3.
//  Copyright © 2019 众忆捷科技. All rights reserved.
//

#ifndef AYGCommon_h
#define AYGCommon_h
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define kTabbarHeight [AYGDeviceType deviceType]==IPhone_X?93:49;
#define kNavbarHeight [AYGDeviceType deviceType]==IPhone_X?88:64;
#define kToolbarHeight [AYGDeviceType deviceType]==IPhone_X?88:44;
#endif /* AYGCommon_h */
