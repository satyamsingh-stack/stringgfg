//Time O(n)
#include<iostream>
using namespace std;
const int CHAR=256;
int lm_repeting(string s1){
	bool visited[CHAR];
	fill(visited,visited+CHAR,false);
	int res=-1;
	for(int i=s1.length();i>=0;i--){
		if(visited[s1[i]])
			res=i;
		else
			visited[s1[i]]=true;
	}
	return res;
}
int main(){
	string s1;
	cin>>s1;
	cout<<lm_repeting(s1);
	return 0;
}
