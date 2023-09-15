#include <stdio.h>
#include <stdlib.h>

int main()
{
float  x1, y1;
            printf ("entrer lees cordonne de A :\n");

            scanf("%f%f", &x1, &y1);



float x2, y2;
printf("entrer les cordonne de B \n");

scanf ("%f%f",&x2,&y2);



        double distance = sqrt(pow(x2 - x1,2) + pow(y2 -y1,2));
        printf("le result est : %f", distance);
          return 0;
}



