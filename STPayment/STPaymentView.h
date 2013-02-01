//
//  STPaymentField.h
//  STPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STCard.h"
#import "STCardNumber.h"
#import "STCardExpiry.h"
#import "STCardCVC.h"
#import "STAddressZip.h"

@protocol STPaymentViewDelegate
@optional
- (void) didInputCard:(STCard*)card;
@end

@interface STPaymentView : UIView <UITextFieldDelegate>

@property (readonly) STCardNumber* cardNumber;
@property (readonly) STCardExpiry* cardExpiry;
@property (readonly) STCardCVC* cardCVC;
@property (readonly) STAddressZip* addressZip;

@property IBOutlet UITextField* cardNumberField;
@property IBOutlet UILabel* cardNumberLast4Label;
@property IBOutlet UITextField* cardExpiryField;
@property IBOutlet UITextField* cardCVCField;
@property IBOutlet UITextField* addressZipField;
@property IBOutlet UIImageView* cardTypeImageView;
@property id <STPaymentViewDelegate> delegate;
@property (readonly) STCard* card;

@end