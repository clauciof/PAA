import numpy as np
import matplotlib.pyplot as plt
import time as tm
import random

def insertion_sort(vetor, tamanho, y):
    plt.show()
    for i in range(1, tamanho):   
        plt.grid(True)
        plt.plot(y,vetor, 'ro')
        plt.pause(0.001)
        plt.clf()
        if(vetor[i]<vetor[i-1]):
            j=i
            while vetor[j]<vetor[j-1] and j >0:
                aux = vetor[j]#troca
                vetor[j] = vetor[j-1]
                vetor[j-1] = aux
                j = j - 1
    
    plt.grid(True)
    plt.plot(y,vetor, 'ro')
    plt.show()
    
        

def selection_sort(vetor, tamanho, y):
    plt.show()
    for i in range(0, tamanho):
        #gráfico
        plt.grid(True)
        plt.plot(y,vetor, 'ro')
        plt.pause(0.001)
        plt.clf()
        menor = vetor[i]
        for j in range(i+1, tamanho):
            if (vetor[j]<menor):
                menor = vetor[j]
                indice_menor = j
        aux = vetor[i]
        vetor[i] = menor
        vetor[indice_menor] = aux
    
    #plota gráfico
    plt.grid(True)
    plt.plot(y,vetor, 'ro')
    plt.show()
    


def bubble_sort():
    return 


vetor = [] 
tamanho = 0 
y=[]

#cria vetor
for i in range(0,300):
   vetor.append(random.randint(-20,350)) 
   y.append(tamanho+1)
   tamanho = tamanho + 1

#insertion_sort(vetor, tamanho, y)
selection_sort(vetor, tamanho, y)
