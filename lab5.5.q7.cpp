/*
*****
 *   *
  *   *
   *   *
    *****
*/




#include<iostream>
using namespace std;

int main(){

for(int i=0; i<5; i++){
	for( int j=0; j<i; j++){
	cout<<" ";
	}
		if(i==0 || i==4){
			for(int k=0; k<5; k++){
			cout<<"*";
			}
		}
		else{
			cout<<"*";
			for(int l=0; l<(5-2); l++){
			cout<<" ";
			}	
			cout<<"*";
		}
cout<<endl;
}
return 0;
}
			
