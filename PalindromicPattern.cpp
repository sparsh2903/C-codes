/*
print a palindromic structure of numbers, with
 space between them e.g. :
     1
   2 1 2
 3 2 1 2 1 

*/

// code :

#include<iostream>
using namespace std;

int main (){
  int n;
  cin>>n;
    for(int i=1; i<=n; i++)
    {
        int j;
     for( j=1; j<=n-i;j++)
     {
         cout<<"  ";
     }
     int k=i;
     for(; j<=n;j++)
     {
       cout<<k--<<" ";
     }
     k=2;
     for(; j<=n+i-1; j++)
     {
         cout<<k++<<" ";
     }
     cout<<endl;
    }
}
