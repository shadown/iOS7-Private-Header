/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UIKeyboardInput.h"

#import "UITextInputPrivate.h"



@class NSDictionary, UIColor, UIImage, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange;



@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate>

{

    UITextInputTraits *m_traits;

}



@property(nonatomic) _Bool acceptsEmoji; // @dynamic acceptsEmoji;

- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

- (_Bool)becomesEditableWithGestures;

@property(readonly, nonatomic) UITextPosition *beginningOfDocument;

- (struct CGRect)caretRect;

- (struct CGRect)caretRectForPosition:(id)arg1;

- (unsigned short)characterAfterCaretSelection;

- (unsigned short)characterBeforeCaretSelection;

- (unsigned short)characterInRelationToCaretSelection:(int)arg1;

- (id)characterRangeAtPoint:(struct CGPoint)arg1;

- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;

- (id)closestPositionToPoint:(struct CGPoint)arg1;

- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;

- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;

- (void)confirmMarkedText:(id)arg1;

- (struct CGRect)convertCaretRect:(struct CGRect)arg1;

- (void)dealloc;

- (id)delegate;

- (void)deleteBackward;

@property(readonly, nonatomic) UITextPosition *endOfDocument;

- (void)extendCurrentSelection:(int)arg1;

- (struct CGRect)firstRectForRange:(id)arg1;

- (id)fontForCaretSelection;

- (void)forwardInvocation:(id)arg1;

- (_Bool)hasContent;

- (_Bool)hasSelection;

- (_Bool)hasText;

@property(nonatomic) id <UITextInputDelegate> inputDelegate;

- (void)insertText:(id)arg1;

@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;

- (_Bool)isEditable;

- (_Bool)isEditing;

- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;

- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;

- (_Bool)isSecure;

- (_Bool)isShowingPlaceholder;

@property(readonly, nonatomic) UITextRange *markedTextRange;

@property(copy, nonatomic) NSDictionary *markedTextStyle;

- (id)methodSignatureForSelector:(SEL)arg1;

- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;

- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;

- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;

- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;

- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;

- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;

- (id)rangeByExtendingCurrentSelection:(int)arg1;

- (id)rangeByMovingCurrentSelection:(int)arg1;

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

- (id)rectsForNSRange:(struct _NSRange)arg1;

- (void)replaceCurrentWordWithText:(id)arg1;

- (void)replaceRange:(id)arg1 withText:(id)arg2;

- (void)selectAll;

@property(copy) UITextRange *selectedTextRange;

- (_Bool)selectionAtDocumentStart;

- (_Bool)selectionAtWordStart;

- (struct _NSRange)selectionRange;

- (id)selectionRectsForRange:(id)arg1;

- (int)selectionState;

- (id)selectionView;

- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;

- (void)setBecomesEditableWithGestures:(_Bool)arg1;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (void)setSecure:(_Bool)arg1;

- (void)setSelectionWithPoint:(struct CGPoint)arg1;

- (void)setText:(id)arg1;

- (void)setupPlaceholderTextIfNeeded;

- (void)takeTraitsFrom:(id)arg1;

- (id)text;

- (id)textColorForCaretSelection;

- (id)textInRange:(id)arg1;

- (id)textInputTraits;

- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;

@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

- (void)unmarkText;

- (void)updateSelection;

- (struct CGRect)visibleBounds;

- (int)wordOffsetInRange:(id)arg1;



// Remaining properties

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

@property(nonatomic) _Bool isSingleLineDocument;

@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;

@property(nonatomic) long long keyboardType; // @dynamic keyboardType;

@property(nonatomic) _Bool learnsCorrections;

@property(nonatomic) _Bool returnKeyGoesToNextResponder;

@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;

@property(nonatomic) long long selectionAffinity;

@property(retain, nonatomic) UIColor *selectionBarColor;

@property(retain, nonatomic) UIImage *selectionDragDotImage;

@property(nonatomic) long long selectionGranularity;

@property(retain, nonatomic) UIColor *selectionHighlightColor;

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


