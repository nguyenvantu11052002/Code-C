#include<stdio.h>
#include<string.h>

struct Sinhvien{
	int id;
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
	sv[i].id = i + 1;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	struct Sinhvien sv[n];
	for(int i = 0; i < n; i++){
		nhapvatinhsum(sv, n, i);
	}
	//sap xep diem giam dan
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(sv[i].sum < sv[j].sum){
				struct Sinhvien c = sv[i];
				sv[i] = sv[j];
				sv[j] = c;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d %s %s %.1lf\n", sv[i].id, sv[i].name, sv[i].date, sv[i].sum);
	}
}

int main(){
	inraketqua();
	return 0;
}
