#include <stdio.h>
#include <math.h>
int main(){
    int m;
    scanf("%d",&m);
    long long a=0;
    while(m--){
        int n;
        scanf("%d", &n);
        int dem;
        while(n%2==0){
        	a+=2;
        	n/=2;
        }
        for(int i=3;i<=sqrt(n); i+=2){
            while(n % i == 0){
                a+=i;
                n /= i;
            }
        }
        if(n>2) a+=n;
    }
    printf("%lld",a);
}
