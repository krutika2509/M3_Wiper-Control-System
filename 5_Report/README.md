# M3_Wiper-Control-System

## Abstract

The wiper serves to clean the windshield of the car at the front. Wiper works by removing oil, dust, rainwater, and dirt that get stuck to the windshield.
The windshield wiper system of cars has three major subsystems.

1) Two wipers and their arms

2) Mechanism

3) An electric motor.

Each wiper arm is modelled as a rotating cantilever beam with a lumped mass at its tip where a friction force is applied. The mechanism, which transmits power from the motor to the roots of the wiper arms, is treated as two connected four-bar linkages with rigid members. The electric motor drives the system with varying rotating torque and speed as its load due to the motion of arms and linkages changes with time.

I have created  wiper control system using ARM based microcontroller and the used board is STM32F4-Discovery. In this project we are using User Button and, 4 LED'S. 
Button indicates the ON and OFF condition where 4 LED'S indicates the wiper motion.

## **Introduction**

In cars, a wiper control system replaces the standard wiper blade with an electrical component. In this setup, the ignition button (on the motor) will be controlled by a single switch in the ACC position. Switch on the wiper system with a second press, then vary the wiper speed with a third press, and finally turn off the motor with a fourth press. All of this was done with the help of LEDs and a simulation tool.A wiper is a vital component that removes rainfall or any other liquid from the windscreen of a vehicle. The previous method required manual wiper activation, and raising the wiper was a tough task. As a result, this system is being presented as a solution to these problems. The project's goals are to supply wiping systems for older automobiles, improve the system by using actuators and pull switches (using the same switch for various functions by stepwise switching), and manage engine and wiper speed with a single switch. This System regulates the wiper's operation speed in response to the amount of rain. This Wiper Speed Control System is utilised in all sorts of automobiles, and its primary function is to remove rain air drops from the vehicle's front screen.

## Conditions of Wiper Control System in order to work properly
1.Ignition Key Position at ACC-- The Red LED is ON, if the user button is pressed and held for 2 secs
2.Wiper ON: Wiper is OFF-- On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
3.Wiper OFF: Wiper is ON-- The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
4.Ignition Key Position at Lock-- The Red LED is OFF, if the user button is pressed and held for 2 secs




## **SWOT Analysis**

### **Strength**

Visual clarity.
Operation Silent.
The wiper does not stop in the middle of the window.
We can control the wiper speed using just one button.
Windscreen wiper is essential for keeping the windscreen sufficiently clean for driver's visibility specifically for modern high speed vehicles.

### **Weakness**

Increased Replacement Costs
Rubber Blades are required.
Wiper motor problems
A build up of snow or ice can cause problems like bent wiper blades, wiper arms that skip, or a blown fuse and other issues with the wiper motor. If you live in a snowy climate, you may want to consider premium beam winter wiper blades to avoid freezing joints.

### **Opportunities**

Now, virtually all automotive wipers are controlled by a microprocessor. Many wiper systems in cars today use a rain sensor to detect the speed at which the raindrops are falling on the windshield. A microprocessor evaluates the signals from the sensor to calculate the speed at which the wipers should move.

### **Threats**

There are a number of reasons why windscreen wipers stop working and these include:
torn wipers, broken controls, a blown fuse, faults with the motor, damaged arms, snow or ice covering, loose pivot nuts and a break in the wires.


## **4'W & 1'H**

### **Who**

Anyone who wishes to be safe and have clear visibility in bad weather.

### **What**

A wiper speed control system for an automotive wiper controls the operational speed of a wiper in accordance with rain conditions.

### **Why**

Switching between controls and wipers is simple.

### **When**

In difficult environmental conditions, such as a rainy climate.
A windscreen wipe is a device used to remove rain, snow, ice, washer fluid, water, and/or debris from a vehicle's front window.

### **How**

After wiping the windsheet of motor vehicles, the LED displays the position of the wiper and returns to its normal state.
Wiper Control system is essential for keeping the windscreen sufficiently clean for driver's visibility specifically for modern high speed vehicles. The washer cleans the driver's side of the windscreen whenever required.

## Details requirements
## High level Requirements
| ID | 	Description | Status |
| -- | ------------ | ------ |
| HLR1 |	Arm Cortex-M4 |	Microcontroller used for the process |
| HLR2 |	User Button |	To ON Ignition Key Position at ACC or OFF the Ignition Key Position at Lock |
## Low level Requirements
| ID | 	Description | Status |
| -- | ------------ | ------ |
|LLR1 |	Led's |	Indicate the Wiper motion and it's speed |

## The Test plan of this project is:

* To know the importnace of the project.
* To know the work in specific conditions.
* Working Principle and architectur.
* To verify the microcontroller chip.

## **HIGH LEVEL TEST PLAN**

Test ID | Description | Input | Expected output | Actual Output | status
-- | -- | -- | -- | -- | --
01 | Ignition On |  Pressing Button 1st 2sec  | key status | Key Status Displayed |✅
02 | Wiper On | Pressing user button once | Wiper Status-1Hz | Wiper Status Displayed |✅
03 | Wiper On | Pressing user button twice | Wiper Status-4Hz | Wiper Status Displayed |✅
04 | Wiper On | Pressing user button thrice | Wiper Status-8Hz | Wiper Status Displayed |✅
05 | Ignition Off | Pressing Button 1st 2sec  | Ignition key status | key status Displayed |✅




## **LOW LEVEL TEST PLAN**

Description | Input | Expected output | Actual Output | Status
-- | -- | -- | -- | -- 
ignition_on() | User Button Press 1st 2sec | RED LED ON | RED LED ON | ✅
LED cycle | Button Press once | All LEDs ON -1Hz| All LEDs ON-low speed | ✅
LED cycle | Button Press twice | All LEDs ON-4Hz | All LEDs ON-moderate speed | ✅
LED cycle | Button Press thrice | All LEDs ON -8Hz| All LEDs ON-high speed | ✅
ignition_off() | User Button Press 2nd 2sec | RED LED OFF | RED LED OFF | ✅


## PROJECT WORKING 
![working of the project](https://user-images.githubusercontent.com/104137902/168469450-155d856e-eb5c-4379-96e9-fe8f69305543.gif)



