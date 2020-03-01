#include <iostream>
#include <math.h>
using namespace std;
int isprime(int a){
	int flag=1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
	int a,b;
	cin>>a>>b;
	int count=0;
	int ans=0;
	int pre=2;
	while(count<b){
		if(isprime(pre)){//第count个素数
			count++;
			if(count>=a){//输出的第ans个素数
				cout<<pre;
				ans++;
				if(ans%10==0)
					cout<<"\n";
				else if(count!=b){
					cout<<" ";
				}
			}
			
		}		
		pre++;
	}
	return 0;
}