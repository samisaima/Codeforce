#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{

    int i,j,a,b;
    cin>>a>>b;
    string ch;
    cin>>ch;
     for(i=0;i<b;i++)
     {
       for (j=0;j<ch.size()-1;j++)
       {

           if(ch[j] == 'B' && ch[j+1] == 'G')
           {
               ch[j] = 'G';
               ch[j+1] = 'B';
               j++;
           }
       }
     }
     cout<<ch;

}
