#include <stdio.h>
int main()
{
    int a, b;
    printf(" \t PROGRAMME QUI INFORME LA NATURE DU PRODUIT\n");
    printf("Saisir la valeur de a:");
    scanf("%d", &a);
    printf("Saisir la valeur de b:");
    scanf("%d", &b);
    if ((a<0 && b<0) || (a>0 && b>0))
    {
    	printf("Leur produit est positif!");
    }
    else if ((a>0 && b<0) || (a<0 && b>0))
     {
     	printf("Leur produit est negatif !");
     }
    return 0;
}
