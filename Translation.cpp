#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{

    char a[1000],b[1000];
    int i,j;
    cin>>a;
    cin>>b;
    j=strlen(a);
    for(i=0;i<strlen(a)/2;i++)
    {
        swap(a[i],a[j-1]);
        j--;
    }
    if(strcmp(a,b)== 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
