#include<iostream>
using namespace std;
int main(){
	string st;
	getline(cin,st);
	cout<<st.length()<<endl;
	cout<<st+" Singh"<<endl;
	cout<<st.substr(3,5)<<endl;
	cout<<st.find("yam")<<endl;
	return 0;
}
