/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIWebTiledView.h"


#import "UIActionSheetDelegate.h"

#import "UIAutoscrollContainer.h"

#import "UIGestureRecognizerDelegate.h"

#import "UIKeyInput.h"

#import "UIKeyboardInput.h"

#import "UIModalViewDelegate.h"

#import "UITextAutoscrolling.h"

#import "UITextInputPrivate.h"

#import "UITextInputTokenizer.h"

#import "UIWebFileUploadPanelDelegate.h"

#import "_UIRotatingActionSheetDelegate.h"

#import "_UIWebDoubleTapDelegate.h"



@class CALayer, DOMElement, DOMHTMLElement, DOMNode, DOMRange, NSArray, NSDictionary, NSTimer, UIAutoscroll, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UITextChecker, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, UIWebFileUploadPanel, UIWebRotatingSheet, UIWebSelectionAssistant, WebHistoryItem, WebThreadSafeUndoManager, WebView, WebViewReachabilityObserver, _UITextServiceSession, _UIWebHighlightLongPressGestureRecognizer, _UIWebViewportHandler;



@interface UIWebDocumentView : UIWebTiledView <UIActionSheetDelegate, _UIRotatingActionSheetDelegate, UITextAutoscrolling, UIAutoscrollContainer, UIGestureRecognizerDelegate, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UIModalViewDelegate, UITextInputTokenizer, _UIWebDoubleTapDelegate, UIWebFileUploadPanelDelegate>

{

    WebView *_webView;

    WebViewReachabilityObserver *_reachabilityObserver;

    id m_parentTextView;

    id _delegate;

    id _textSuggestionDelegate;

    struct CGRect _doubleTapRect;

    struct CGRect _mainDocumentDoubleTapRect;

    struct CGPoint _scrollPoint;

    struct CGPoint _doubleTapStartPosition;

    double _doubleTapStartTime;

    struct CGSize _pendingSize;

    long long _orientation;

    DOMHTMLElement *_standaloneEditingElement;

    struct CGPoint _mouseDownPoint;

    double _mouseDownTime;

    UIAutoscroll *_autoscroll;

    struct __CFDictionary *_plugInViews;

    long long m_selectionGranularity;

    CALayer *_contentLayersHostingLayer;

    CALayer *_flattenedRotatingContentLayer;

    NSArray *_additionalSubviews;

    UITextInputTraits *_traits;

    id <UITextInputDelegate> _inputDelegate;

    UITapGestureRecognizer *_singleTapGestureRecognizer;

    UITapGestureRecognizer *_doubleTapGestureRecognizer;

    UITapGestureRecognizer *_twoFingerDoubleTapGestureRecognizer;

    _UIWebHighlightLongPressGestureRecognizer *_highlightLongPressGestureRecognizer;

    UILongPressGestureRecognizer *_longPressGestureRecognizer;

    UIPanGestureRecognizer *_twoFingerPanGestureRecognizer;

    struct {

        NSTimer *timer;

        struct CGPoint location;

        _Bool isBlocked;

        _Bool isCancelled;

        _Bool isOnWebThread;

        _Bool isDisplayingHighlight;

        _Bool attemptedClick;

        struct CGPoint lastPanTranslation;

        DOMNode *element;

        id delegate;

        UIWebRotatingSheet *interactionSheet;

        NSArray *elementActions;

        _Bool allowsImageSheet;

        _Bool allowsDataDetectorsSheet;

        _Bool allowsLinkSheet;

        _Bool acceptsFirstResponder;

        double documentScale;

    } _interaction;

    _UIWebViewportHandler *_viewportHandler;

    int _documentType;

    float _documentScale;

    float _previousDocumentScale;

    struct CGSize _fixedLayoutOriginRoundingDelta;

    struct CGSize _fixedLayoutSizeRoundingDelta;

    unsigned int _mouseDownCount;

    unsigned long long _dataDetectorTypes;

    unsigned int _webCoreNeedsSetNeedsDisplay:1;

    unsigned int _webCoreNeedsDraw:1;

    unsigned int _ignoresFocusingMouse:1;

    unsigned int _ignoresKeyEvents:1;

    unsigned int _autoresizes:1;

    unsigned int _ignoresViewportOverflowWhenAutoresizing:1;

    unsigned int _shouldIgnoreCustomViewport:1;

    unsigned int _updatingSize:1;

    unsigned int _scalesToFit:1;

    unsigned int _updatesScrollView:1;

