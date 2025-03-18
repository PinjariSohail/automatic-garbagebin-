# automatic-garbagebin-

<b>This is a simple electronic project of smart automatic garbagebin</b>

It is a arduino based project where we use Arduino UNO, ultrosonic sensor, serve motor, and 5V power source to implpement this project in hardware.

we use software calles Arduino IDE to develope, compile and upload the code to hardware.

the samrt garbagebin works in such a way that when ever it detects a person with in the range of 30cm the lib of the trashbin will open automatically and it will stay open as long as it detects a person. once the person is away from the threshold distance the lid will wait for 3 seconds then it will get closed.

The entire processs works as, the ultrosonioc sensor will be integrated at the face of the trashbin and a servo motor will be integrated to the lid of the bin to control open and close operations of the lib. Here the ultrosonic sensor detects presence of the person by transmitting and receiveing sonic signals from the environment, This received data will be send to the Arduino UNO microcontroller to process the data with the pre-defines values. If the recived data matches the per-defined data Arduino UNO activates the servo motor.The servo motor will rotate to a defined angle making the lib open and again the motor rotates back making the lid clode after 3 seconds with the delay of milleseconds to complete the entire execution.

The entire project will be working on the 5V DC source battery which will be connected to Arduino UNO board.

We can even monitor the ultrasonic sensor reading in real-time through serial monitor tab from Arduino IDE after connecting the Arduino UNO with USB cable to the computer. 
