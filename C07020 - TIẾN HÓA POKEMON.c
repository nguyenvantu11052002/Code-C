#include<stdio.h>
#include<string.h>

struct Pokemon{
	char name[100];
	int a, b, c;
	int congthem;
	int solantienhoa;
};

void nhapvatinhsolantienhoa(struct Pokemon loai[], int n, int i){
	scanf("\n");
	gets(loai[i].name);
	scanf("%d%d", &loai[i].a, &loai[i].b);
	loai[i].solantienhoa = 0;
	for(int k = 0; ; k++){
		loai[i].c = loai[i].b / loai[i].a;
		loai[i].solantienhoa += loai[i].c;
		loai[i].congthem = 2 * loai[i].c;
		loai[i].b = (loai[i].b % loai[i].a + loai[i].congthem);
		if(loai[i].b / loai[i].a == 0) break;
	}
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	struct Pokemon loai[n];
	for(int i = 0; i < n; i++){
		nhapvatinhsolantienhoa(loai, n, i);
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += loai[i].solantienhoa;
	}
	printf("%d\n", sum);
	int solantienhoamax = 0;
	for(int i = 0; i < n; i++){
		if(loai[i].solantienhoa > solantienhoamax) solantienhoamax = loai[i].solantienhoa;
	}
	for(int i = 0; i < n; i++){
		if(loai[i].solantienhoa == solantienhoamax){
			printf("%s", loai[i].name);
			break;
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
