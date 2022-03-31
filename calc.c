#include <stdio.h>

int main()
{
    

char simb;

float n1, n2, res = 0;

printf("Qual a operação(*, +, -, /): \n");

scanf("%c", &simb);

switch(simb){
    case'*':
    printf("Qual o primeiro número: \n");
    scanf("%f", &n1);
    printf("Qual o segundo número: \n");
    scanf("%f", &n2);
    res = n1 * n2;
    printf("O resultado da operação: %f", res);
    break;
    
    case'-':
    printf("Qual o primeiro número: \n");
    scanf("%f", &n1);
    printf("Qual o segundo número: \n");
    scanf("%f", &n2);
    res = n1 - n2;
    printf("O resultado da operação: %f", res);
    break;
    
    case'+':
     printf("Qual o primeiro número: \n");
    scanf("%f", &n1);
    printf("Qual o segundo número: \n");
    scanf("%f", &n2);
    res = n1 + n2;
    printf("O resultado da operação: %f", res);
    break;
    
    case'/':
    printf("Qual o primeiro número: \n");
    scanf("%f", &n1);
    printf("Qual o segundo número: \n");
    scanf("%f", &n2);
    res = n1 / n2;
    printf("O resultado da operação: %f", res);
    break;
    
}


    return 0;
}