    unsigned int _hasCustomScale:1;

    unsigned int _shouldRestoreScrollPosition:1;

    unsigned int _pageNeedsReset:1;

    unsigned int _hasScrollPoint:1;

    unsigned int _gesturesDisabled:1;

    unsigned int _doubleTapRectIsReplaced:1;

    unsigned int _standaloneEditableView:1;

    unsigned int _widgetEditingView:1;

    unsigned int _mouseDragged:1;

    unsigned int _mouseReentrancyGuard:1;

    unsigned int _isShowingFullScreenPlugIn:1;

    unsigned int _isSettingRedrawFrame:1;

    unsigned int _needsScrollNotifications:1;

    unsigned int _loadsSynchronously:1;

    unsigned int _mouseDown:1;

    unsigned int _usePreTimberlineTransparencyBehavior:1;

    unsigned int _geolocationDialogAllowed:1;

    unsigned int _usingMinimalTilesDuringLoading:1;

    unsigned int _sheetsCount:2;

    unsigned int _didFirstVisuallyNonEmptyLayout:1;

    unsigned int _loadInProgress:1;

    unsigned int _uiwdvIsResigningFirstResponder:1;

    unsigned int _sizeUpdatesSuspended:1;

    unsigned int _sizeUpdateOccurredWhileSuspended:1;

    unsigned int _shouldOnlyRecognizeGesturesOnActiveElements:1;

    unsigned int _ignoresFocusEventFromFirstResponderChange:1;

    unsigned int _shouldCloseWebViewAtDealloc:1;

    unsigned int _shouldRemoveUserStyleSheet:1;

    unsigned int _hasDrawnTiles:1;

    unsigned int _showingTextStyleOptions:1;

    unsigned int _subviewCachesNeedUpdate:1;

    unsigned int _avoidFixedPositionUpdateViaDidScroll:1;

    unsigned int _inspectorSearchingForNode:1;

    unsigned int _previousScrollWasScrollToTop:1;

    unsigned int _pageIsLoadedFromPageCache:1;

    unsigned int _shouldSendWillShowInteractionHighlight:1;

    WebThreadSafeUndoManager *_undoManager;

    UIWebSelectionAssistant *_webSelectionAssistant;

    UITextInteractionAssistant *_textSelectionAssistant;

    UITextChecker *_textChecker;

    struct UIEdgeInsets _caretInsets;

    UIWebFileUploadPanel *_fileUploadPanel;

    int _selectionAffinity;

    DOMElement *_dictationResultPlaceholder;

    id _dictationResultPlaceholderRemovalObserver;

    DOMRange *_rangeToRestoreAfterDictation;

    struct _UIWebViewportConfiguration _defaultViewportConfigurations[5];

    _UITextServiceSession *_definitionSession;

    _UITextServiceSession *_learnSession;

    WebHistoryItem *_latestCommittedPageLoadHistoryItem;

    _Bool _suppressesIncrementalRendering;

    unsigned long long _renderTreeSize;

    unsigned long long _renderTreeSizeThresholdForReset;

    struct CGRect _exposedScrollViewRect;

}



+ (id)_createDefaultHighlightView;

+ (id)_sharedHighlightView;

+ (double)getTimestamp;

+ (_Bool)hasLandscapeOrientation;

+ (void)initialize;

+ (Class)layerClass;

+ (id)standardTextViewPreferences;

- (void)_WAKViewSizeDidChange:(id)arg1;

@property(getter=_acceptsFirstResponder, setter=_setAcceptsFirstResponder:) _Bool _acceptsFirstResponder;

- (SEL)_actionForLongPressOnElement:(id)arg1;

- (void)_addShortcut:(id)arg1;

- (struct CGRect)_adjustedLayoutRectForFixedPositionObjects;

- (void)_applyViewportArguments:(id)arg1;

- (id)_beginPrintModeForHTMLView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5 tileClippedContent:(_Bool)arg6;

- (id)_beginPrintModeForPDFView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5;

- (void)_cancelLongPressGestureRecognizer;

- (void)_cleanUpFrameStateAndLoad:(id)arg1;

- (void)_cleanupSheet;

- (void)_clearAllConsoleMessages;

- (void)_clearDoubleTapRect;

- (id)_collectAdditionalSubviews;

- (unsigned int)_contentSizeInExposedRect:(struct CGRect)arg1 topLayer:(id)arg2 visibleLayerCount:(int *)arg3;

- (void *)_createIOSurfaceFromRect:(struct CGRect)arg1;

- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(_Bool)arg2;

- (_Bool)_dataDetectionIsActivated;

- (void)_define:(id)arg1;

- (_Bool)_dictationPlaceholderHasBeenRemoved;

- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;

- (void)_didScroll;

- (void)_dismissViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;

- (float)_documentScale;

- (id)_documentUrl;

- (struct CGRect)_documentViewVisibleRect;

- (id)_doubleTapGestureRecognizer;

- (void)_doubleTapRecognized:(id)arg1;

- (void)_drawPDFPagesForPage:(unsigned long long)arg1 withPaginationInfo:(id)arg2;

- (void)_editableSelectionLayoutChangedByScrolling:(_Bool)arg1;

- (void)_finishedUsingDictationPlaceholder;

- (void)_flattenAndSwapContentLayersInRect:(struct CGRect)arg1;

- (id)_focusedOrMainFrame;

- (id)_groupName;

- (void)_handleDoubleTapAtLocation:(struct CGPoint)arg1;

- (void)_handleSingleTapZoomPostClickAtLocation:(struct CGPoint)arg1;

- (_Bool)_handleSingleTapZoomPreClickAtLocation:(struct CGPoint)arg1;

- (void)_handleTwoFingerDoubleTapAtLocation:(struct CGPoint)arg1;

- (void)_highlightLongPressRecognized:(id)arg1;

- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;

- (void)_inspectorDidStartSearchingForNode:(id)arg1;

- (void)_inspectorDidStopSearchingForNode:(id)arg1;

- (_Bool)_isDisplayingReferenceLibraryViewController;

- (_Bool)_isDisplayingShortcutViewController;

- (_Bool)_isInspectorSearchingForNode;

- (_Bool)_isSubviewOfPlugInView:(id)arg1;

- (struct CGRect)_lastRectForRange:(id)arg1;

- (struct CGRect)_layoutRectForFixedPositionObjects;

- (void)_longPressRecognized:(id)arg1;

- (void)_notifyContentHostingLayersOfScaleChange;

- (void)_notifyPlugInViewsOfDidEndZooming;

- (void)_notifyPlugInViewsOfDidZoom;

- (void)_notifyPlugInViewsOfScaleChange;

- (void)_notifyPlugInViewsOfWillBeginZooming;

- (id)_parentTextView;

- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;

- (_Bool)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;

- (Class)_printFormatterClass;

- (void)_promptForReplace:(id)arg1;

- (void)_reachabilityManagerNotifiedIsReachable:(_Bool)arg1;

- (void)_removeDefinitionController:(_Bool)arg1;

- (void)_removeShortcutController:(_Bool)arg1;

- (void)_renderUnbufferedInContext:(struct CGContext *)arg1;

- (void)_resetForNewPage;

- (void)_resetFormDataForFrame:(id)arg1;

- (void)_resetInteractionWithLocation:(struct CGPoint)arg1;

- (void)_resetShowingTextStyle:(id)arg1;

- (void)_reshapePlugInViews;

- (id)_responderForBecomeFirstResponder;

- (void)_restoreFlattenedContentLayers;

- (void)_restoreScrollPointForce:(_Bool)arg1;

- (void)_restoreViewportSettingsWithSize:(struct CGSize)arg1;

- (void)_runLoadBlock:(id)arg1;

- (void)_saveStateToHistoryItem:(id)arg1;

- (id)_scriptingInfoForForm:(id)arg1;

- (id)_scriptingInfoForLink:(id)arg1;

- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;

- (struct CGRect)_selectionClipRect;

- (void)_selectionLayoutChangedByScrolling:(_Bool)arg1;

- (void)_sendMouseMoveAndAttemptClick:(id)arg1;

- (void)_setDocumentScale:(float)arg1;

- (void)_setDocumentType:(int)arg1;

- (void)_setDocumentType:(int)arg1 overrideCustomConfigurations:(_Bool)arg2 viewportArguments:(id)arg3;

- (void)_setFont:(id)arg1;

- (void)_setParentTextView:(id)arg1;

- (void)_setSubviewCachesNeedUpdate:(_Bool)arg1;

- (void)_setTextColor:(id)arg1;

- (struct CGRect)_shortcutPresentationRect;

- (_Bool)_shouldFlattenContentLayersForRect:(struct CGRect)arg1;

- (_Bool)_shouldResetForNewPage;

- (_Bool)_shouldUpdateSubviewCachesForPlugins;

