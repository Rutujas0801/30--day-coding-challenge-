//Return the Next Number from the Integer Passed
// output : Enter a number: 56
//next no is: 57
#include<iostream>
using namespace std;
int nextno(int n)
{ 
  return n+1;
}
int main(){
  int no;
  cout<<"Enter a number: ";
  cin>>no;
  cout<<"next no is: "<< nextNumber(no);
  return 0;
}
