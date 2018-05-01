# About NEDC

NEDC stands for National Engineering Design Challenge, and it is a national competition held annually by the MESA Program. The challenge tasks high school students with building and designing a product that uses arduino to solve a problem in their community.

# The BreeziHome

The BreeziHome is our product for the NEDC challenge, which won 3rd at preliminaries and 1st at regionals. It will be competing on May 12, 2018 at the State Competition at UC Irvine. The product works to conserve residential energy usage on the principle that opening windows at certain times can help to maintain house temperature without using energy on space heating/cooling. Our prototype is a model of a house that has 5 miniature windows. These windows are opened and closed with a rack and pinion system that is powered by the motor. 

# The Arduino Code

The arduino uses an H-Bridge to power the motor and reverse the polarity so that it can turn in both directions. It also takes input from two temperature sensors and uses a bluetooth module to communicate with an app that the user can use to control the system. Thermohome.h and Thermohome.cpp define a library for the project that has a Window class with a constructor and two methods, open and close. The arduino code takes advantage of these libraries in conjunction with the app and temperature sensors to open and close the windows when required.


