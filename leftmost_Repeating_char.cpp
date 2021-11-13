#include<iostream>
using namespace std;
int solve(string s1){
	for(int i=0;i<s1.length();i++){
		for(int j=i+1;j<s1.length();j++){
			if(s1[i]==s1[j])
				return i;
		}
	}
	return -1;
}
int main(){
	string s1;
	cin>>s1;
	cout<<solve(s1)<<endl;
	return 0;
}
