#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1 
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: slider
//  action 1: the slider goes up and down
slider.moveUpAndDown();
//  action 2: the slider reutrn to previous position
slider.undoPreviousPosition();
//  action 3: the slider return to default position
slider.defaultPosition();
  
//  2)
//  Noun: button
//  action 1: the button extends
button.extend();
//  action 2: the button is glow
button.glow();
//  action 3: the button is changing his text
button.changingText();

//  3)
//  Noun: speaker
//  action 1: the speaker make sounds
speaker.makeSounds();
//  action 2: the speaker light change color
speaker.changeLightColor();
//  action 3: the speaker shut down
speaker.shutDown();

//  4)
//  Noun: alarmClock
//  action 1: the clock is ringing
alarmClock.ring();
//  action 2: the clock is repeat every 5 min
alarmClock.repeat();
//  action 3: the clock is stop ringing
alarmClock.stop();

//  5) 
//  Noun: fan
//  action 1: the fan is spinning 
fan.spin();
//  action 2: the fan blows cold air
fan.blowColdAir();
//  action 3: the fan blows hot air
fan.blowHotAir();
  
//  6) 
//  Noun: computer
//  action 1: computer get into sleep mode
computer.sleepMode();
//  action 2: computer backup your data
computer.backupData();
//  action 3: computer fans starts working
computer.fansWorking();

//  7)
//  Noun: cleaningRobot
//  action 1: start to clean the house
cleaningRobot.startCleanHouse();
//  action 2: return to the charging station
cleaningRobot.returnChargeStation();
//  action 3: beep when the tank is full
cleaningRobot.tankFullBeep();

//  8)
//  Noun: smokeDetector
//  action 1: beep when sense smoke
smokeDetector.senseSmokeBeep();
//  action 2: call the firemans
smokeDetector.callFiremans();
//  action 3: drops water to put of the fire
smokeDetector.dropWater();

//  9) 
//  Noun: traficLight
//  action 1: the Light is red
traficLight.Red();
//  action 2: the Light is yellow
traficLight.Yellow();
//  action 3: the Light is green
traficLight.Green();

//  10)
//  Noun: dog
//  action 1: dog is barking
dog.bark();
//  action 2: dog is sleeping
dog.sleep();
//  action 3: dog is running
dog.run();
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
