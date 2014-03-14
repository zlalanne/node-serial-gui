# node-serial-gui

Uses Node.js and node-webkit to build a gui for graphing serial data.  
Includes simple Energia sketch to send random data from a LaunchPad to the GUI over serial. 

### Uses
* Node.js
* node-serialport
* node-webkit
* flot
* bootstrap

### Instructions

Install npm components  
```shell
npm install
```
Install bower components  
```shell
bower install
```
Rebuild node-serialport for node-webkit  
```shell
cd node_modules/serialport    
nw-gyp rebuild --target=0.8.4
```
Run grunt to build the executable  
```shell
grunt
```


### Screenshot
![Screenshot](screenshot.png)
