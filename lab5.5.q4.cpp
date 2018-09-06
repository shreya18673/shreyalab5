 /*   *****
     *****
    *****
   *****
  *****
*/


#include<iostream>
using namespace std;
int main(){
//declaring n
int n;
cout<<"enter no."<<endl;
cin>>n;

for(int i=0; i<n; i++){

//print spaces
   for(int j=0; j<(n-i); j++){
   cout<<" ";
   }
//print stars
      for(int k=0; k<n; k++){
       cout<<"*";
        }
     
   
cout<<endl;
}
return 0;
}
