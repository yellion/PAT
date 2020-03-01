#include <iostream>
using namespace std;
int main(){
	int a,b,n;
	cin>>a>>b>>n;
	int sum=a+b;
	int ans[31],num=0;
	do{
		ans[num++]=sum%n;
		sum/=n;
	}while(sum!=0);
	for(int i=num-1;i>=0;i--){
		cout<<ans[i];
	}
	return 0;

}