/*
print a triangle or a pyramid of numbers, always
starting from 1, with space between them e.g. :
    1
   1 2
  1 2  3 

*/

// code :

#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       for(int j=1; j<=n-i; j++)
       {
           cout<<" ";
       }
       for(int k=1; k<=i ; k++)
       {
          cout<<k<<" ";
       }
       cout<<endl;
        
    }
    return 0;
}
