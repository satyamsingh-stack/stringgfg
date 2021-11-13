#include<iostream>
using namespace std;
int main(){
	string st1,st2;
	getline(cin,st1);
	fflush(stdin);
	getline(cin,st2);
	if(st1==st2)
		cout<<"Same"<<endl;
	else if(st1>st2)
		cout<<"St1 is Larger"<<endl;
	else
		cout<<"St2 is Larger"<<endl;
	return 0;
}