- (void)_showDataDetectorsSheet;

- (void)_showImageSheet;

- (void)_showLinkSheet;

- (void)_showPendingContentLayers;

- (void)_showTextStyleOptions:(id)arg1;

- (void)_singleTapRecognized:(id)arg1;

- (id)_supportedPasteboardTypesForCurrentSelection;

- (void)_syntheticMouseEventNotHandledAtLocation:(struct CGPoint)arg1;

- (id)_targetURL;

- (id)_textSelectingContainer;

- (void)_twoFingerDoubleTapRecognized:(id)arg1;

- (void)_twoFingerPanRecognized:(id)arg1;

- (void)_undoManagerDidRedo:(id)arg1;

- (void)_undoManagerDidUndo:(id)arg1;

- (void)_updateFixedPositionContent;

- (void)_updateFixedPositionedObjectsLayoutRectUsingWebThread:(_Bool)arg1 synchronize:(_Bool)arg2;

- (void)_updateFixedPositioningObjectsLayoutAfterScroll;

- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;

- (void)_updateFixedPositioningObjectsLayoutDuringScroll;

- (void)_updateScrollViewBoundaryZoomScales;

- (void)_updateSize;

- (void)_updateSubviewCaches;

- (void)_updateWebKitExposedScrollViewRect;

- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;

- (double)_zoomedDocumentScale;

- (void)actionDidFinish;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)addInputString:(id)arg1;

- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;

- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;

- (id)asText;

- (void)assistFormNode:(id)arg1;

- (void)attemptClick:(id)arg1;

- (id)automaticallySelectedOverlay;

- (struct CGRect)autoscrollContentFrame;

@property(nonatomic) struct CGPoint autoscrollContentOffset;

- (struct CGRect)autoscrollDragFrame;

- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

- (_Bool)becomeFirstResponder;

- (_Bool)becomesEditableWithGestures;

- (id)beginPrintModeForFrame:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5 tileClippedContent:(_Bool)arg6;

- (id)beginPrintModeForFrame:(id)arg1 withWidth:(double)arg2 height:(double)arg3 startOffset:(double)arg4 shrinkToFit:(_Bool)arg5 tileClippedContent:(_Bool)arg6;

- (id)beginPrintModeWithSize:(struct CGSize)arg1 startOffset:(double)arg2 minimumLayoutWidth:(double)arg3 maximumLayoutWidth:(double)arg4 tileClippedContent:(_Bool)arg5;

- (id)beginPrintModeWithWidth:(double)arg1 height:(double)arg2 startOffset:(double)arg3 shrinkToFit:(_Bool)arg4;

- (id)beginPrintModeWithWidth:(double)arg1 height:(double)arg2 startOffset:(double)arg3 shrinkToFit:(_Bool)arg4 tileClippedContent:(_Bool)arg5;

- (void)beginSelectionChange;

@property(readonly, nonatomic) UITextPosition *beginningOfDocument;

- (_Bool)canBecomeFirstResponder;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

- (_Bool)canResignFirstResponder;

- (void)cancelAutoscroll;

- (void)cancelInteraction;

- (void)cancelInteractionWithImmediateDisplay:(_Bool)arg1;

- (_Bool)cancelMouseTracking;

- (_Bool)cancelTouchTracking;

- (struct UIEdgeInsets)caretInsets;

- (struct CGRect)caretRect;

- (struct CGRect)caretRectForPosition:(id)arg1;

- (struct CGRect)caretRectForVisiblePosition:(id)arg1;

- (unsigned short)characterAfterCaretSelection;

- (unsigned short)characterInRelationToCaretSelection:(int)arg1;

- (id)characterRangeAtPoint:(struct CGPoint)arg1;

- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;

- (id)checkSpellingOfString:(id)arg1;

- (void)clearInteractionTimer;

- (void)clearMarkedText;

- (void)clearRangedSelectionInitialExtent;

- (void)clearSelection;

- (_Bool)clearWKFirstResponder;

- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;

- (id)closestPositionToPoint:(struct CGPoint)arg1;

- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;

- (void)collapseSelection;

- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;

- (void)completeInteraction;

- (void)confirmMarkedText:(id)arg1;

- (_Bool)considerHeightForDoubleTap;

- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;

- (_Bool)containsOnlySelectableElements;

- (struct CGRect)contentFrameForView:(id)arg1;

- (id)contentView;

- (void)continueInteractionWithLocation:(struct CGPoint)arg1;

