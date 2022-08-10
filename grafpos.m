%Gráfica de control de posición
clc;
clear all;
close all;
%leyendo las muestras tomadas al sistema
fid=fopen('MONIT.TXT','r');
datos=fscanf(fid, '%f', [9 inf]);    % datos tiene 9 renglones
fclose(fid);
t=datos(1,:); 
R=datos(2,:)/100;
r=datos(3,:);
Em=datos(4,:);
e=datos(5,:);
sen=datos(6,:)/100;
y=datos(7,:);
M=datos(8,:);
u=datos(9,:);

figure(1)
subplot(4,1,1)
plot(t,r,t,e);
set(legend('$r[rad]$','$e[rad]$'), 'interpreter', 'latex')
grid on;

subplot(4,1,2)
plot(t,sen,t,y);
set(legend('$sen[rad]$','$y[rad]$'), 'interpreter', 'latex')
grid on;

subplot(4,1,3)
plot(t,u,t,M);
set(legend('$u[V]$','$M[V]$'), 'interpreter', 'latex')
xlabel('$t[s]$', 'interpreter', 'latex')
grid on;

subplot(4,1,4)
plot(t,R,t,sen);
set(legend('$R[rad]$','$sen[rad]$'), 'interpreter', 'latex')
grid on;

