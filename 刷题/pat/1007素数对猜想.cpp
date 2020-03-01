#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int count=0;
	int n;
	cin>>n;
	for(int i=3;i<=n;i+=2){
		if(prime(i)&&prime(i+2)&&i+2<=n){
				count++;				
		}
	}
	printf("%d",count);
	return 0;
}