#include <iostream>  
using namespace std;  
int main(){
	int a;
	char b;
	do{
		cout<<"Enter Any Number:"<<endl;
		cin>>a;
		if(a>-100 && a<100 && a!=0) {
		if(a%2==0){
			cout<<"Even"<<endl;
		}else{
			cout<<"Odd"<<endl;
		}
	}else if(a==0){
		cout<<"Neither Odd nor even"<<endl;
	}else{
		cout<<"Out of Range Value"<<endl;
	}
		cout<<"Continue ? (y/n) :"<<endl;
		cin>>b;
		if(b!= 'y' && b!= 'n'){
			cout<<"Invalid Choice"<<endl;
			return 0;
		}
	}while(b!='n');
	cout<<"\nExited!!!";
	return 0;
}





