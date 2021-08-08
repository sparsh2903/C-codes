/*
create a rhombus pattern, e.g. :
    *****
   *****
  *****
 *****
    
*/

// code:


#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i=1;i<=n ; i++ )  //loop for rows
    {
        for(int j=1; j<=n-i;j++) //for spaces
        {
            cout<<" ";
        }
        for(int k=1; k<=n;k++) // for printing stars
        {
            cout<<"*";
        }
        cout<<endl; //end line
    }

}