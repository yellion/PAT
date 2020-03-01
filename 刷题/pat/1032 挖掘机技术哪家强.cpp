#include <iostream>
using namespace std;
struct infor
{
	int id;
	int score;
	
}info[100005];
int main(){
	int n;
	int sum[100005]={0};
	int max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>info[i].id>>info[i].score;
		sum[info[i].id]+=info[i].score;
		if(sum[info[i].id]>sum[max])
			max=info[i].id;
	}
	cout<<max<<" "<<sum[max]<<endl;
	return 0;
}