#include<stdio.h>
#include<math.h>

int main(){
	long long m, n, t, k;
	scanf("%lld %lld", &m, &n);
	int d = sqrt(m);
	if(d*d == m) d = d;
	else d = d + 1;
	t = sqrt(n);
	printf("%d\n", t - d + 1);
	for(int i = d; i <= t; i++){
	    printf("%d\n", i*i);
	}
	return 0;
}
