#include <iostream>
using namespace std;
int main(){
	char a[105];
	char b[105];
	bool bb[128]={false};
	cin>>a>>b;
	for(int i=0;i<strlen(a);i++){
		int j;
		char c1,c2;
		for(j=0;j<strlen(b);j++){
			c1=a[i];
			c2=b[j];
			if(c1>='a'&&c1<='z') c1-=32;
			if(c2>='a'&&c2<='z') c2-=32;
			if(c1==c2) break;                                                               
		}
		if(j==strlen(b)&&bb[c1]==false){
			cout<<c1;
			bb[c1]=true;
		}
	}
	return 0;
}