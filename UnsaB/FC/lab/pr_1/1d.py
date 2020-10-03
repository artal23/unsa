from matplotlib import style 
import matplotlib.pyplot as plt
import numpy as np
h=0.01
t=10
ax=0
velocidad = np.array([-2,4,6])
posicion = np.array([3,-4,5])
vx=0
pt = np.arange(0,t,h)
px=[]
pv=[]
pa=[]
py=[]
pvy=[]


for t in pt:
	velocidad_mas=velocidad*h
	posicion=posicion+velocidad_mas
	velocidad=velocidad+ax*h
	px.append(posicion[0])
	pv.append(velocidad[0])
	py.append(posicion[1])
	pvy.append(velocidad[1])
	pa.append(ax)


#picture = plt.figure()
#ax1=picture.add_subplot(11,projection='3d')
#plt.subplot(2,2,1)
'''print(x,y)
plt.plot(px,py)    
plt.xlabel('')
plt.ylabel('')
plt.title('x')
plt.grid(True)
'''
plt.subplot(3,2,1)
plt.plot(pt,px)    
plt.xlabel('tiempo')
plt.ylabel('espacio')
plt.title('x-t')
plt.grid(True)

plt.subplot(3,2,2)
plt.plot(pt,pv)    
plt.xlabel('tiempo')
plt.ylabel('velocidad')
plt.title('v-t')
plt.grid(True)

plt.subplot(3,2,3)
plt.plot(pt,pa)    
plt.xlabel('tiempo')
plt.ylabel('aceleracion')
plt.title('a-t')
plt.grid(True)

plt.subplot(3,2,4)
plt.plot(px,pv)    
plt.xlabel('espacio')
plt.ylabel('velocidad')
plt.title('espacio de fases')
plt.grid(True)

plt.subplot(3,2,5)
plt.plot(py,pvy)    
plt.xlabel('espacioY')
plt.ylabel('velocidad')
plt.title('espacio de fases')
plt.grid(True)



plt.show()
