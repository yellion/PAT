#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[100005];
	int ans[26]={0};
	int max=0;
	char maxchar;
	cin.getline(a,1005);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a'&&a[i]<='z'){
			ans[a[i]-'a']++;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			ans[a[i]-'A']++;
		}
	}
	for(int i=0;i<26;i++){
		if(ans[i]>ans[max]){
			max=i;
			maxchar='a'+max;
		}
	}
	cout<<maxchar<<" "<<ans[max];
	return 0;
}