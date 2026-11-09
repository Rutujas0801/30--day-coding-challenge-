#include<iostream>
#include<string>
using namespace  std;
int main()
{
int i;
  for (i=1;i<=100;i++)
    {
      if(i%3==0){
        return "Fizz";
      }
        else if (i%5==0)
        {
          retrun  "Buzz";
          
        }
      else 
        {
          cout<< i<<\n;
        }
    }
  return 0;
}
