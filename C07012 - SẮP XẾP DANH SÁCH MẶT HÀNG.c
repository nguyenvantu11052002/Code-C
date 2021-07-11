#include<stdio.h>
#include<string.h>

struct mathang{
	char tenmathang[100];
	char nhomhang[100];
	double giamua, giaban, laisuat;
	int id;
};

void nhapvatinhlaisuat(struct mathang mh[], int n, int i){
	scanf("\n");
	gets(mh[i].tenmathang);
	scanf("\n");
	gets(mh[i].nhomhang);
	scanf("%lf%lf", &mh[i].giamua, &mh[i].giaban);
	mh[i].laisuat = mh[i].giaban - mh[i].giamua;
	mh[i].id = i + 1;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	struct mathang mh[n];
	for(int i = 0; i < n; i++){
		nhapvatinhlaisuat(mh, n, i);
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
				if(mh[i].laisuat < mh[j].laisuat){
					struct mathang c = mh[i];
					mh[i] = mh[j];
					mh[j] = c;
				} 
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d %s %s %.2lf\n", mh[i].id, mh[i].tenmathang, mh[i].nhomhang, mh[i].laisuat);
	}
}

int main(){
	inraketqua();
	return 0;
}
