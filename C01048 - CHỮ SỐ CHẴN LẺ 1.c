#include<stdio.h>

int main(){
	int n, countle = 0, countchan = 0;
	scanf("%d", &n);
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d % 2 == 0) countchan++;
		else countle++;
	}
	printf("%d %d", countle, countchan);
	return 0;
}
