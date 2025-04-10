# Building a Rock-Paper-Scissors Robot 

## Introduction 

During the time in the robotic concentration at ECAM us students have come to understand the basis of robot movements through our advanced robotics classes followed through the 3rd and 4th year. Moreover, knowledge of project management was taught to us through the scrum methodology. I
In Scrum, the work is divided into small, manageable chunks called sprints. Each sprint typically lasts between one to four weeks, during which the development team focuses on delivering a specific set of features. Today all this knowledge must be applied to complete a robotic arm. 
The aim of this report is indeed to discuss the development of a robotic arm that is capable of playing rock-paper-scissors using a camera. The project involves the integration of several technologies, including computer vision, machine learning, and robotics. The ultimate goal is to create a system that is capable of recognizing hand gestures and responding with the appropriate gesture, thereby playing the game of rock-paper-scissors.
This project is an example of how robotics can be used to create machines that can interact with humans in fun and engaging ways. It has also been used as a research tool to explore topics such as computer vision, machine learning, and human-robot interaction. 
The report we’ll product an overview of all methods used to complete the project and the results they have produced, describing the used equipment. The specific goals and objectives of a rock paper scissors project can vary widely. Some projects may be designed primarily as a fun or entertaining demonstration of robotics or AI capabilities, while others may have more serious applications, such as training robots to interact with humans in a more intuitive or natural way.

## Description

