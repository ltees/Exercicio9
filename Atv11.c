#include <stdio.h>


 main() {
    float vetor[10];
    int i;
    int quantNegativos = 0;
    float somaPositivos = 0;


   
    printf("Digite 10 números reais:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        if (vetor[i] < 0) {
            quantNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }


   
    printf("Quantidade de números negativos: %d\n", quantNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);


    return 0;
}
