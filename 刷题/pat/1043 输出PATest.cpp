#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char c[10005];
	int P=0,A=0,T=0,e=0,s=0,t=0;
	cin.getline(c,10005);
	int len=strlen(c);
	for(int i=0;i<len;i++){
		if(c[i]=='P')P++;
		else if(c[i]=='A')A++;
		else if(c[i]=='T')T++;
		else if(c[i]=='e')e++;
		else if(c[i]=='s')s++;
		else if(c[i]=='t')t++;
	}
	int sum=P+A+T+e+s+t;
	while(sum>0){
		if(P>0){
			printf("P");
			P--;
			sum--;
		}
		if(A>0){
			printf("A");
			A--;
			sum--;
		}
		if(T>0){
			printf("T");
			T--;
			sum--;
		}
		if(e>0){
			printf("e");
			e--;
			sum--;
		}
		if(s>0){
			printf("s");
			s--;
			sum--;
		}
		if(t>0){
			printf("t");
			t--;
			sum--;
		}
	}
	return 0;
}