/*-----( Import needed libraries )-----*/
#include <Stepper.h>

/*-----( Declare Constants, Pin Numbers )-----*/
#define STEPS  2048   //Number of steps per revolution


/*-----( Declare objects )-----*/
// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to

//The pin connections need to be 4 pins connected
// to Motor Driver In1, In2, In3, In4  and then the pins entered
// here in the sequence 1-3-2-4 for proper sequencing
Stepper small_stepper(STEPS, 0, 2, 1, 3);
// Note that with the 28BYJ-48 you have to wire it "wrong" for it to turn backwards.
// When pins defined 0, 2, 1, 3 actually wire it 0, 1, 2, 3

/*-----( Declare Variables )-----*/

int  Steps2Take;
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  // set the speed of the motor 
  small_stepper.setSpeed(8);     // 8 works well for this motor
}/*--(end setup )---*/

void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{

  Steps2Take  =  2048;  // Rotate CW
  small_stepper.step(Steps2Take);

}/* --(end main loop )-- */
/* ( THE END ) */
