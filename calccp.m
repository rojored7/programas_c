clc;
clear all;
close all;

r = input('set ponit: ');
vp = input('valor pico: ');
mpp = 100*(vp-r)/r
c = (log(mpp/100))^2;
z = (c/(pi^2+c))^(1/2)
tr = input('tiempo de subida: ');
wd = (pi-atan(sqrt(1-z^2)/z))/tr
wn = wd/sqrt(1-z^2)
zwn = z*wn
cp = 2*z*wn
kp = input('Kp: ');
ck = (wn^2)/kp
