clc
close all
clear all
Ts=0.1;
y=[100, 100, 100, 100, 85 ,83 ,50, 20, 10 ,5]';
u=[0, 0.5, 1, 1.5, 2, 2.1, 2.5, 3, 3.5, 4]';
data=iddata(y,u,Ts);
iodelay=2;
sysd=tfest(data,iodelay,'Ts',Ts);
disp(sysd);
