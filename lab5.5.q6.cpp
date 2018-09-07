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

int n;
cout<<"enter no.";
cin>>n;

for(int i=0; i<n; i++){

//print n no. of stars for 1st and last line
	if(i==0 || i==n-1){
		for(int j=0; j<n; j++){
		cout<<"*";
		}
	}

//print one star, some spaces and one star for rest of the lines
	else{
		cout<<"*";
        for(int k=0; k<(n-2); k++){
		cout<<" ";
		}
		cout<<"*";
	}
cout<<endl;
}
return 0;
}
