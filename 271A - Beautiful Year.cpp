// good code

#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int y;
	cin>>y;
	
	while(true){
		y++;
		int a = y/1000;
		int b = y/100 % 10;
		int c = y/10 % 10;
		int d = y%10;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
			cout<<y;
			break;
		}
	}
	return 0;

}


// bad code
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 
	int a;
	cin>>a;
	string s;
	for(int i=a+1;i<=10000;++i){
		s=to_string(i);
		if(s[0]!=s[1]&&s[2]!=s[3]){
			if(s[1]!=s[3]&&s[3]!=s[0]){
				if(s[0]!=s[2]&&s[1]!=s[2]){
					cout<<s;
					break;
				}
			}
		}
	}
	return 0;
 
}
