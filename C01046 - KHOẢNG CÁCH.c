#include<stdio.h>
#include<math.h>

void inraketqua(){
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double e = sqrt((a-c)*(a-c) + (b-d)*(b-d));
    printf("%.4lf", e);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
		printf("\n");
	}
	return 0;
}
