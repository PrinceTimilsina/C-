#include<iostream>
using namespace std;
int main()
{
int n,nn,i,s=0;      
    cout<<"Enter a number:";       
    cin>>n;
    nn=n;   
    for(i=1;i<=n/2;i++){
    	if(n%i==0){
    		s=s+i;
		}
	}
	if(n==s){
		cout<<"It is a PERFECT NUMBER";
	}
    else{
    	cout<<"Sorry!It is not a PERFECT NUMBER,TRY AGAIN";
	}
	return 0;
}
