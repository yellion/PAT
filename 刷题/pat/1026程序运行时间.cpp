#include <iostream>
using namespace std;
int main(){
	int c1,c2;
	cin>>c1>>c2;
	int time=c2-c1;
	if(time%100<50){
		time=time/100;
	}
	else
		time=time/100+1;
	printf("%02d:%02d:%02d",time/3600,time%3600/60,time%60);
	return 0;
}