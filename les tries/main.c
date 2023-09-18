#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [10];
    int i,j , tmp;
    for( i=0 ; i<10; i++){
    printf("T [%d]=",i+1);
    scanf ("%d",&T[i]);
    }
 for (int i=0; i<10 ;i++){
for (int j=i+1 ;j<10 ;j++){
        if (T[i]> T[j]){
            tmp=T[i];
            T[i]= T[j];
            T[j]=tmp;

        }
}}
printf("donne les nombre croissant: \n");
for (i=0;i<10;i++)
    printf("%d " ,T[i]);
    return 0;
}






