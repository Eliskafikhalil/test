#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],i ;

    for ( i=0 ; i<10; i++){


    printf("donne le nommbre %d ", i);

     scanf ("%d",&T[i]);
    }
    int max = T [0];

for (i=0 ;i<9;i++){

    if(max<T[i+1]){

        max=T[i+1];
        }
    }

int min=T[0];
    for (i=0 ;i>9;i++){

    if(min>T[i+1]){

        min=T[i+1];
        }


    }
  printf ("max est %d min %d",max,min);
    return 0;
}

