#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 10
#define tamanho2 5
typedef int bool;
enum { false, true };


void insertion_sort(int V[], int size){
    printf("INSERTION SORT\n");
    int i, aux;
    for(i = 1; i<size; i++){
        int j = i-1;
        for(j; j>=0;j--){
            if(V[j+1]<V[j]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }

    int k = 0;
    while( k < tamanho){
        printf("%d\n", V[k]);
        k++;
    }
  
}

void selection_sort(int V[], int size){
    printf("SELECTION SORT\n");
    int i, j, aux, index;
    for(i=0; i<size; i++){
        int menor = V[i];
        index = i;
        for(j=i+1;j<size;j++){
            if(V[j]<=menor){
                menor = V[j];
                index = j;
            }
        }
        aux= V[i];
        V[i] = menor;
        V[index] = aux;
    }

    int k = 0;
    while( k < tamanho){
        printf("%d\n",V[k]);
        k++;
    }
}

void bubble_sort(int V[], int size){
    printf("BUBBLE SORT\n");
    bool mudou = true;
    int i = 1, j , aux;
    while(mudou){
        i = 1;
        mudou = false;
        for(i;i<size;i++){
            if(V[i]<=V[i-1]){
                aux = V[i-1];
                V[i-1] = V[i];
                V[i] = aux;
                mudou = true;
            }
        }
    }
    int k = 0;
    while( k < tamanho){
        printf("%d\n",V[k]);
        k++;
    }
}

void merge(int V[], int p, int m, int u){
    int tam = u - p + 1;
    int i=p, j=m+1, k=0;
    int *w = malloc(tam*sizeof(int));
    while (i<=m && j<=u){
        if(V[i]<V[j]){
            w[k] = V[i];
            i++; k++;
        }else{
            w[k] = V[j];
            k++; j++;
        }
    }
    while (i<=m){
        w[k] = V[i];
        k++; i++;
    }
    while (j<=u){
       w[k] = V[j];
        k++; j++;
    }
    for(k=0;k<tam;k++)
        V[p+k] = w[k];
    free(w);   
}

void merge_sort(int V[], int p, int u){
    if(p<u){
        int q = (u + p) / 2; 
        merge_sort(V,p,q);
        merge_sort(V,q+1,u);
        merge(V,p,q,u);
    }
}

void quick_sort(){}


int main(){
    int vetor[] = {32,785,1,4,8, 6, 900, -30,90,78};
    int size = sizeof(vetor)/sizeof(vetor[0]);
   // int vetor[] = {600, 9, 30, -1};
   
    //insertion_sort(vetor, tamanho);
    //selection_sort(vetor, tamanho);
    //bubble_sort(vetor, tamanho);
    //merge_sort(vetor,0, size-1);
    printf("%d", vetor[0]);
    muda_vetor(vetor,1);
    printf("%d", vetor[0]);
    
   
   /* int i;
    for(i=0;i<size;i++){
        printf("%d ", vetor[i]);
    }*/
   
}