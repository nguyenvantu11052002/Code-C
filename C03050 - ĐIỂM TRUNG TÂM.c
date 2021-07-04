#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int c[100005] = {0};
	for(int i = 1; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		c[a]++;
		c[b]++;
	}
	for(int i = 1; i <= n; i++){
		if(c[i] != 1 && c[i] != n - 1){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}
