#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int m[11]={1,0,11,9,8,7,6,5,4,3,2};
	int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int n;
	string a;
	int count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int sum=0;
		for(int j=0;j<a.length()-1;j++){
				sum+=(a[j]-'0')*quan[j];
		}
		sum%=11;
		if(sum==2){
			if(a[17]!='X'){
				count++;
				cout<<a<<endl;
			}
		}
		else{
			int temp=a[17]-'0';
			if(temp!=m[sum]){
				count++;
				cout<<a<<endl;
			}
		}
	}
	if(count==0){
		cout<<"All passed"<<endl;
	}
	return 0;
}