#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"enter number of a \t";
  cin>>a;
  cout<<"enter number of b \t";
  cin>>b;
  cout<<"enter number of c \t";
  cin>>c;

  if(b<a && c<a)
  {
    cout<<"a largest value " <<a;
  }
  else if(a<b && c<b)
  {
    cout<<"b largest value "<<b;

  }
  else
  {
    cout<< "c largest value"<<c;
  }

  return 0;

}