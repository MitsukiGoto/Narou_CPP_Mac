//
//  Narou_Core.mm
//  Narou
//
//  Created by MitsukiGoto on 2019/11/19.
//  Copyright © 2019 五島充輝. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Narou_Core.h"
#include "picojson.h"
#include "iostream"
#include "fstream"

@implementation ObjCTest

-(void) testMethod {
    const char * filepath = "/Library/Application Support/Narou/Settings.json";
    std::cout << filepath << std::endl;
}

@end