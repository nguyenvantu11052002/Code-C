#include<stdio.h>
#include<math.h>

void uocchiahetcho(){
	long long n;
	scanf("%lld", &n);
	int count1 = 0, count2 = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			 if(i % 2 == 0) count1++;
			 if(n/i % 2 == 0) count2++;
			 if(i % 2 == 0 && i*i == n) count1--;
     	}
    }
    printf("%d", count1 + count2);
    printf("\n");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		uocchiahetcho();
	}
	return 0;
}
