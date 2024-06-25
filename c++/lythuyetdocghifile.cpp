#include<bits/stdc++.h>

using namespace std;

int main(){
//doc va ghi
	char data[100];
//	ofstream outfile;
//	outfile.open("afile.dat");
//	cout<<"wringting to the file"<<endl;
//	cout<<"enter your name ";
//	cin.getline(data,100);
//		
//	outfile<<data<<endl;
//	
//
//	cout<<"your age ";
//	cin>>data;
//	cin.ignore();
//	
//	outfile<<data<<endl;
//	
//	
//	outfile.close();
	
//doc tt va xuat ra man hinh
	ifstream infile;
	infile.open("afile.dat");
	cout<< "reading from title "<<endl;
	infile>>data;
	
	cout<<data<<endl;
	
	infile>>data; 
	
	cout<<data<<endl;
	
	infile.close();
	
	
	return 0;
	
	
	
	
	
}
