#include<iostream>
using namespace std;
int main(){
	string st1,st2;
	cin>>st1>>st2;
	int valid=1;
	for(int i=0;i<st2.length();i++){
		for(int j=0;j<st1.length();j++){
			if(st2[i]==st1[j])
				valid=1;
			else
				valid=0;
		}
	}
	if(valid)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
