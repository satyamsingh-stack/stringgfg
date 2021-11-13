#include<bits/stdc++.h>
using namespace std;
bool ispal(string st){
	int beg=0,end=st.length()-1;
	while(beg<end){
		if(st[beg]!=st[end])
			return false;
		beg++;
		end--;
	}
	return true;
}
int main(){
	string st;
	cin>>st;
	int ans=ispal(st);
	if(ans)
		cout<<"Pallindrome"<<endl;
	else
		cout<<"Not Pallindrome"<<endl;
//	string st1,st2;
//	cin>>st1;
//	st2=st1;
//	reverse(st2.begin(),st2.end());
//	if(st1==st2)
//		cout<<"Pallindrome"<<endl;
//	else
//		cout<<"Not Pallindrome"<<endl;
	return 0;
}
