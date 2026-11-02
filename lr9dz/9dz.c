#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() 
{   
    setlocale(LC_ALL, "RUS");
    char symv;
    int a, h;

    printf("введите символ : ");
    scanf(" %c", &symv); 

    printf("введите a: ");
    scanf("%d", &a);

    printf("введите  h: ");
    scanf("%d", &h);

    printf("\nфигура:\n");

    for (int l = 0; l < h; l++) {

        for (int w1 = 0; w1 <= l; w1++)
            printf(" ");

        for (int v1 = 1; v1 <= a && l <= h; v1++)
            printf("%c", symv);

        printf("\n");
    }
}
