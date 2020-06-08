#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 
	int a,n=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		a=s[i];
		if(65<=a&&a<=90){
			n+=1;
		}
	}
	if(n>s.length()/2){
		transform(s.begin(), s.end(), s.begin(), ::toupper); 
	}
	else{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
 
	cout<<s;
 
	return 0;
 
}
