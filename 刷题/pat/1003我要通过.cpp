#include <iostream>
#include <string.h>
using namespace std;
bool judge(string s){
	bool existp=false,existt=false,exista=false;
	int coua=0,couap=0,couat=0;
	int posp,post;
	for(int i=0;i<s.length();i++){
			if(s[i]=='P')
				existp=true;
			else if(s[i]=='A')
				exista=true;
			else if(s[i]=='T')
				existt=true;
			else
				return false;
	}
	if(existt&&exista&&existp){
		for(int i=0;i<s.length();i++){
			if(s[i]=='P'){
				posp=i;
				break;
			}
		}
		for(int i=s.length()-1;i>0;i--){
			if(s[i]=='T'){
				post=i;
				break;
			}
		}
		for(int i=posp+1;i<post;i++){
			if(s[i]!='A')
				return false;
		}
		couap=posp;
		couat=s.length()-1-post;
		coua=post-posp-1;
		if(couap*coua==couat)
			return true;
		else
			return false;

	}
	return false;

}
int main(){
	int n;	
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(judge(s))
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	return 0;
}