// INSERTION SORT

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
/*
A função "insertionSort" organiza os números da matriz "arr" através de uma comparação executada pelos dois looping's
A variável "i" percorre todo o tamanho da matriz e armazena através da variável "key"
Com isso, para a realização de espaços vazios, "while" percorre todo o valor da esquerda pra direita
Portanto, haverá substituição dos números conforme a comparação, resultando na leitura do posicionamento
*/

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
/*
A função "printArray" serve justamente para escrever na tela todos os números que foram ordenados
Então, será printado até que o valor de "i" não esteja mais abaixo do tamanho total da matriz "arr"
*/

void main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printArray(arr, size);
}
/*
Em "main", a matriz é feita juntamente de seus valores, além da colocação do tamanho da mesma e a chamada das outras duas funções
*/

// Em suma, a interação "Insertion Sort" é uma ordenação simples de valores que ocorre através de um percurso em uma determinada estrutura
// Os valores serão alterados até estarem em uma ordem (estruturada através de uma função), mexendo um elemento por vez
