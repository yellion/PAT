#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct infor{
	string name;
	string bir;
	long long int day;
}info[100005];
int main(){
	int n;
	int count=0;
	long long int today=20140906;
	int max=0,min=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>info[i].name>>info[i].bir;
		string temp=info[i].bir;
		string sum;
		for(int j=0;j<10;j++){			
			if(temp[j]!='/'){
				sum+=temp[j];
			}
		}
		info[i].day=stoi(sum);
		if(today-info[i].day<=2000000&&today-info[i].day>=0){
			count++;
			if(count==1){
				max=i;
				min=i;
			}
			else{
			if(info[i].day<info[max].day)
				max=i;
			if(info[i].day>info[min].day)
				min=i;
			}
		}
	}
	if(count!=0){
	cout<<count<<" ";
	cout<<info[max].name<<" ";
	cout<<info[min].name;}
	else
		cout<<"0";

	return 0;
}