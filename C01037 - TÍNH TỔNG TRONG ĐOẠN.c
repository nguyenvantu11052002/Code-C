#include<stdio.h>

int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long sum = 0;
	if(a < b){
		for(int i = a; i <= b; i++){
	    	sum += i;
     	}
    }
    else {
    	for(int i = a; i >= b; i--){
    	    sum += i;
	     }
	}
	printf("%lld", sum);
	return 0;
}
