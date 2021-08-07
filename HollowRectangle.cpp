/* write c++ code for creating a hollow rectangle, 
first input value of row and then column,  eg:

*******
*     *
*     *
*     *
*     *
*     *
*     *
*******

*/

// Code:

#include <iostream>
using namespace std;

int main(){
    int r,c; // input value r= row & c = column
    cin>>r>>c;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(i==1 || i==r)
            {
                cout<<"*";

            }
            else if(j==1 || j==c){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}