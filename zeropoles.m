clc
clear all
close all
num1=[0 0.0011];
den1=[1 -0.0351 -0.9037];
[zz1,pp1]=tf2zp(num1,den1)
pzmap(pp1,zz1)
hold on
num2=[0 2.154 ];
den2=[4.694 0.012508];
[zz2,pp2]=tf2zp(num2,den2)
pzmap(pp2,zz2)
hold on
num4=[0 10.2592];
den4=[1 -1.0051 1.000];
[zz4,pp4]=tf2zp(num4,den4)
pzmap(pp4,zz4)
hold on
num5=[0 -0.5819];
den5=[1 -1.6580 0.7349];
[zz5,pp5]=tf2zp(num5,den5)
pzmap(pp5,zz5)
legend({'Moisture sensor','Controller','Relay Module','LCD Display'},'Location','northeast')