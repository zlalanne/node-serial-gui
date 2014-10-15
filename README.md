# node-serial-gui

Uses Node.js and node-webkit to build a gui for graphing serial data. This package includes a simple Energia sketch to send random data from a LaunchPad to the GUI over serial. 

### Uses
* [Node.js](nodejs.org)
* [node-serialport](https://github.com/voodootikigod/node-serialport)
* [node-webkit](https://github.com/rogerwang/node-webkit)
* [flot](http://www.flotcharts.org)
* [bootstrap](http://getbootstrap.com)

### Instructions

To make a working stand-alone application from the code in this repository, you will need to install a framework and some tools.

* Install the [Node.js](nodejs.org) framework. Follow the instructions included with the installer for your platform.
* Install the following: ```bower```, ```nw-gyp```, ```grunt``` and ```grunt-cli``` with ```npm install -g <package_name>```. For instance, to install bower go to your favorite terminal and type ```npm install -g bower```. 

	*Note that the ```-g``` flag installs those packages globally and may require sudo and an administrator package to work properly on your platform.*

* Install npm components  
	```npm install```
* Install bower components  
	```bower install```
* Rebuild node-serialport for node-webkit  
	```
	cd node_modules/serialport    
	nw-gyp rebuild --target=your_nodewebkit_version_number.
		
	```
	*Replace your_nodewebkit_version_number with the proper number - for instance, 0.9.2*.
* Run grunt to build the executable  
	```
	grunt
	```


### Screenshot
![Screenshot](screenshot.png)
