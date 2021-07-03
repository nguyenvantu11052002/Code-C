#include<stdio.h>

int main(){
	int a, year, week, day;
	scanf("%d", &a);
	year = a / 365;
	week = (a % 365) / 7;
	day = (a % 365) % 7;
	printf("%d %d %d", year, week, day);
	return 0;
}
