#include <iostream>
using namespace std;
//29 knut==1 sickle 17sickle==1galleon
int main(){
	long long int g,gg;
	int k,kk,s,ss;
	scanf("%lld.%d.%d",&g,&k,&s);
	scanf("%lld.%d.%d",&gg,&kk,&ss);
	long long int sum1=s+k*29+g*29*17;
	long long int sum2=ss+kk*29+gg*29*17;
	long long int coin;
	if(sum2>=sum1){
		coin=sum2-sum1;
	}
	else
		coin=sum1-sum2;
	if(sum2>=sum1)
		cout<<coin/(29*17)<<"."<<coin%(29*17)/29<<"."<<coin%29<<endl;
	else
		cout<<"-"<<coin/(29*17)<<"."<<coin%(29*17)/29<<"."<<coin%29<<endl;
	return 0;
}