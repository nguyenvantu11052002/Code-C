#include<stdio.h>
#include<string.h>

struct Sinhvien{
	char name[55];
	char date[55];
	double a, b, c, sum;
};

void nhapvatinhsum(struct Sinhvien sv[], int n, int i){
	scanf("\n");
	gets(sv[i].name);
	scanf("\n");
	gets(sv[i].date);
	scanf("%lf%lf%lf", &sv[i].a, &sv[i].b, &sv[i].c);
	sv[i].sum = sv[i].a + sv[i].b + sv[i].c;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
    struct Sinhvien svv[n];
	for(int i = 0; i < n; i++){
		nhapvatinhsum(svv, n, i);
	}
	double maxpoint = 0;
	for(int i = 0; i < n; i++){
		if(svv[i].sum > maxpoint) maxpoint = svv[i].sum;
	}
	for(int i = 0; i < n; i++){
		if(svv[i].sum == maxpoint) printf("%d %s %s %.1lf\n", i + 1, svv[i].name, svv[i].date, maxpoint);
	}
}

int main(){
	inraketqua();
	return 0;
}
