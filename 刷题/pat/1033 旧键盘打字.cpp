#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[100010],b[100010];
	cin.getline(a,100010);                                         
    cin.getline(b,100010); 
	int flag=0;
	int count=0;
	int lena=strlen(a);
	int lenb=strlen(b);
	char c1,c2;
	for(int i=0;i<lena;i++){
		if(a[i]=='+'){
			flag=1;
		}
	}
	for(int i=0;i<lenb;i++){
		c1=b[i];
		if(c1>='a'&&c1<='z') c1=c1-'a'+'A';//换成大写在比较
		int j;
		for(j=0;j<lena;j++){
			c2=a[j];		
			if(c1==c2){
				break;
			}//键坏了
		}
		if(j==lena){//没坏
			if(b[i]>='A'&&b[i]<='Z'){
				if(flag==0){
					cout<<b[i];
					count++;
				}
			}
			else{
				cout<<b[i];
				count++;
			}

		}
	}
	if(count==0)
		cout<<endl;

	return 0;
}