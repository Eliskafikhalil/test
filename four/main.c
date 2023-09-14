#include <stdio.h>
#include <stdlib.h>


int main() {
    int a;
    int b;
    int c;
    printf("enter a,b,and c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int somme = a + b + c;
    float avg = somme / 3;

     printf("%d \n", somme);
     printf("%f \n", avg);
    return 0;
}
