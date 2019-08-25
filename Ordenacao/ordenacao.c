#include <stdio.h>
#define tamanho 9
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

int main(){
    int vetor[tamanho] = {11,785,1,4,8, 6, 900, -30, -1};

    insertion_sort(vetor, tamanho);
    selection_sort(vetor, tamanho);
    bubble_sort(vetor, tamanho);

}