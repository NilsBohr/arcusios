//
//  PopupSelectionButtonsView.h
//  i2app
//
//  Created by Arcus Team on 7/24/15.
/*
 * Copyright 2019 Arcus Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
//

#import "PopupSelectionBaseContainer.h"

@interface PopupSelectionButtonsView : PopupSelectionBaseContainer

@property (weak, nonatomic) NSObject *owner;

+ (PopupSelectionButtonsView *)createWithTitle:(NSString *)title subtitle:(NSString *)subtitle buttons:(NSArray<PopupSelectionButtonModel *>*)buttons;
+ (PopupSelectionButtonsView *)createWithTitle:(NSString *)title buttons:(NSArray<PopupSelectionButtonModel *>*)buttons;
+ (PopupSelectionButtonsView *)create:(NSArray<PopupSelectionButtonModel *>*)buttons;

+ (PopupSelectionButtonsView *)createWithTitle:(NSString *)title subtitle:(NSString *)subtitle button:(PopupSelectionButtonModel *)button, ... NS_REQUIRES_NIL_TERMINATION;
+ (PopupSelectionButtonsView *)createWithTitle:(NSString *)title button:(PopupSelectionButtonModel *)button, ... NS_REQUIRES_NIL_TERMINATION;
+ (PopupSelectionButtonsView *)createWithButton:(PopupSelectionButtonModel *)button, ... NS_REQUIRES_NIL_TERMINATION;

@end