A rock paper scissors robot usually involves using some combination of hardware and software to create a system that can play the game of rock paper scissors against a human opponent. This might involve designing a robotic arm or hand that can make the three different hand gestures, as well as developing computer vision or machine learning algorithms that can recognize which gesture the human player has made.
The robot typically consists of a mechanical arm with a gripper that can simulate the hand gestures of rock, paper, or scissors. The robot also has sensors such as cameras, that can detect the position and movement of the human player's hand.
To play the game, the human player makes their hand gesture of choice while the robot analyses the gesture in real-time using its sensors. Once the robot recognizes the human player's gesture, it uses its algorithms to determine the optimal response (i.e., the gesture that beats the human player's gesture) and makes its own gesture.
![image](https://github.com/user-attachments/assets/991f09a8-d9b7-4953-aee6-62d8d4c83dda)

Thus, the Rock Paper Scissors robot (RPS robot) we are using in the project is composed of a 3D printed body containing 6 servomotors (5 for the fingers and 1 for the wrist) which, thanks to their rotation will make move the fingers of the hand. Indeed, each finger is connected to the servomotor by 2 wires, which perform a rotation clockwise or counter clockwise will allow the finger to bend or unfold. 
The servomotors are activated according to the shape that will allow the robot to win the game. All the process is defined in the flow chart Figure 1.
Indeed, the hand is connected to a micro controller equipped with a shield that can tell the servomotors how to move to form the shape that will beat its opponent. The micro controller is connected to a computer on which an algorithm can analyse the position of the opponent's hand thanks to the image processing of a camera that records the opponent's movements.

## Inspiration and Resources 

*Leap Motion SDK v3/Janken Robot* 

There have been many advancements in the field of mechanical hands and prosthetics in recent years, and there are several examples of state-of-the-art designs. Here are a few examples:

1.	The DEKA Arm on Figure 2: Also known as the "Luke Arm" after its namesake, Star Wars character Luke Skywalker, the DEKA Arm is a sophisticated prosthetic arm that allows users to perform complex movements with their hand and fingers. It is controlled by electrical signals sent from the user's remaining muscles and uses a combination of sensors and motors to replicate the movements of a natural hand.
 
![image](https://github.com/user-attachments/assets/44c24fc6-eab7-4ae4-8e6d-73570ea8eeaa)


2.	The Bebionic Hand (Figure 3) is a prosthetic hand that uses a unique system of motors and gears to create naturalistic movements in the fingers and thumb. It is also designed to be lightweight and comfortable for all-day use and features advanced grip control that allows users to perform tasks such as holding delicate objects or gripping tightly.
 
![image](https://github.com/user-attachments/assets/89372ebd-d3ec-4da9-b671-b27d73a0876b)



3.	The Michelangelo Hand on Figure 4: The Michelangelo Hand is a prosthetic hand that uses a system of pulleys and cables to create naturalistic movements in the fingers and thumb. It is also designed to be very lightweight and features a unique design that allows users to rotate the wrist and perform a range of different motions.
 
![image](https://github.com/user-attachments/assets/91dd7cca-d4db-4e52-a4f8-b403cebe058b)




4.	The i-limb Hand on Figure 5The i-limb Hand is a prosthetic hand that uses a unique system of motors and sensors to create naturalistic movements in the fingers and thumb. It also features a smartphone app that allows users to customize the hand's settings and control its movements with a few simple gestures.


![image](https://github.com/user-attachments/assets/2a0fbf86-3b7c-478e-8224-ca0fc7c67205)



Overall, these are just a few examples of the state-of-the-art in mechanical hand technology, and there are many other innovative designs and approaches being developed by researchers and engineers around the world. 
Apart from the fact that they are articulated arms and that perfectly represents human-robot interaction and AI capabilities, those robots are much more advanced and complex than the one we use in our project. Hence, the main and only common point between all these robots and our project is that they are articulated arms, which must respond to a command or a need, by a precise movement, programmed beforehand. That said in our case, the need is merely to configurate 3 hands signs meaning that while such project are interesting to look at from the state-of-the-art perspective, they are unnecessarily complex towards our application.
Finally, it is very interesting to see very advanced uses of articulated arms, and to see what type of sensor it is possible to add to them to improve their use for humans. 


### The Janken Robot 
The Japanese Janken Robot was created to play rock-paper-scissors with a 100% winning rate, as an example of human-machine cooperation systems. The game is initiated by a human player who selects one of rock, paper or scissors on the count of one, two, three. Based on the timing, the robot hand plays one of the three options to beat the human player.
The robot is equipped with high-speed vision that can recognize the position and shape of the human hand within 1ms, enabling it to control the wrist joint angle of its own hand accordingly. The robot hand then selects one of rock, paper, or scissors based on the shape of the human hand, and executes its move in just 1ms. (Figure 11) illustrates this mechanism.
This technology demonstrates the potential of cooperation between humans and machines within a few milliseconds, and can be applied to areas such as motion support and cooperation between humans and robots without any time delay. 
Moreover, the increased speed of robots with visual functions can fundamentally change the location conditions of factories, improving productivity and cutting costs even in labor-intensive processes that previously required human input. In summary, the janken robot with its 100% winning rate showcases the possibilities of human-machine cooperation in real-time settings, and highlights the potential for increased efficiency and productivity in various domains by leveraging advanced robot technologies.

![image](https://github.com/user-attachments/assets/2c713e63-7128-43f0-b01f-225c1b35c8cd)

## The method 
The Robot arm is connected to a microcontroller, an Arduino Uno board with a shield, allowing the 6 servomotors to receive commands algorithms, move the servomotors to adapt the hand’s shape.
Using an Arduino Uno with a shield is a common way to extend the functionality of the Arduino board for a specific purpose. A shield is an add-on board that is designed to fit on top of the Arduino Uno and provides additional hardware components such as sensors, actuators, communication modules, or display units. 
There are several benefits of using an Arduino Uno with a shield such as expend its capacities as the Arduino Uno have a limited number of pins and features. Thus, adding more components can quickly become complicated. By using a shield, you can easily add additional components without worrying about wiring and compatibility issues.
Moreover, we are using here 6 PWM servomotors. Choosing an Arduino shield for PWM servo motors depends on the number of motors you need to control, the voltage and current requirements of your motors, and any additional features you need such as built-in voltage regulators or motor protection circuits. 
A PWM (Pulse Width Modulation) servo motor is a type of motor that uses a series of pulses (generated by the Arduino board) to control its position more precisely. The motor receives a series of electrical pulses with varying widths and timing, which determine the position and speed of the motor. They are typically small and lightweight, making them ideal for applications where space is limited. They also consume relatively little power and generate little heat, which makes them suitable for battery-powered applications.

One of the hardware components we are using in the project is the LEAP Motion Controller Camera, connected to a computer through USB port. The LEAP Camera is a powerful and versatile tool for motion control and gesture recognition, with many potential applications in fields such as gaming, design, and medicine. Its high precision, low latency, and ease of use.

The software components of the robot include the control algorithm and the user interface. The control algorithm is responsible for processing the input from the sensors and generating commands for the actuators to execute the desired behaviour. 
The user interface allows the human operator to interact with the robot, such as selecting the game mode or difficulty level.
The communication between the hardware and software components of the robot is illustrated in Figure 12, and it is usually done through a software interface or application programming interface (API). The API defines a set of commands and protocols through a Python algorithm, that the software can use to communicate with the hardware components.
For example, in a rock-paper-scissors robot, the software can use a LEAP API to access the camera‘s data and analyse the human player's hand gesture through a Python algorithm. Based on the analysis, the software would then use the analysis to send results to the Arduino board, which will interpret and send commands in a C++ algorithm to the robot's actuator, to simulate the robot's hand gesture for the game. 

![image](https://github.com/user-attachments/assets/63592fc9-1f1f-4370-b796-e57d340914b0)

### Equipment’s review 
  
Leap Motion Controller
The Leap Motion Controller Figure 13 is a small, rectangular device that uses infrared cameras and LED lights to track hand and finger movements in three dimensions. It is designed to be used as an input device for computers and other digital devices and allows users to interact with virtual environments and software applications through natural hand and finger gestures.
The controller is about the size of a pack of gum and can be attached to a computer or other device through a USB port. Once connected, it creates a virtual 3D space in front of the screen and tracks the movement of hands and fingers within that space.
The Leap Motion Controller uses advanced computer vision algorithms and machine learning techniques to analyse the data captured by its cameras, allowing it to detect even subtle movements and gestures with high accuracy. It can track individual fingers, recognize hand shapes, and poses, and even detect the orientation and movement of objects held in the hand.
The controller is compatible with a wide range of software applications and development tools, including gaming and virtual reality platforms, design and modelling software, and productivity and education applications. It is also used in research and development, particularly in fields such as robotics and artificial intelligence.
Overall, the Leap Motion Controller offers a unique and intuitive way to interact with digital environments and applications and has the potential to revolutionize the way we interact with technology in the future.
![image](https://github.com/user-attachments/assets/cfd799c8-84c5-4cc3-9f18-1ea28c6204d0)

### Robotic arm
Our robotic arm composed of 6 servomotors can be a complex and versatile mechanism capable of performing a wide range of tasks. In this case, the arm is composed of five servomotors controlling the fingers and one servo controlling the wrist. The fingers are controlled by tugging or releasing strings that go through the arm to bend the articulations, while the wrist servo operates in a similar manner. The robot's arm is organized like that of a human, as in Figure 14 replacing articulations by motors.

![image](https://github.com/user-attachments/assets/01e7a0d7-7102-4cb4-8bab-df4ffe689087)

It is precise but limited as it doesn’t nearly encompass half of the articulations present in the human arm therefore making the range of motion quite limited. Nonetheless it is sufficient to mimic some human signs such as rock-paper-scissors.

PWM Servomotors
To program the servomotors for the robotic hand, it is important to understand their operation, given that each servo controls the hand by tugging or releasing strings going through the arm to bend the articulation as we see Figure 15.
To control the position of the servomotor, we use pulse width modulation (PWM), which involves sending a series of pulses of varying width to the servo's control pin. The duration of the pulses determines the position of the motor shaft. To do so we’ll have to figure which pulse corresponds to the max and minimum angle of the servos. By varying the pulse width within this range, we can control the position of the servo and hence the position of the corresponding joint of the robotic hand.
As of now, the first step is to connect the servomotors to the Arduino shield through the arm architecture. It will then be possible to test the range for each servomotor and implement a code specifying specific values to have the hand take the desired positions. 
The datasheet of the motors specify that for a PWM pulse of 1 miliseconds the servo goes to his particular 0° rotation and that for a pulse of 2 miliseconds the servo goes to 180°.  
![image](https://github.com/user-attachments/assets/f102e462-57b3-4418-bfa6-4590e81a7745)


Arduino Uno
The Arduino Uno is a microcontroller board based on the ATmega328P microcontroller chip. It is one of the most popular and widely used boards in the Arduino family of microcontroller boards. The Uno is designed to be easy to use and program, and it is suitable for a wide range of applications, from hobbyist projects to industrial automation.
The board has 14 digital input/output pins, 6 analog inputs, and a range of other pins for connecting to various sensors and devices. It can be powered via USB or an external power supply, and it has a voltage regulator to ensure stable voltage output.
The board can be programmed using the Arduino Integrated Development Environment (IDE), which is a simple and user-friendly software tool for writing and uploading code. Hense, we decided to use it in our project. Moreover, it is an open-source hardware and software, which means that the schematics, design files, and source code are freely available to the public.

 
Figure 16: Arduino Uno


PWM shield controller
A PWM shield controller for Arduino is a hardware module that provides additional PWM (Pulse Width Modulation) outputs for controlling multiple servo motors or LEDs. PWM is a technique used to control the amount of power delivered to a device by varying the pulse width of a signal.
The PWM shield controller for Arduino Figure 17, typically connects to the board's digital pins and provides additional PWM outputs. It may also include other features, such as analog inputs for controlling the PWM signal, and power management circuits to regulate the voltage and current supplied to the servo motors.
The shield is soldered to the Arduino Uno through the headers on the Shield side and the pins on the Arduino side.
Using a PWM shield controller with Arduino allows for the precise control of multiple servo motors, which is useful for a range of applications, including robotics, automation. It can also reduce the number of connections required between the microcontroller board and the servo motors, simplifying the wiring and reducing the risk of errors.
There are several types of PWM shield controllers available for Arduino, with varying numbers of PWM outputs, input voltage ranges, and other features. Some popular options include the Adafruit PWM/Servo Shield, the Pololu Dual VNH5019 Motor Driver Shield, and the SparkFun Ardumoto Shield. When choosing a PWM shield controller, it's important to consider the specific needs of the project and ensure that the controller is compatible with the Arduino board being used. In our project, the one we used is the PWM PCA9685 Controller (Adafruit).


## Results

[[<iframe src="https://www.linkedin.com/embed/feed/update/urn:li:ugcPost:7051266217474412545?collapsed=1" height="399" width="504" frameborder="0" allowfullscreen="" title="Post intégré"></iframe>
](https://www.linkedin.com/posts/elijah-ki-zerbo-a00484198_ai-machinelearning-mediapipe-activity-7051266229860200448-PIAu?utm_source=share&utm_medium=member_desktop&rcm=ACoAAC5YGKABJ_CFfAcqdaFzM5Zayex6DFq2SaI)](https://www.linkedin.com/posts/elijah-ki-zerbo-a00484198_ai-machinelearning-mediapipe-activity-7051266229860200448-PIAu?utm_source=share&utm_medium=member_desktop&rcm=ACoAAC5YGKABJ_CFfAcqdaFzM5Zayex6DFq2SaI)
