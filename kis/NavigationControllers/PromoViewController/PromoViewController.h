//
//  PromoViewController.h
//  kis
//
//  Created by beauty on 1/28/16.
//  Copyright © 2016 Mauro Olivo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "SideMenuViewController.h"

@interface PromoViewController : SideMenuViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WKNavigationDelegate>


@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@property (weak, nonatomic) IBOutlet UIView *pdfContainterView;
@property (weak, nonatomic) IBOutlet WKWebView *pdfWebView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *pdfActivity;
@property (weak, nonatomic) IBOutlet UILabel *lblPdfTitle;



@end
