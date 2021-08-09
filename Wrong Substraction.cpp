#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,k,i,j,r;
    cin>>n;
    cin>>k;
    r=n;
    for(i=1;i<=k;i++){
        j=r%10;
        if(j==0){
            r=r/10;
        }
        else{
            r=r-1;
        }
    }
    cout<<r;

}
