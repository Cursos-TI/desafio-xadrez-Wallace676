#include <stdio.h>

int main()
{
    // ==== Movimento da Torre ==== ;
    // Usei laço for para simular movimeto da torre;
    printf("=== Movimento da Torre ===\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" Direita\n");
    }

    // ==== Movimento do Bispo ====;
    // Usei do-wilhe para o movimento do bispo;
    printf("\n=== Movimento do Bispo ===\n");
    int num1 = 0;
    do{

        printf("Cima, Direita\n");
        num1++;


    }while (num1 < 5);


    // ==== Movimento da Rainha ====;
    // Usei while para o movimento da rainha 
    printf("\n=== Movimento da Rainha ===\n");
    int num = 0;

    while (num < 8)
    {
        printf(" Esquerda\n");
        num++;
    }

    return 0;// Encerra o programa;
}
