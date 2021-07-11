#include<stdio.h>
#include<string.h>

typedef struct Sinhvien{
	char name[100];
	double a, b, c, sum;
	int id;
}STD;

void nhapthongtinsvvatinhtongdiem(STD sv[], int *stt){
	sv[*stt].id = *stt + 1;
	scanf("\n");
	gets(sv[*stt].name);
	scanf("%lf%lf%lf", &sv[*stt].a, &sv[*stt].b, &sv[*stt].c);
	sv[*stt].sum = sv[*stt].a + sv[*stt].b + sv[*stt].c;
	*stt += 1;
}

void thaythesinhvien(STD sv[], int m){
	scanf("\n");
	gets(sv[m - 1].name);
	scanf("%lf%lf%lf", &sv[m - 1].a, &sv[m - 1].b, &sv[m - 1].c);
	sv[m - 1].sum = sv[m - 1].a + sv[m - 1].b + sv[m - 1].c;
}

void doicho(STD *a, STD *b){
	STD c = *a;
	*a = *b;
	*b = c;
}

void sapxeptheodiemtangdan(STD sv[], int stt){
	for(int i = 0; i < stt; i++){
		for(int j = i + 1; j < stt; j++){
			if(sv[i].sum > sv[j].sum) doicho(&sv[i], &sv[j]);
		}
	}
}

void inratheodiemtangdan(STD sv[], int stt){
	for(int i = 0; i < stt; i++){
		printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
	}
}

int main(){
	int n;
	int stt = 0;
	STD sv[100];
	while(1){
		scanf("%d", &n); // nhieu lua chon nen dong nhap n phai o trong vong while
		if(n == 1){
			int k;
			scanf("%d", &k);
			for(int i = 0; i < k; i++){
				nhapthongtinsvvatinhtongdiem(sv, &stt); // o day la chay theo stt chu khong chay theo i vi neu nhap 1 lan 2 thi stt bao toan con i thi ve 0 ?
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
	sapxeptheodiemtangdan(sv, stt);
	inratheodiemtangdan(sv, stt);
	return 0;
}
