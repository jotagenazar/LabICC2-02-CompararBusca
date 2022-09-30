#include <stdio.h>
#include <stdlib.h>

long long int binarySearch(int *array, unsigned long long int start, unsigned long long int end, int desiredElement) { //implementacao da busca binaria recursiva
    if(end >= start) {
        unsigned long long mid = start + (end - start) / 2;

        if(array[mid] == desiredElement) //se o elemento for exatamente o meio
            return mid;

        if(array[mid] > desiredElement) //se o elemento do meio for maior que o buscado, elemento na primeira metade
            return binarySearch(array, start, mid - 1, desiredElement);

        //se o elemento do meio for menor que o buscado, elemento na segunda metade
        return binarySearch(array, mid + 1, end, desiredElement);
    }

    return -1;
}

int compare(const void *a, const void *b) { //funcao utilizada na comparacao do qsort
   return ( *(int*)a - *(int*)b );
}

int main() {
    //leitura da quantidade de valores a serem lidos
    unsigned long long int k;
    scanf(" %llu", &k);

    //alocaçao e leitura dos valores do vetor
    int *searchedArray = (int *) malloc(k * sizeof(int));
    for(unsigned long long int i = 0; i < k; ++i) {
        scanf(" %d", &searchedArray[i]);
    }

    //ordenaçao do vetor
    qsort(searchedArray, k, sizeof(int), compare);

    //leitura do número de consultas a serem feitas
    unsigned long long int q;
    scanf(" %llu", &q);

    //consultas
    int desiredElement;
    for(unsigned long long int i = 0; i < q; ++i) {
        scanf(" %d", &desiredElement);
        switch(binarySearch(searchedArray, 0, k - 1, desiredElement)) {
            case -1:
                printf("Nao encontrou\n");
                break;
            default: 
                printf("Encontrou\n");
        }
    }

    free(searchedArray);

    return EXIT_SUCCESS;
}