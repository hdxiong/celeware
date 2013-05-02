
//
#define NSUtil						CeleNSUtil
#define AutoLog						CeleAutoLog
#define UIUtil						CeleUIUtil
#define HttpUtil					CeleHttpUtil
#define NullObject					CeleNullObject
#define SettingUtil					CeleSettingUtil

//
#define NullView					CeleNullView
#define PullView					CelePullView
#define PullViewState				CelePullViewState
#define PullViewDelegate			CelePullViewDelegate
#define pullView					celePullView
#define AlertView					CeleAlertView
#define TouchView					CeleTouchView
#define TouchImageView				CeleTouchImageView
#define TouchScrollView				CeleTouchScrollView
#define SegmentLabel				CeleSegmentLabel
#define CacheImageView				CeleCacheImageView
#define PredictScrollView			CelePredictScrollView
#define KBCustomTextField			CeleKBCustomTextField
#define DecimalNumberField			CeleDecimalNumberField
#define ActionNumberField			CeleActionNumberField
#define DoneNumberField				CeleDoneNumberField
#define NextNumberField				CeleNextNumberField
#define AlertViewExDelegate			CeleAlertViewExDelegate
#define SolidNavigationController	CeleSolidNavigationController
#define SegmentItemTextAlignment	CeleSegmentItemTextAlignment
#define SegmentLabelBaseAlignment	CeleSegmentLabelBaseAlignment
#define SegmentItem					CeleSegmentItem
#define SegmentLabel				CeleSegmentLabel
#define CacheImageButton			CeleCacheImageButton
#define CacheBackgroundImageButton	CeleCacheBackgroundImageButton
#define PageControlScrollView		CelePageControlScrollView
#define NullController				CeleNullController
#define WebController				CeleWebController
#define WebBrowser					CeleWebBrowser
#define FoldPane					CeleFoldPane
#define FoldState					CeleFoldState
#define FoldView					CeleFoldView
#define FoldViews					CeleFoldViews
#define FacingView					CeleFacingView
#define FoldDirection				CeleFoldDirection
#define ShadowView					CeleShadowView

// UIImage (ImageEx)
#define imageWithColor				celeImageWithColor
#define stretchableImage			celeStretchableImage
#define scaleImageToSize			celeScaleImageToSize
#define cropImageInRect				celeCropImageInRect
#define maskImageWithImage			celeMaskImageWithImage
#define orientationTransform		celeOrientationTransform
#define straightenAndScaleImage		celeStraightenAndScaleImage

// UIView (ViewEx)
#define removeSubviews				celeRemoveSubviews
#define findFirstResponder			celeFindFirstResponder
#define findSubview					celeFindSubview
#define showActivityIndicator		celeShowActivityIndicator
#define fadeForAction				celeFadeForAction
#define screenshot					celeScreenshot
#define screenshotWithOptimization	celeScreenshotWithOptimization

// UIAlertView (AlertViewEx)
#define alertWithTitle				celeAlertWithTitle
#define alertWithTask				celeAlertWithTask
#define textField					celeTextField
#define activityIndicator			celeActivityIndicator
#define dismissOnMainThread			celeDismissOnMainThread
#define dismiss						celeDismiss

// UITabBarController (TabBarControllerEx)
#define currentViewController		celeCurrentViewController

// UIViewController	(ViewControllerEx)
#define dismissModalViewController	celeDismissModalViewController
#define presentNavigationController	celePresentNavigationController
#define presentModalNavigationController	celePresentModalNavigationController

// UILabel (LabelEx)
#define labelAtPoint				celeLabelAtPoint
#define labelWithFrame				celeLabelWithFrame

// UIView (CacheImage)
#define cacheImageUrl				celeCacheImageUrl
#define setCacheImageUrl			setCeleCacheImageUrl

// JSONKit
#define JKFlags										CeleJKFlags
#define JKParseOptionFlags							CeleJKParseOptionFlags
#define JKSerializeOptionFlags						CeleJKSerializeOptionFlags
#define JKParseState								CeleJKParseState
#define JSONDecoder									CeleJSONDecoder

// NSString	(JSONKitDeserializing)
#define objectFromJSONString						celeObjectFromJSONString
#define objectFromJSONStringWithParseOptions		celeObjectFromJSONStringWithParseOptions
#define mutableObjectFromJSONString					celeMutableObjectFromJSONString
#define mutableObjectFromJSONStringWithParseOptions	celeMutableObjectFromJSONStringWithParseOptions

// NSData (JSONKitDeserializing)
#define objectFromJSONData							celeObjectFromJSONData
#define objectFromJSONDataWithParseOptions			celeObjectFromJSONDataWithParseOptions
#define mutableObjectFromJSONData					celeMutableObjectFromJSONData
#define mutableObjectFromJSONDataWithParseOptions	celeMutableObjectFromJSONDataWithParseOptions

// NSString	(JSONKitSerializing)
#define JSONData									CeleJSONData
#define JSONDataWithOptions							CeleJSONDataWithOptions
#define JSONString									CeleJSONString
#define JSONStringWithOptions						CeleJSONStringWithOptions

// JSONKit.m
#define JKArray										CeleJKArray
#define JKDictionary								CeleJKDictionary
#define JKDictionaryEnumerator						CeleJKDictionaryEnumerator
#define JKSerializer								CeleJKSerializer
#define JKInitialize								CeleJKInitialize
#define kJKArrayClass								"CeleJKArray"
#define kJKDictionaryClass							"CeleJKDictionary"
