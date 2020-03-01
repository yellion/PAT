#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char a[101];
	scanf("%s",a);
	int sum=0,len=strlen(a);
	for(int i=0;i<len;i++){
		sum+=a[i]-'0';
	}
    char b[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};	
	if(sum/100>0){
		printf("%s ",b[sum/100]);
	if(sum/10>0){
		printf("%s ",b[sum/10%10]);
	}
	printf("%s\n",b[sum%10]);
	return 0;
}