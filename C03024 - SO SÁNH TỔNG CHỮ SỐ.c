#include<stdio.h>
#include<math.h>

int tongcacchuso(int n){
	int sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum += d;
	}
	return sum;
}

void inratheothututongbedenlon(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(tongcacchuso(a) < tongcacchuso(b)) printf("%d %d", a, b);
	else if(tongcacchuso(a) == tongcacchuso(b)) printf("%d %d", a, b);
	    else printf("%d %d", b, a);
}

int main(){
	inratheothututongbedenlon();
	return 0;
}
