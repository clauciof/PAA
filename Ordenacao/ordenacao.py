
import matplotlib.pyplot as plt
import time as tm
import random

def insertion_sort(vetor, tamanho, x):
    plt.show()
    for i in range(1, tamanho): 
        plt.title("Insertion Sort")  
        plt.grid(True)
        plt.plot(x,vetor, 'ro')
        plt.pause(0.001)
        plt.clf()
        if(vetor[i]<vetor[i-1]):
            j=i
            while vetor[j]<vetor[j-1] and j >0:
                aux = vetor[j]#troca
                vetor[j] = vetor[j-1]
                vetor[j-1] = aux
                j = j - 1
   
    plt.title("Insertion Sort") 
    plt.grid(True)
    plt.plot(x,vetor, 'ro')
    plt.show()
    
        

def selection_sort(vetor, tamanho, x):
    plt.show()
    for i in range(0, tamanho):
        #gráfico
        plt.title("Selection Sort")
        plt.grid(True)
        plt.plot(x,vetor, 'ro')
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
    plt.title("Selection Sort")
    plt.grid(True)
    plt.plot(x,vetor, 'ro')
    plt.show()
    


def bubble_sort(vetor, tamanho, x):
   
    plt.show()
    trocou = True
    while trocou:
        plt.title("Bubble Sort")
        plt.grid(True)
        plt.plot(x, vetor, 'ro')
        plt.pause(0.001)
        plt.clf()
        trocou = False
        for i in range(1, tamanho):
            if vetor[i]<vetor[i-1]:
                aux = vetor[i-1]
                vetor[i-1] = vetor[i]
                vetor[i] = aux
                trocou = True
    plt.title("Bubble Sort")
    plt.grid(True)
    plt.plot(x, vetor, 'ro')
    plt.show()
    

vetor = [] 
tamanho = 0 
x=[]

#cria vetor
for i in range(0,350):
   vetor.append(random.randint(-200,350)) 
   x.append(tamanho+1)
   tamanho = tamanho + 1

#insertion_sort(vetor, tamanho, x)
selection_sort(vetor, tamanho, x)

#bubble_sort(vetor, tamanho,x)