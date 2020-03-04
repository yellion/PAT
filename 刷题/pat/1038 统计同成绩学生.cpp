#include <iostream>
using namespace std;
int main(){
	int n1,n2;
	int a[105]={0};
	cin>>n1;
	int temp;
	for(int i=0;i<n1;i++){
		cin>>temp;
		a[temp]++;
	}
	cin>>n2;
	for(int i=0;i<n2-1;i++){
		cin>>temp;
		cout<<a[temp]<<" ";
	}
	cin>>temp;
	cout<<a[temp];
	return 0;
}