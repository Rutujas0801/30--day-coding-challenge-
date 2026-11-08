//challenge 1 
// string is palindrom or not 
#include<iostram>
#include<string>
using namespace std;
int main(){
  string str;
  int flag = 0;
  cout <<" Enter a string ";
  cin >> str;
   int len  = str.length();
  for(i=0;i<len/2;i++){
    if (str[len] =! str[len]-1 )
    {
      flag = 1;
      break;
    }
  }
if (flag==0){
   cout << "Palindrom";
}
else
{
  cout<< "Not Palindrom";
}
return 0;
}
