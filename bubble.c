#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
Esta fun��o serve para a troca dos n�meros que ser�o comparados pela fun��o "bubbleSort"
Caso a fun��o consiga uma compara��o onde o n�mero � maior que o outro, ser�o trocados pelo simples ato de um receber o outro
Ou seja, as fun��es recebem dois novos valores, equivalentes aqueles que est�o sendo comparados
*/
void bubbleSort(int *v, int n){
    if (n < 1)return;

    for (int i=0; i<n; i++)
        if (v[i] > v[i+1])
            swap(&v[i], &v[i+1]);
    bubbleSort(v, n-1);
}
/*
Esta fun��o compara os n�meros selecionados atrav�s do "scanf", tendo um looping onde if compara o primeiro valor do vetor com o pr�ximo(v[i] > v[i+1])
Com isso, caso o valor comparado seja um n�mero maior, a troca � executada pela fun��o "swap"
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
Primeiramente, a fun��o main faz com que o usu�rio escolha quantas posi��es ter�o o vetor, juntamente de uma l�gica que envolve
a integra��o da vari�vel "v" em uma vari�vel inteira, esta que � baseada no tamanho do vetor
Com isso, um primeiro looping � feito para que a fun��o "bubbleSort" esteja integrada ao ato de escolher os valores daquele vetor (de tamanho
estabelecido pelo usu�rio)
Por �ltimo, um segundo looping � criado para o simples ato de " printar " na tela do os n�meros j� em ordem
*/

// A ordena��o feita pelo m�todo " Bubble Sort " � simples, pois � apenas uma compara��o de elementos adjacentes
// Desta forma, compara uma posi��o a outra at� que as duas recebem novos valores (os mesmo comparados)
// Todas as fun��es funcionam at� que n�o existam mais posi��es a serem comparadas, ou seja, todos os n�meros estejam ordenados
