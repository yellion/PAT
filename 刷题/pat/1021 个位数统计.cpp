#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string a;
	int ans[10]={0};
	cin>>a;
	for(int i=0;i<a.length();i++){
		int temp=a[i]-'0';
		ans[temp]++;
	}
	for(int i=0;i<10;i++){
		if(ans[i]!=0)
			cout<<i<<":"<<ans[i]<<endl;
	}
	return 0;
}