#include <stdio.h>


 main() {
    int vetor[6];
    int i;


   
    printf("Digite 6 números inteiros pares:\n");


   
    for(i = 0; i < 6; i++) {
        do {
            scanf("%d", &vetor[i]);
            if (vetor[i] % 2 != 0) {
                printf("Por favor, insira um número par.\n");
            }
        } while (vetor[i] % 2 != 0);
    }


   
    printf("Os valores na ordem inversa são: ");
    for(i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


   
}
