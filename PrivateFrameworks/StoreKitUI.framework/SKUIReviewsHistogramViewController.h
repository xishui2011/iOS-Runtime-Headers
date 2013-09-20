/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, SKUIClientContext, SKUIReviewList, SKUIReviewsHistogramView, UIControl;

@interface SKUIReviewsHistogramViewController : UIViewController {
    SKUIClientContext *_clientContext;
    SKUIReviewsHistogramView *_histogramView;
    SKUIReviewList *_reviewList;
}

@property(readonly) UIControl * appSupportButton;
@property(retain) SKUIClientContext * clientContext;
@property int personalStarRating;
@property(retain) SKUIReviewList * reviewList;
@property(readonly) UIControl * segmentedControl;
@property(copy) NSArray * segmentedControlTitles;
@property int selectedSegmentIndex;
@property(readonly) UIControl * starRatingControl;
@property(copy) NSString * versionString;
@property(readonly) UIControl * writeAReviewButton;

- (void).cxx_destruct;
- (id)_histogramView;
- (void)_reloadHistogram;
- (id)appSupportButton;
- (id)clientContext;
- (void)loadView;
- (int)personalStarRating;
- (id)reviewList;
- (id)segmentedControl;
- (id)segmentedControlTitles;
- (int)selectedSegmentIndex;
- (void)setClientContext:(id)arg1;
- (void)setPersonalStarRating:(int)arg1;
- (void)setReviewList:(id)arg1;
- (void)setSegmentedControlTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)setVersionString:(id)arg1;
- (id)starRatingControl;
- (id)versionString;
- (id)writeAReviewButton;

@end