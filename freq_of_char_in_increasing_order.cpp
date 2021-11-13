//time O(n)
#include<iostream>
using namespace std;
int main(){
	string st;
	getline(cin,st);
	cout<<st<<endl;
	int count[26]={0};
	for(int i=0;i<st.length();i++)
		count[st[i]-'a']++;
	for(int i=0;i<26;i++){
		if(count[i]>0){
			cout<<char(i+'a')<<" "<<count[i]<<endl;
		}
	}
	return 0;
}
