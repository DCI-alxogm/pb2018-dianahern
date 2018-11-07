import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(-10,10,20)
y1=x**2
y2=x**(3./2)
plt.plot(x,y1)
plt.plot(x,y2)
plt.show()

