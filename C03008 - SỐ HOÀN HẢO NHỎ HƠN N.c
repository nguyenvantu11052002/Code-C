#include<stdio.h>
#include<math.h>

int socantim(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) sum += i + n/i;
		if(i*i == n) sum = sum - i;
		
	}
    return sum+1 ;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		if(socantim(i) == i) printf("%d ", i);
	}
	return 0;
}
