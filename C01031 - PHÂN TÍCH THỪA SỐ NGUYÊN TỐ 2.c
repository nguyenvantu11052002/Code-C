#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	for(int i = 2; i <= n; i++){
			while(n % i == 0){
				printf("%d", i);
				if(n/i != 1) printf("x");
				n = n/i;		
		    }
	}
	return 0;
}
