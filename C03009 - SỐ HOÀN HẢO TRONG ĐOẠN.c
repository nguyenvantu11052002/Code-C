#include<stdio.h>
#include<math.h>

int tongcacuoccuashh(int n){
	int sum = 0;
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) sum = sum + i + n/i;
		if(i*i == n) sum = sum - i;
	}
	return sum + 1;
}

void inracacshh(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(tongcacuoccuashh(i) == i) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(tongcacuoccuashh(i) == i) printf("%d ", i);
		}
	}
}

int main(){
	inracacshh();
	return 0;
}
