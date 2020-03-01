#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int a[105];
	bool b[105]={false};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		int q=a[i];
		while(q) {
	        if (q % 2 == 0) {
	            if (q == 1) {
	                  break;
	            }
	            q = q / 2;
	            for(int j=0;j<n;j++){
	            	if(q==a[j])
	            		b[a[j]]=true;
	            }
	                
	        }
	        else{
	            if(q==1){
	                break;
	            }
	            q=(3*q+1)/2;
	            for(int j=0;j<n;j++){
	            	if(q==a[j])
	            		b[a[j]]=true;
	            }
	        }
    }
	}
	int flag=0;
	for(int i=n-1;i>=0;i--){
		if(b[a[i]]==false&&flag==0){
			printf("%d",a[i]);
			flag++;
		}
		else if(b[a[i]]==false&&flag!=0){
			printf(" %d",a[i]);
		}
	}

	return 0;
}