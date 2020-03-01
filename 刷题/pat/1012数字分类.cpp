#include <iostream>
using namespace std;
int main(){
	int n;
	int a[1005];
	cin>>n;
	int sum1=0,sum2=0,sum3=0,sum5=0;
	double sum4=0;
	int flag2=1,flag4=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%5==0&&a[i]%2==0){
			sum1+=a[i];
		}
		if(a[i]%5==1){
			if(flag2%2==1)
				sum2+=a[i];
			else
				sum2-=a[i];
			flag2++;
		}
		if(a[i]%5==2){
			sum3++;
		}
		if(a[i]%5==3){
			sum4+=a[i];
			flag4++;
		}
		if(a[i]%5==4){
			if(a[i]>sum5)
				sum5=a[i];
		}
	}
	double avg;
	if(flag4!=0)
		avg=sum4/flag4;
	else
		avg=0;

	if(sum1==0)
		printf("N ");
	else
		printf("%d ",sum1);

	if(flag2==1)
		printf("N ");
	else
		printf("%d ",sum2);

	if(sum3==0)
		printf("N ");
	else
		printf("%d ",sum3);

	if(avg==0)
		printf("N ");
	else
		printf("%.1lf ",avg);

	if(sum5==0)
		printf("N");
	else
		printf("%d",sum5);
	return 0;
}