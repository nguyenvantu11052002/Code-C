#include<stdio.h>

int kiemtra(long long n){
	int countchan = 0;
	int countle = 0;
	if(n % 2 != 0) return 0;
	else{
		while(n > 0){
			int d = n % 10;
			n = n/10;
			if(d % 2 == 0) countchan++;
			else countle++;
		}
		if(countle >= countchan) return 0;
	}
	return 1;
}

void inrasouuthechan(){
	long long n;
	scanf("%lld", &n);
	if(kiemtra(n)) printf("YES");
	else printf("NO");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inrasouuthechan();
		printf("\n");
	}
	return 0;
}
