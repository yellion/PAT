#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
struct information{
	long long int info;
	int de;
	int cai;
	int sum;
	int rank;
}infor[100005];
bool cmp(information a,information b){
	if(a.rank!=b.rank) return a.rank<b.rank;
	else if(a.sum!=b.sum) return a.sum>b.sum;
	else if(a.de!=b.de) return a.de>b.de;
	else return a.info<b.info;
}
int main(){
	int n,l,h;
	int count;
	cin>>n>>l>>h;
	count=n;
	for(int i=0;i<n;i++){
		cin>>infor[i].info>>infor[i].de>>infor[i].cai;
		infor[i].sum=infor[i].de+infor[i].cai;
		if(infor[i].de<l||infor[i].cai<l){
			count--;
			infor[i].rank=5;
		}
		else{
			if(infor[i].de>=h&&infor[i].cai>=h){
				infor[i].rank=1;
			}
			else if(infor[i].de>=h&&infor[i].cai<h){
				infor[i].rank=2;
			}
			else if(infor[i].de>=infor[i].cai){
				infor[i].rank=3;
			}
			else{
				infor[i].rank=4;
			}
		}
	}
	sort(infor,infor+n,cmp);
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<infor[i].info<<" "<<infor[i].de<<" "<<infor[i].cai<<endl;
	}
	return 0;
}