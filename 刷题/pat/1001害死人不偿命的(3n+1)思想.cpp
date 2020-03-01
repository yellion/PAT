#include<iostream>
using namespace std;
int main() {
    int n;
    int count=0;
    cin>>n;
    while(n) {
        if (n % 2 == 0) {
            if (n == 1) {
                    printf("%d", count);
                    break;
            }
            n = n / 2;
            count++;
                
        }
        else{
            if(n==1){
                printf("%d", count);
                break;
            }
            n=(3*n+1)/2;
            count++;
        }
    }

    return 0;
}

