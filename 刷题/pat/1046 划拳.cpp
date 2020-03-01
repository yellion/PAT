#include <iostream>
using namespace std;
int main(){
	int failA=0,failB=0;
	int n;
	int AA,AB,BA,BB;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>AA>>AB>>BA>>BB;
		if(AB==AA+BA&&AB!=BB)
			failB++;
		else if(BB==AA+BA&&AB!=BB)
			failA++;
	}
	cout<<failA<<" "<<failB<<endl;
	return 0;
}