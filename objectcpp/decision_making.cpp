#include<iostream>
#include<string>
using namespace std;

int main(){
string a;
int billamount;
cout<<"select your branch";

cout<<"Jagatpura","MalviyaNagar","VaishaliNagar";
cin>>a;
cout<<"enter your amount";
cin>>billamount;
if( a=="Jagatpura"|| a=="MalviyaNagar"||a=="VaishaliNagar")
{
  if(billamount>600)
  {
    cout<<"offer is available";
  }
  else{
    cout<<"not available";
  }
}
else{
  cout<<"discout not available";
}
return 0;
}