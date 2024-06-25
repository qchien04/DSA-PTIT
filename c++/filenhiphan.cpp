#include<bits/stdc++.h>

using namespace std;
typedef struct{
	int msnv;
	string ten;
	double hsl;
	int lcb;
	int pc;
}nv;

int main(){
	nv a[10];
	int n;
	cin>>n; 
	fstream outfile;
	outfile.open("D:\\output.txt");
	for(int i=0;i<n;i++){
		cin>>a[i].msnv;
	    cin.ignore();
	    getline(cin,a[i].ten);
	    cin>>a[i].hsl>>a[i].lcb>>a[i].pc;
	}
	outfile.write(reinterpret_cast<char*>(&a),sizeof(a));
	outfile.close();
	fstream infile("D:\\output.txt",ios::in|ios::binary);
	nv y[10];
	infile.read(reinterpret_cast<char*>(&y),sizeof(y));
	for(int i=0;i<n;i++){
 	    cout<<y[i].hsl*y[i].lcb+y[i].pc<<endl;
	}		
	infile.close();
	return 0;
}
