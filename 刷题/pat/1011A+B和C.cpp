#include <iostream>
using namespace std;
int main(){
	long long int a[3];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[0]>>a[1]>>a[2];
		if(a[0]+a[1]>a[2])
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
	}
	return 0;
}