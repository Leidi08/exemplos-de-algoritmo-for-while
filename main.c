#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    while(i < 10)
    {
        printf("ola\n");
        i++;
    }

    printf("\n \n");

    //ou então

    for (i = 0; i < 10; i++)
        printf("ola\n");

    //outro exemplo
    int num;

    printf("digite um numero para saber se e real ou par:");
    scanf("%d",&num);

    while (num!=0)
    {
        if (num%2!=0)
            printf("impar\n");
        else
            printf("par\n");
        printf("digite um numero para saber se e real ou par:");
        scanf("%d",&num);
    }

    return 0;
}
