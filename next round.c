#include<stdio.h>
int main ()
{

    int a[100],b,c,i,j,k=0;
    scanf("%d",&b);
    scanf("%d",&c);
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    j=a[c-1];
    for(i=0;i<b;i++){
        if(a[i]>=j && a[i]>0){
            k++;
        }
    }
    printf("%d",k);
    return 0;
}
