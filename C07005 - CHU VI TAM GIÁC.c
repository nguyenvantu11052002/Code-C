#include<stdio.h>
#include<math.h>

int kiemtratamgiac(double AB, double BC, double AC){
	if(AB + BC <= AC || AB + AC <= BC || BC + AC <= AB) return 0;
	return 1;
}

double dodaicanh(double a, double b, double c, double d){
	double canhbinhphuong = (c-a)*(c-a) + (d-b)*(d-b);
	return sqrt(canhbinhphuong);
}

void inraketqua(){
	double a, b, c, d, e, f;
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
	double AB = dodaicanh(a, b, c, d);
	double BC = dodaicanh(a, b, e, f);
	double AC = dodaicanh(c, d, e, f);
	double chuvi = AB + BC + AC;
	if(kiemtratamgiac(AB, BC, AC) == 0) printf("INVALID\n");
	else printf("%.3lf\n", chuvi);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
