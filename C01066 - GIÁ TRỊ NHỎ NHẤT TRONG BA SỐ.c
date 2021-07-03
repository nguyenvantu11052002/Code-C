#include<stdio.h>

int main(){
	int a, b ,c;
	scanf("%d%d%d", &a, &b, &c);
	int min = (a < b) ? a : b;
	int min1 = (min < c) ? min : c; 
	printf("%d", min1);
	return 0;
}
