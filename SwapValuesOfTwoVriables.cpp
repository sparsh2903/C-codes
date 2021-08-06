/* swap the values of 2 variables :
   suppose a=8 &
   b=2 so code and get value of 'a' as a=2
   & of 'b' as b=8

*/
// Code:
#include <iostream>
using namespace std;

int main() {
 int a=8;
 int b=2;
 cout<<"the value of 'a' before swapping is: \n";
cout<< a ;
cout<<endl;
cout<<"and the value of 'b' before swapping is: \n";
cout<<b;
cout<<endl;

 int c=a;
 a=b;
 b=c;
 cout<<"after swapping the vale of 'a' is : \n";
  cout<<a;
  cout<<endl;
 cout<<"after swapping the vale of 'b' is : \n";
 cout<<b;

  return 0;
}

