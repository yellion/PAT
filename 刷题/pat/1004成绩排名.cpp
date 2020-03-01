#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct  students
{
	string name;
	string nu;
	int grade;
	
}stu[10001];
bool cmp(students a,students b){
	if(a.grade>b.grade)
		return true;
	else
		return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].nu>>stu[i].grade;
	}
	sort(stu,stu+n,cmp);
	cout<<stu[0].name<<" "<<stu[0].nu<<"\n";
	cout<<stu[n-1].name<<" "<<stu[n-1].nu;

	return 0;
}