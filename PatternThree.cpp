/* pattern3, print the following pattern :

*****
 ****
  ***
   **
    *
     

 */

// Code :

#include <iostream>
using namespace std;

int main() {int s=1;
  for (int i=5; i>=0; i--)
  {
  for(int j=1; j<=i; j++)
  {
  cout<<'*';
  }
  cout<<endl;
  for (int k=1; k<=s; k++)
  {
      cout<<' ';
  }
  s++;
  }
  return 0;
}
