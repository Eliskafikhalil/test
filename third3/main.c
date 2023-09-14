#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
  printf("enter first num");
    printf("enter second num");

    scanf("%d",&num1);
    scanf("%d",&num2);

    int plus = num1 + num2;
    int sub = num1 - num2;
    int multi = num1 * num2;
    float div = num1 / num2;
    int perc = num1 % num2;

     printf("%d \n", plus);
     printf("%d \n", sub);
     printf("%d \n", multi);
     printf("2.f\n", div);

     printf("%d \n", perc);


    return 0;
}
