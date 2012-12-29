Welcome to a test application created with Open Frameworks!

For a visual demonstration, check out this link below:
http://www.youtube.com/watch?v=6ycbGJ0xjSI


To run this application, you first need OpenFrameworks installed on your
machine.  Then, in the directory where you cloned this repository, type 
     make 
at the command line.  After the compilation, you can open the bin directory and 
run the created file from there.  

Note: With some small adjustments, I have successfully tested this application 
on the Raspberry Pi.  To compile it, I downloaded OpenFrameworks for the 
Rasperry Pi here at:

https://github.com/openFrameworks-RaspberryPi/openFrameworks/wiki/Raspberry-Pi-Getting-Started

I then replaced the Makefile with the makefile in the raspberrypi_helloworld 
example, and, in main.cpp, I replaced:

#include "ofAppGlutWindow.h"

with:

#include "ofAppRaspberryPiWindow.h"
#include "ofGLES2Renderer.h"


Note that I used the Raspbian distribution.

Note to self: Don't forget to "make clean" before commits.
