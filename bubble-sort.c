#include <stdio.h>

void bubble_sort(int vetor[], int loop)
{
    for (int i = 0; i < loop - 1; i++) {
        for (int j = 0; j < loop - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void imprimir(int vetor[], int loop, int flag)
{
    if (flag == 1) {
        printf("Sequencia Original\n");

        for (int i = 0; i < loop; i++) {
            printf("%d ", vetor[i]); 
        }
        printf("\n");
    }
    else {
        printf("Sequencia Ordenada\n");

        for (int i = 0; i < loop; i++) {
            printf("%d ", vetor[i]); 
        }
        printf("\n");
    }
}

int main()
{
    int i, num, loop;

    printf("Digite o tamanho do vetor de 1 a 100: ");
    
    while (scanf("%d", &loop), loop < 1 || loop > 100) {
        printf("Digite o tamanho do vetor de 1 a 100: ");
    }
    
    int vetor[loop];

    for (i = 0; i < loop; i++) {
        printf("Vetor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    imprimir(vetor, loop, 1);
    bubble_sort(vetor, loop);
    imprimir(vetor, loop, 0);
}