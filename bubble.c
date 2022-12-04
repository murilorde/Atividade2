#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
Esta função serve para a troca dos números que serão comparados pela função "bubbleSort"
Caso a função consiga uma comparação onde o número é maior que o outro, serão trocados pelo simples ato de um receber o outro
Ou seja, as funções recebem dois novos valores, equivalentes aqueles que estão sendo comparados
*/
void bubbleSort(int *v, int n){
    if (n < 1)return;

    for (int i=0; i<n; i++)
        if (v[i] > v[i+1])
            swap(&v[i], &v[i+1]);
    bubbleSort(v, n-1);
}
/*
Esta função compara os números selecionados através do "scanf", tendo um looping onde if compara o primeiro valor do vetor com o próximo(v[i] > v[i+1])
Com isso, caso o valor comparado seja um número maior, a troca é executada pela função "swap"
*/

int main(){
    int tam,i,*v;
    scanf("%d",&tam);
    v=(int*)malloc(tam*sizeof(int));
    for(i=0;i<tam;i++)scanf("%d",&v[i]);
    bubbleSort(v,tam-1);
    for(i=0;i<tam;i++)printf("%d ",v[i]);
    return 0;
}
/*
Primeiramente, a função main faz com que o usuário escolha quantas posições terão o vetor, juntamente de uma lógica que envolve
a integração da variável "v" em uma variável inteira, esta que é baseada no tamanho do vetor
Com isso, um primeiro looping é feito para que a função "bubbleSort" esteja integrada ao ato de escolher os valores daquele vetor (de tamanho
estabelecido pelo usuário)
Por último, um segundo looping é criado para o simples ato de " printar " na tela do os números já em ordem
*/

// A ordenação feita pelo método " Bubble Sort " é simples, pois é apenas uma comparação de elementos adjacentes
// Desta forma, compara uma posição a outra até que as duas recebem novos valores (os mesmo comparados)
// Todas as funções funcionam até que não existam mais posições a serem comparadas, ou seja, todos os números estejam ordenados
