import numpy as np ##Primero se hace la declaración de las librerías, una sirve para arreglos y la otra para gráficos
import matplotlib.pyplot as plt

x=np.linspace(-10,10,20) ##Linspace te dice cómo es tu conjunto de elementos ( empieza en -10, termina en 10 y tiene 20 elementos
y1=x**2 ##Operaciones
y2=x**(3./2)
plt.plot(x,y1)##Se imrpimen los resultados en coordenadas
plt.plot(x,y2)
plt.show() ##Sirve para mostrar el gráfico

