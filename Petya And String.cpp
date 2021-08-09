#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{

    int X;
    char ps1[101], ps2[101];
    cin>>ps1;
    cin>>ps2;
    strlwr(ps1);
    strlwr(ps2);
        X=strcmp(ps1,ps2);
    cout<<X;
}
