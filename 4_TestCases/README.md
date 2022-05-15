# The Test plan of this project is:

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

