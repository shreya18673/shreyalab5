/*    *****
      ****
      ***
      **
      *

*/

#include<iostream>

using namespace std;

int main(){

//declare n

int n;
cout<<"enter no."<<endl;
cin>>n;

for(int i=0; i<n; i++){

//print stars
  for(int j=0; j<n-i; j++){
  cout<<"*";
  }
  cout<<endl;
}
return 0;
}
