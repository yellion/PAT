#include <iostream>
using namespace std;
int main(){
	int n,m,temp;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>temp;
		if(m<=n){
			if(n-m>i)
				a[i+m]=temp;
			else
				a[i+m-n]=temp;
		}//6 1 2 3 4 5
		else{
			m=m-n;
			if(n-m>i)
				a[i+m]=temp;
			else
				a[i+m-n]=temp;
		}
	}
	for(int i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}