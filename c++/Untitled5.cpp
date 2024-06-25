#include<bits/stdc++.h>
using namespace std;

class employee{
	private:
		string msv="B20DCCN001";
		string ten,lop,ns;
		float gpa;
	public:
		employee(){//khoi tao ko dau vao
			ten="";
			lop="";
			ns="";
			gpa=0;

		}
		double tongluong(){
			return hsl*lcb+pc;
		}
		void in(){
			cout<<msnv<<" "<<ten<<" luong ";
			cout<<tongluong()<<endl;
		}

		~employee(){//khoi tao ko dau vao
			msnv="";
			ten="";
			delete s;
			cout<<"ten:"<<ten<<" hsl:"<<hsl<<endl;
		}
};
bool cmp(employee a, employee b) {
    return a.tongluong() < b.tongluong();
}
int main(){
	int n;
//	employee emp1;
	employee emp2("1","chien",1,1,1);
	


	
	return 0;
	
}






