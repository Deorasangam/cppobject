#include<iostream>
using namespace std;
int main()
{
  string name;
  cout<<"enter your name\n";
  cin>>name;
  int b;
  b=name.length();
  if(b%2==0)
  {
    cout<<"good programmer \n";

  }
  else{
    cout<<"not good programmer";
  }
return 0;
}