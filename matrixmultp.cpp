#include <iostream>
using namespace std;
int main(){
	int row1,col1,row2,col2;
	cout<<"Enter No. of Rows in 1st Matrix :"<<endl;
	cin>>row1;
	cout<<"Enter No. of Columns  in 1st Matrix :"<<endl;
	cin>>col1;
	cout<<"Enter No. of Rows  in 2nd Matrix :"<<endl;
	cin>>row2;
	cout<<"Enter No. of Columns  in 2nd Matrix :"<<endl;
	cin>>col2;
	
	if(col1!=row2)
	    cout<<"Multiplication not possible.";
	else if(row1==0||col1==0||row2==0||col2==0)
	    cout<<"Multiplication not possible for 0 input";
	else if(row1<0||col1<0||row2<0||col2<0)
	     cout<<"Multiplication not possible for negative row or column";
	else
	{
	
	int mat1[row1][col1],mat2[row2][col2],result[row1][col2];
	cout<<"Enter Matrix 1 :"<<endl;
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter Matrix 2 :"<<endl;
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			cin>>mat2[i][j];
		}
	}
	for(int i=0;i<row1;i++){
		for(int j=0;j<col2;j++){
			result[i][j]=0;
			for(int k=0;k<col2;k++){
				result[i][j]+=mat1[i][k]*mat2[k][j];    
				}
			}
		}
	cout<<"Multiplication:"<<endl;	
	for(int i=0;i<row1;i++){
		for(int j=0;j<col2;j++){    
			cout<<result[i][j]<<" ";    
			}    
		cout<<"\n";   
	}
	}    
	return 0;
}










