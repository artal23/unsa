clear, clf, hold, off
n=0; h=0.05; m=20;
%constantes
c=0.24; b=1; d=1; f=0.68; w=1.7;
h=2*pi/(w*m);
%condiciones iniciales
t=0; x=1; v=1; tfin=100000;
%inicio de la simulacion
pt(1)=t; pv(1)=v; px(1)=x;
while t<tfin
  n=n+1;
  for i=1:m
    a=feval(’df’,t,x,v,c,f,w);
    k1=h*a;
    t1=t+h/2; x1=x+h*v/2; v1=v+k1/2;
    a=feval(’df’,t1,x1,v1,c,f,w);
    k2=h*a;
    x2=x1+h*k1/4; v2=v+k2/2;
    a=feval(’df’,t1,x2,v2,c,f,w);
    k3=h*a;
    t3=t+h; x3=x1+hh*k2/4; v3=v+k3;
    a=feval(’df’,t3,x3,v3,c,f,w);
    k4=h*a;
    x=x+h*v+h*(k1+k2+k3)/6;
    v=v+(k1+2*k2+2*k3+k4)/6;
    t=t+h;
    if x>+pi
      x=x-2*pi;
    endif
    if x<-pi
      x=x+2*pi;
    endif
  endfor
  px(n+1)=x; pv(n+1)=v;
endwhile
plot(px,pv,’.’); grid on;
xlabel(’x(m)’), ylabel(’v (m/s)’);
