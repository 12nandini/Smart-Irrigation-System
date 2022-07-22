clc
clear all
close all
num1=[0 0.0011];
den1=[1 -0.0351 -0.9037];
G1=tf(num1,den1);
rlocus(G1)
hold on
num2=[0 2.154 -1.87];
den2=[4.694 0.012508];
G2=tf(num2,den2);
rlocus(G2,'r')

hold on
num4=[0 10.2592];
den4=[1 -1.0051 1.000];
G4=tf(num4,den4);
rlocus(G4,'g')
hold on
num5=[0 -0.5819];
den5=[1 -1.6580 0.7349];
G5=tf(num5,den5);
rlocus(G5,'c')
legend({'Moisture sensor','Controller','Relay Module','LCD Display'},'Location','northeast')