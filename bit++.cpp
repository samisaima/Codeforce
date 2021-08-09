#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main ()
{
    int X=0,i,x;
    char ch[4];
    cin>>x;
    for(i=1;i<=x;i++){
        cin>>ch;
        if(strcmp(ch,"++X")==0){
            ++X;
        }
        else if (strcmp(ch,"--X")==0){
            --X;
        }
        else if(strcmp(ch,"X++")==0){
            X++;
        }
        else if (strcmp(ch,"X--")==0){
            X--;
        }

    }
    cout<<X;

}

