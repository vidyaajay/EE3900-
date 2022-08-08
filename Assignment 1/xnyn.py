#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import numpy as np
import matplotlib.pyplot as plt
datasetx = np.loadtxt('stemplotx.dat', dtype ='float')
datasety = np.loadtxt('stemploty.dat', dtype = 'float')
plt.subplot(2,1,1)
plt.stem(range(0, len(datasety)),datasety)
plt.ylabel('y[n]')
plt.subplot(2,1,2)
plt.stem( range(0, 6),datasetx)
plt.ylabel("x[n]")

