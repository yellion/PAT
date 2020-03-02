#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
	char a[105],b[105];
	char t[105]={0};
	cin>>a>>b;
	int lena=strlen(a);
	int lenb=strlen(b);
	int len=max(lena,lenb);
	reverse(a,a+lena);
	reverse(b,b+lenb);
	for(int i=0;i<len;i++){
		int numA=i<lena?a[i]-'0':0;
		int numB=i<lenb?b[i]-'0':0;
		if(i%2==0){
			int temp=numB+numA;
			temp%=13;
			if(temp==10)
				t[i]='J';
			else if(temp==11)
				t[i]='Q';
			else if(temp==12)
				t[i]='K';
			else
				t[i]=temp+'0';
		}
		else{
			int temp=numB-numA;
			if(temp<0)
				temp+=10;
			t[i]=temp+'0';
		}
	}
	reverse(t,t+len);
	for(int i=0;i<len;i++)
		cout<<t[i];
	return 0;
}