#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main(){
	vector<string> v;
	string str;
	getline(cin,str);
	string temp="";
	for(int i=0;i<str.length();i++){
		if(str[i]=='\n')
			break;
		if(str[i]!=' ')
			temp+=str[i];
		else{
			v.push_back(temp);
			temp="";
		}
	}
	v.push_back(temp);
	for(int i=v.size()-1;i>=0;i--){
		if(i!=0)
			cout<<v[i]<<" ";
		else
			cout<<v[i];
	}

	return 0;
}