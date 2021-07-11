#include<stdio.h>
#include<math.h>

int kiemtratamgiac(double A, double B, double C){
	if(A + B <= C || A + C <= B || B + C <= A) return 0;
	return 1;
}

double dodaicanh(double a, double b, double c, double d){
	double canhbinhphuong = (c-a)*(c-a) + (d-b)*(d-b);
	return sqrt(canhbinhphuong);
}

void inraketqua(){
	double a, b, c, d, e, f;
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
	double A = dodaicanh(a, b, c, d);
	double B = dodaicanh(a, b, e, f);
	double C = dodaicanh(c, d, e, f);
	double p = (A + B + C)/2;
	double dientichbinhphuong = p * (p - A) * (p - B) * (p - C);
	double dientich = sqrt(dientichbinhphuong);
	if(kiemtratamgiac(A, B, C) == 0) printf("INVALID\n");
	else printf("%.2lf\n", dientich);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
