#include <iostream>
using namespace std;
int change(char c){
	if(c=='B')return 0;
	if(c=='C')return 1;
	if(c=='J')return 2;
}
int main(){
	int count_A[3]={0},count_B[3]={0};
	int hand_A[3]={0},hand_B[3]={0};
	char cc[3]={'B','C','J'};
	int n;
	char a,b;
	int aa,bb;
	cin>>n;
	while(n--){
		cin>>a>>b;
		aa=change(a);
		bb=change(b);
		if((aa+1)%3==bb){
			count_A[0]++;
			count_B[2]++;
			hand_A[aa]++;
		}
		else if((bb+1)%3==aa){
			count_B[0]++;
			count_A[2]++;
			hand_B[bb]++;
		}
		else if(aa==bb){
			count_A[1]++;
			count_B[1]++;
		}
	}
	cout<<count_A[0]<<" "<<count_A[1]<<" "<<count_A[2]<<endl;
	cout<<count_B[0]<<" "<<count_B[1]<<" "<<count_B[2]<<endl;
	int c1=0,c2=0;
	for(int i=0;i<3;i++){
		if(hand_A[i]>hand_A[c1]) c1=i;
		if(hand_B[i]>hand_B[c2]) c2=i;
	}
	cout<<cc[c1]<<" "<<cc[c2]<<endl;
	return 0;
}