- (struct CGRect)convertCaretRect:(struct CGRect)arg1;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromFrame:(id)arg2;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toFrame:(id)arg2;

- (struct CGPoint)convertPointToSelectedFrameCoordinates:(struct CGPoint)arg1;

- (struct CGRect)convertRect:(struct CGRect)arg1 fromFrame:(id)arg2;

- (struct CGRect)convertRect:(struct CGRect)arg1 toFrame:(id)arg2;

- (struct CGRect)convertRectFromSelectedFrameCoordinates:(struct CGRect)arg1;

- (void)copy:(id)arg1;

- (struct CGImage *)createSnapshotWithRect:(struct CGRect)arg1;

- (double)currentDocumentScale;

- (void)cut:(id)arg1;

- (unsigned long long)dataDetectorTypes;

- (void)dealloc;

- (void)decreaseSize:(id)arg1;

- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;

- (void)deferInteraction;

- (void)deferredBecomeFirstResponder;

- (id)delegate;

- (void)deleteBackward;

- (void)deleteFromInput;

- (_Bool)detectsPhoneNumbers;

- (id)dictationInterpretations;

- (id)dictationResultMetadataForRange:(id)arg1;

- (void)didEndScroll;

- (void)didEndZoom;

- (_Bool)didFirstVisuallyNonEmptyLayout;

- (void)didMoveToSuperview;

- (void)didRemovePlugInView:(id)arg1;

- (void)didRotateInteractionSheet;

- (void)didZoom;

- (void)disableClearsOnInsertion;

- (struct CGRect)documentBounds;

- (int)documentType;

- (struct CGRect)doubleTapRect;

- (_Bool)doubleTapRectIsReplaced;

- (CDStruct_39925896)doubleTapScalesForSize:(struct CGSize)arg1;

- (void)drawPage:(unsigned long long)arg1 withPaginationInfo:(id)arg2;

- (unsigned long long)effectiveDataDetectorTypes;

- (void)enableReachability;

- (id)enclosingScrollView;

@property(readonly, nonatomic) UITextPosition *endOfDocument;

- (void)endPrintMode;

- (void)endSelectionChange;

- (void)ensureSelection;

@property(nonatomic) struct CGRect exposedScrollViewRect; // @synthesize exposedScrollViewRect=_exposedScrollViewRect;

- (void)extendCurrentSelection:(int)arg1;

- (void)fileUploadPanelDidDismiss:(id)arg1;

- (struct CGRect)firstRectForRange:(id)arg1;

- (id)fontForCaretSelection;

- (void)forceLayout;

- (id)formElement;

- (void)forwardInvocation:(id)arg1;

- (_Bool)fragmentContainsRichContent:(id)arg1;

- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;

- (_Bool)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

- (long long)getPasteboardChangeCount;

- (long long)getPasteboardItemsCount;

- (void)handleKeyWebEvent:(id)arg1;

- (_Bool)hasContent;

- (_Bool)hasDrawnTiles;

- (_Bool)hasEditableSelection;

- (_Bool)hasMarkedText;

- (_Bool)hasPlugInSubviews;

- (_Bool)hasRangedSelection;

- (_Bool)hasRichlyEditableSelection;

- (_Bool)hasSelection;

- (_Bool)hasSimpleTextOnlyStructure;

- (_Bool)hasText;

- (void)hideTapHighlight;

- (void)highlightApproximateNodeAndDisplayInfoSheet;

- (void)highlightApproximateNodeInverted:(_Bool)arg1;

- (id)hostViewForSheet:(id)arg1;

- (id)implementationWebView;

- (_Bool)inPopover;

- (void)increaseSize:(id)arg1;

- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;

- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;

- (float)initialScale;

@property(nonatomic) id <UITextInputDelegate> inputDelegate;

- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;

- (id)insertDictationResultPlaceholder;

- (void)insertText:(id)arg1;

- (void)installGestureRecognizers;

@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;

- (id)interactionDelegate;

- (id)interactionElement;

- (struct CGPoint)interactionLocation;

- (_Bool)isCaretInEmptyParagraph;

- (_Bool)isClassicViewportMode;

@property(nonatomic, getter=isDoubleTapEnabled) _Bool doubleTapEnabled;

- (_Bool)isEditable;

- (_Bool)isEditing;

- (_Bool)isEditingSingleLineElement;

- (_Bool)isInInteraction;

- (_Bool)isInPrintMode;

- (_Bool)isInsideRichlyEditableTextWidget;

- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;

- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;

- (_Bool)isShowingFullScreenPlugInUI;

- (_Bool)isStandaloneEditableView;

- (_Bool)isUnperturbedDictationResultMarker:(id)arg1;

- (_Bool)isWidgetEditingView;

- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;

- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

- (_Bool)keyboardInputChanged:(id)arg1;

- (void)keyboardInputChangedSelection:(id)arg1;

- (_Bool)keyboardInputShouldDelete:(id)arg1;

- (void)layoutSubviews;

- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;

- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;

- (void)loadRequest:(id)arg1;

- (_Bool)loadsSynchronously;

- (void)makeTextWritingDirectionLeftToRight:(id)arg1;

- (void)makeTextWritingDirectionRightToLeft:(id)arg1;

- (_Bool)makeWKFirstResponder;

@property(readonly, nonatomic) UITextRange *markedTextRange;

@property(copy, nonatomic) NSDictionary *markedTextStyle;

- (double)maximumDoubleTapScale;

- (float)maximumScale;

@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;

- (id)metadataDictionariesForDictationResults;

- (id)methodSignatureForSelector:(SEL)arg1;

- (float)minimumScale;

- (float)minimumScaleForMinimumSize:(struct CGSize)arg1;

- (double)minimumScaleForSize:(struct CGSize)arg1;

- (_Bool)mouseEventsChangeSelection;

- (_Bool)needsScrollNotifications;

- (struct CGImage *)newSnapshotWithRect:(struct CGRect)arg1;

- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;

- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;

- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;

- (void)paste:(id)arg1;

- (void)performClick:(id)arg1;

- (void)performInteractionSelector:(SEL)arg1 afterDelay:(double)arg2;

- (_Bool)performsTwoStepPaste:(id)arg1;

- (_Bool)playsNicelyWithGestures;

- (id)positionAtStartOrEndOfWord:(id)arg1;

- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;

- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;

- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;

- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;

- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;

- (id)rangeByExtendingCurrentSelection:(int)arg1;

- (id)rangeByMovingCurrentSelection:(int)arg1;

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

- (id)rangeOfEnclosingWord:(id)arg1;

@property(retain, nonatomic) DOMRange *rangeToRestoreAfterDictation; // @synthesize rangeToRestoreAfterDictation=_rangeToRestoreAfterDictation;

- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;

- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;

- (id)rectsForNSRange:(struct _NSRange)arg1;

- (void)redrawScaledDocument;

- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;

@property(readonly, nonatomic) unsigned long long renderTreeSize; // @synthesize renderTreeSize=_renderTreeSize;

@property(nonatomic) unsigned long long renderTreeSizeThresholdForReset; // @synthesize renderTreeSizeThresholdForReset=_renderTreeSizeThresholdForReset;

- (void)replace:(id)arg1;

- (void)replaceCurrentWordWithText:(id)arg1;

- (void)replaceRange:(id)arg1 withText:(id)arg2;

- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;

- (void)replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3;

- (_Bool)requiresKeyEvents;

- (void)resetInteraction;

- (void)resetTilingAfterLoadComplete;

- (_Bool)resignFirstResponder;

- (void)revealedSelectionByScrollingWebFrame:(id)arg1;

- (void)saveStateToCurrentHistoryItem;

- (id)scriptingInfoWithChildren;

- (void)scrollSelectionToVisible:(_Bool)arg1;

- (void)scrollViewWasRemoved;

- (void)select:(id)arg1;

- (void)selectAll;

- (void)selectAll:(id)arg1;

- (void)selectWord;

- (id)selectedDOMRange;

@property(copy) UITextRange *selectedTextRange;

@property(nonatomic) long long selectionAffinity;

- (_Bool)selectionAtDocumentStart;

- (_Bool)selectionAtWordStart;

- (long long)selectionBaseWritingDirection;

- (void)selectionChanged;

- (void)selectionChanged:(id)arg1;

@property(nonatomic) long long selectionGranularity;

- (_Bool)selectionIsCaretInDisplayBlockElementAtOffset:(int)arg1;

- (struct _NSRange)selectionRange;

- (id)selectionRects;

- (id)selectionRectsForDOMRange:(id)arg1;

- (id)selectionRectsForRange:(id)arg1;

@property(readonly, nonatomic) int selectionState;

- (id)selectionView;

- (void)sendOrientationEventForOrientation:(long long)arg1;

- (void)sendScrollEventIfNecessary;

