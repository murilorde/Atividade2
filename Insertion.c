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
A fun��o "insertionSort" organiza os n�meros da matriz "arr" atrav�s de uma compara��o executada pelos dois looping's
A vari�vel "i" percorre todo o tamanho da matriz e armazena atrav�s da vari�vel "key"
Com isso, para a realiza��o de espa�os vazios, "while" percorre todo o valor da esquerda pra direita
Portanto, haver� substitui��o dos n�meros conforme a compara��o, resultando na leitura do posicionamento
*/

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
/*
A fun��o "printArray" serve justamente para escrever na tela todos os n�meros que foram ordenados
Ent�o, ser� printado at� que o valor de "i" n�o esteja mais abaixo do tamanho total da matriz "arr"
*/

void main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printArray(arr, size);
}
/*
Em "main", a matriz � feita juntamente de seus valores, al�m da coloca��o do tamanho da mesma e a chamada das outras duas fun��es
*/

// Em suma, a intera��o "Insertion Sort" � uma ordena��o simples de valores que ocorre atrav�s de um percurso em uma determinada estrutura
// Os valores ser�o alterados at� estarem em uma ordem (estruturada atrav�s de uma fun��o), mexendo um elemento por vez
