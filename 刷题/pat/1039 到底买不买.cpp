#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[1005],b[1005];
	int aa[256]={0},bb[256]={0};
	bool flag=true;
	int count=0;
	cin>>a>>b;
	int lena=strlen(a);
	int lenb=strlen(b);
	for(int i=0;i<lena;i++){
		aa[a[i]]++;
	}
	for(int i=0;i<lenb;i++){
		bb[b[i]]++;
	}
	for(int i=0;i<256;i++){
		if(aa[i]-bb[i]<0){
			flag=false;
		}
	}
	if(flag==true){
		for(int i=0;i<256;i++)
			count+=aa[i]-bb[i];
	}
	else{
		for(int i=0;i<256;i++)
			if(aa[i]<bb[i])
				count+=bb[i]-aa[i];
	}
	if(flag==true)
		cout<<"Yes"<<" "<<count;
	else
		cout<<"No"<<" "<<count;
	return 0;
}