- (void)sendScrollEventIfNecessaryWasUserScroll:(_Bool)arg1;

- (void)sendScrollWheelEvents;

- (void)setAllowsDataDetectorsSheet:(_Bool)arg1;

- (void)setAllowsImageSheet:(_Bool)arg1;

- (void)setAllowsLinkSheet:(_Bool)arg1;

- (void)setAllowsUserScaling:(_Bool)arg1 forDocumentTypes:(int)arg2;

- (void)setAutoresizes:(_Bool)arg1;

- (void)setBaseWritingDirection:(long long)arg1;

- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;

- (void)setBecomesEditableWithGestures:(_Bool)arg1;

- (void)setBottomBufferHeight:(double)arg1;

- (void)setCaretChangeListener:(id)arg1;

- (void)setCaretInsets:(struct UIEdgeInsets)arg1;

- (void)setContinuousSpellCheckingEnabled:(_Bool)arg1;

- (void)setDataDetectorTypes:(unsigned long long)arg1;

- (void)setDelegate:(id)arg1;

- (void)setDetectsPhoneNumbers:(_Bool)arg1;

- (void)setDrawsBackground:(_Bool)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setIgnoresFocusingMouse:(_Bool)arg1;

- (void)setIgnoresKeyEvents:(_Bool)arg1;

- (void)setIgnoresViewportOverflowWhenAutoresizing:(_Bool)arg1;

- (void)setInitialScale:(float)arg1 forDocumentTypes:(int)arg2;

- (void)setInteractionAssistantGestureRecognizers;

- (void)setInteractionDelegate:(id)arg1;

- (void)setIsStandaloneEditableView:(_Bool)arg1;

- (void)setIsWidgetEditingView:(_Bool)arg1;

- (void)setLoadsSynchronously:(_Bool)arg1;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (void)setMaximumScale:(float)arg1 forDocumentTypes:(int)arg2;

- (void)setMinimumScale:(float)arg1 forDocumentTypes:(int)arg2;

- (void)setMinimumSize:(struct CGSize)arg1;

- (void)setMinimumSize:(struct CGSize)arg1 updateCurrentViewportConfigurationSize:(_Bool)arg2;

- (void)setOpaque:(_Bool)arg1;

- (void)setPaused:(_Bool)arg1;

- (void)setPaused:(_Bool)arg1 withEvents:(_Bool)arg2;

- (void)setRangedSelectionBaseToCurrentSelection;

- (void)setRangedSelectionBaseToCurrentSelectionEnd;

- (void)setRangedSelectionBaseToCurrentSelectionStart;

- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2;

- (void)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2 allowFlipping:(_Bool)arg3;

- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;

- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;

- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;

- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;

- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(_Bool)arg2;

- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;

- (void)setSelectionToEnd;

- (void)setSelectionToStart;

- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;

- (void)setSelectionWithPoint:(struct CGPoint)arg1;

@property(nonatomic) _Bool shouldIgnoreCustomViewport;

@property(nonatomic) _Bool shouldOnlyRecognizeGesturesOnActiveElements;

@property(nonatomic) _Bool sizeUpdatesSuspended;

- (void)setSmoothsFonts:(_Bool)arg1;

- (void)setStandaloneEditingElement:(id)arg1;

@property(nonatomic) _Bool suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;

- (void)setText:(id)arg1;

- (void)setTileUpdatesDisabled:(_Bool)arg1;

- (void)setTilingArea:(int)arg1;

- (void)setTypingAttributes:(id)arg1;

- (void)setUpdatesScrollView:(_Bool)arg1;

- (void)setUsePreTimberlineTransparencyBehavior;

- (void)setUserStyleSheet:(id)arg1;

- (void)setViewportSize:(struct CGSize)arg1 forDocumentTypes:(int)arg2;

- (_Bool)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint)arg1 forScale:(double)arg2;

- (void)smartExtendRangedSelection:(int)arg1;

- (id)standaloneEditingElement;

- (_Bool)startActionSheet;

- (void)startAutoscroll:(struct CGPoint)arg1;

- (void)startInteractionWithLocation:(struct CGPoint)arg1;

- (void)stopLoading:(id)arg1;

- (id)subviews;

- (id)superviewForSheet;

- (id)supportedPasteboardTypesForCurrentSelection;

- (_Bool)supportsTwoFingerScrollingAtTouchLocation:(struct CGPoint)arg1 andLocation:(struct CGPoint)arg2;

