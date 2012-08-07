#aeolus-gui#

aeolus-gui is an graphical desktop client for the Aeolus cloud management suite:

http://aeolusproject.org

Author(s): Nitesh Narayanlal
License:   Apache License Version 2.0

#compiling#
To build aeolus-gui, you must have the necessary dependencies installed and then checkout the source dir:

* sudo yum install git qt-devel
* git clone http://github.com/niteshnarayanlal/Aeolus-gui.git
* cd Aeolus-gui

Next compile the sources:
* qmake-qt4
* make

#running#
To run aeolus-gui, first make sure you have an instance of Aeolus conductor running locally (remote management support coming in the near future):

* sudo yum install aeolus-all
* sudo aeolus-configure

Finally launch the 'Aeolus' command in the local checkout directory:

* ./Aeolus

You can now log on w/ the initial admin account ('admin'/'password') to configure cloud providers, images, and instances right from the desktop!
=======
