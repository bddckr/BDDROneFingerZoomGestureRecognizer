#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*!
 * \brief \c UIGestureRecognizer subclass to enable one-finger-zoom gestures.
 * \details \c BDDROneFingerZoomGestureRecognizer is a concrete subclass of \c UIGestureRecognizer that looks for long-press gestures
 * followed by a move with one finger to calculate a scale factor. When the user moves the finger towards the bottom screen edge, the conventional
 * meaning is zoom-out; when the user moves the finger towards the top screen edge, the conventional meaning is zoom-in.
 * \details One-finger-zoom gestures are continuous. The gesture begins (\c UIGestureRecognizerStateBegan) when one finger taps the specified
 * amount of times (\c numberOfTapsRequired), has been pressed for the specified period (\c minimumPressDuration) while not moving beyond the
 * allowable range of movement (\c allowableMovement), and then moves. The gesture changes (\c UIGestureRecognizerStateChanged) whenever the finger
 * moves, and it ends (\c UIGestureRecognizerStateEnded) when the finger is lifted.
 */
@interface BDDROneFingerZoomGestureRecognizer : UIGestureRecognizer

/*!
 * \brief The number of full taps required before the long-press gesture after which the gesture is recognized.
 * \details The default value is \c 1.
 */
@property (nonatomic, assign) NSUInteger numberOfTapsRequired;

/*!
 * \brief Time in seconds the finger must be held down for the gesture to be recognized.
 * \details The default value is \c 0.
 * \see allowableMovement
 */
@property (nonatomic, assign) NSTimeInterval minimumPressDuration;

/*!
 * \brief A floating-point value that specifies the maximum movement on screen allowed before the gesture fails.
 * \details Once recognized (after \c minimumPressDuration) there is no limit on finger movement for the remainder of the touch tracking.
 * \details The default value is \c 10.
 * \see minimumPressDuration
 */
@property (nonatomic, assign) CGFloat allowableMovement;

/*!
 * \brief A floating-point value that specifies the maximum scale factor to apply to \c scale.
 * \details This value specifies the scale factor used to calculate \c scale when the user moves the finger from one screen edge
 * to the other (vertically only). For all movement in between the screen edges the receiver uses linear interpolation between \c 1 and this value.
 * \details The default value is \c 1.5.
 * \see scale
 */
@property (nonatomic, assign) CGFloat scaleFactor;

/*!
 * \brief A floating-point value that specifies the scale factor relative to the moved distance of the touch in screen coordinates.
 * \details The scale value is an absolute value that varies over time. It is not the delta value from the last time that the scale was reported.
 * Apply the scale value to the state of the view when the gesture is first recognized (\c UIGestureRecognizerStateBegan) — do not
 * concatenate the value each time the handler is called.
 * \details The default value is \c 1.
 * \attention You should not change this value when the gesture changes (\c UIGestureRecognizerStateChanged).
 * \see scaleFactor
 */
@property (nonatomic, assign) CGFloat scale;

/*!
 * \brief A Boolean value that determines whether the receiver adjusts \c scale when the scaling exceeds \c minimumScale or \c maximumScale.
 * \details The default value is \c NO.
 * \attention You should not change this value when the gesture changes (\c UIGestureRecognizerStateChanged).
 * \see minimumScale, maximumScale
 */
@property (nonatomic, assign) BOOL bouncesScale;

/*!
 * \brief A floating-point value that specifies the minimum scale factor that can be applied to \c scale.
 * \details This is only used when \c bouncesScale is \c YES.
 * \details The default value is \c 1.
 * \attention You should not change this value when the gesture changes (\c UIGestureRecognizerStateChanged).
 * \see bouncesScale, maximumScale
 */
@property (nonatomic, assign) CGFloat minimumScale;

/*!
 * \brief A floating-point value that specifies the maximum scale factor that can be applied to \c scale.
 * \details This is only used when \c bouncesScale is \c YES.
 * \details The default value is \c 1.
 * \attention You should not change this value when the gesture changes (\c UIGestureRecognizerStateChanged).
 * \see bouncesScale, minimumScale
 */
@property (nonatomic, assign) CGFloat maximumScale;

@end