- (void)takeTraitsFrom:(id)arg1;

- (void)tapInteractionWithLocation:(struct CGPoint)arg1;

- (id)text;

- (id)textColorForCaretSelection;

- (id)textFormElement;

- (id)textInDOMRange:(id)arg1;

- (id)textInRange:(id)arg1;

- (id)textInputTraits;

- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;

- (void)toggleBaseWritingDirection;

- (void)toggleBoldface:(id)arg1;

- (void)toggleItalics:(id)arg1;

- (void)toggleUnderline:(id)arg1;

@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

- (id)typingAttributes;

- (id)undoManager;

- (id)undoManagerForWebView:(id)arg1;

- (void)unmarkText;

- (void)updateInteractionElements;

- (_Bool)updateKeyboardStateOnResponderChanges;

- (void)updateSelection;

- (_Bool)updatesScrollView;

- (void)useSelectionAssistantWithMode:(int)arg1;

- (void)validateInteractionWithLocation:(struct CGPoint)arg1;

- (void)viewportHandler:(id)arg1 didChangeViewportSize:(struct CGSize)arg2;

- (void)viewportHandlerDidChangeScales:(id)arg1;

- (struct CGRect)visibleBounds;

- (struct CGRect)visibleContentFrame;

- (struct CGRect)visibleContentRect;

- (struct CGRect)visibleFrame;

- (id)webSelectionAssistant;

- (void)webThreadWebViewDidLayout:(id)arg1 byScrolling:(_Bool)arg2;

- (id)webView;

- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;

- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;

- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;

- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2;

- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;

- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;

- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;

- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;

- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(_Bool)arg3 acceptMIMETypes:(id)arg4;

- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;

- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;

- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;

- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;

- (void)webViewDidDrawTiles:(id)arg1;

- (void)webViewDidEndOverflowScroll:(id)arg1;

- (void)webViewDidPreventDefaultForEvent:(id)arg1;

- (void)webViewDidRestoreFromPageCache:(id)arg1;

- (void)webViewDidStartOverflowScroll:(id)arg1;

- (struct CGRect)webViewFrameForUIFrame:(struct CGRect)arg1;

- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;

- (_Bool)willInteractWithLocation:(struct CGPoint)arg1;

- (void)willMoveToSuperview:(id)arg1;

- (void)willRotateInteractionSheet;

- (void)willStartScroll;

- (void)willStartScrollToTop;

- (void)willStartZoom;

- (void)willZoomToLocation:(struct CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;

- (void)willZoomToMinimumScale;

- (id)wordAtPoint:(struct CGPoint)arg1;

- (int)wordOffsetInRange:(id)arg1;

- (void)writeDataToPasteboard:(id)arg1;

- (double)zoomedDocumentScale;



// Remaining properties

@property(nonatomic) _Bool acceptsEmoji; // @dynamic acceptsEmoji;

@property(nonatomic) _Bool acceptsFloatingKeyboard;

@property(nonatomic) _Bool acceptsSplitKeyboard;

@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;

@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;

@property(nonatomic) _Bool contentsIsSingleValue; // @dynamic contentsIsSingleValue;

@property(nonatomic) _Bool deferBecomingResponder;

@property(nonatomic) _Bool displaySecureTextUsingPlainText;

@property(nonatomic) int emptyContentReturnKeyType;

@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;

@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;

@property(nonatomic) _Bool forceEnableDictation;

@property(retain, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;

@property(nonatomic) unsigned long long insertionPointWidth; // @dynamic insertionPointWidth;

@property(nonatomic) _Bool isSingleLineDocument; // @dynamic isSingleLineDocument;

@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;

@property(nonatomic) long long keyboardType; // @dynamic keyboardType;

@property(nonatomic) _Bool learnsCorrections;

@property(nonatomic) _Bool returnKeyGoesToNextResponder;

@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;

@property(retain, nonatomic) UIColor *selectionBarColor; // @dynamic selectionBarColor;

@property(retain, nonatomic) UIImage *selectionDragDotImage; // @dynamic selectionDragDotImage;

@property(retain, nonatomic) UIColor *selectionHighlightColor; // @dynamic selectionHighlightColor;

@property(nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;

@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;

@property(nonatomic) _Bool suppressReturnKeyStyling;

@property(readonly, nonatomic) UIView *textInputView;

@property(nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;

@property(nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;

@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;

@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;

@property(nonatomic) _Bool useInterfaceLanguageForLocalization;



@end

