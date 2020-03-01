#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int bai=n/100;
	int shi=n%100/10;
	int ge=n%10;
	for(int i=0;i<bai;i++){
		printf("B");
	}
	for(int i=0;i<shi;i++){
		printf("S");
	}
	for(int i=1;i<=ge;i++){
		printf("%d",i);
	}
	return 0;
}