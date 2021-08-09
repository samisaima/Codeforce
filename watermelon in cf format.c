#include<stdio.h>
int main ()
{
    int w;
    scanf("%d",&w);
    printf("\n");
    if(w%2 == 0 && w>2 && w<=100){
        printf("Yes");
    }
    else if(w>100){
        printf("!Error!");
    }
    else{
        printf("No");
    }
   return 0;
}


