#include<stdio.h>
#include<string.h>

typedef struct Sinhvien{
	char name[100];
	double a, b, c;
	int id;
} STD;

void nhapthongtinsv(STD sv[], int *stt){
	sv[*stt].id = *stt + 1;
	scanf("\n");
	gets(sv[*stt].name);
	scanf("%lf %lf %lf", &sv[*stt].a, &sv[*stt].b, &sv[*stt].c);
	*stt += 1;
}

void thaythesinhvien(STD sv[], int m){
	scanf("\n");
	gets(sv[m-1].name);
	scanf("%lf%lf%lf", &sv[m-1].a, &sv[m-1].b, &sv[m-1].c);
}

void inrasvcodiem3montangdan(STD sv[], int stt){
	for(int i = 0; i < stt; i++){
		if(sv[i].a < sv[i].b && sv[i].b < sv[i].c){
			printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
		}
	}
}

int main(){
	int n;
	STD sv[100];
	int stt = 0;
	while(1){
		scanf("%d", &n);
		if(n == 1){
			int k;
			scanf("%d", &k);
			for(int i = 0; i < k; i++){
				nhapthongtinsv(sv, &stt);
			}
			printf("%d\n", k);
		}
		if(n == 2){
			int m;
			scanf("%d", &m);
			thaythesinhvien(sv, m);
			printf("%d\n", m);
		}
		if(n == 3) break;
	}
	inrasvcodiem3montangdan(sv, stt);
	return 0;
}
