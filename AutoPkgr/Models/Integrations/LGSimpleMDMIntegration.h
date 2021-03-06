//
//  LGSimpleMDMIntegration.h
//  AutoPkgr
//
//  Copyright 2020 Shawn Honsberger
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "LGDefaults.h"
#import "LGConstants.h"
#import "LGIntegration+Protocols.h"
#import "LGIntegration.h"

@interface LGSimpleMDMIntegration : LGIntegration <LGIntegrationSharedProcessor>

@end

@interface LGSimpleMDMDefaults : LGDefaults

@property (copy, nonatomic) NSString *SIMPLEMDM_API_KEY;
@property (copy, nonatomic) NSString *simpleMDMDomainObject;
@property (copy, nonatomic) NSString *setSimpleMDMDomainObject;

@end
