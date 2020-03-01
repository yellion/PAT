#include <iostream>
using namespace std;
struct infor{
	long long int id;
	int com;
	int seat;
}info[1005];
int main(){
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>info[i].id>>info[i].com>>info[i].seat;
	}
	cin>>m;
	int comp;
	for(int i=0;i<m;i++){
		cin>>comp;
		for(int j=0;j<n;j++){
			if(comp==info[j].com){
				cout<<info[j].id<<" "<<info[j].seat<<endl;
			}
		}
	}
	return 0;
}