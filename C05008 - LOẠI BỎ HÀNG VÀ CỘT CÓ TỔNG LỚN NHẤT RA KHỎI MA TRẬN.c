#include<stdio.h>
#include<math.h>

int main(){
	int k, u = 1;
	scanf("%d", &k);
	while(k--){
	int m, n;
	scanf("%d %d", &m, &n);
	int a[20][20];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Test %d:\n", u);
	int sumhang[20] = {0};
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			sumhang[i] += a[i][j];
		}
	}
	int summaxhang = 0;
	for(int i = 0; i < m; i++){
		if(sumhang[i] > summaxhang) summaxhang = sumhang[i];
	}
	for(int i = 0; i < m; i++){
		if(sumhang[i] == summaxhang){
			for(int j = 0; j < n; j++) a[i][j] = -1; // -1 khong anh huong vi cac cot deu + them -1 nen k anh huong , kieu cong cac ve voi -1 !!!
		}
	}
	int sumcot[20] = {0};
	for(int j = 0; j < n; j++){
		for(int i = 0; i < m; i++){
			sumcot[j] += a[i][j];
		}
	}
	int summaxcot = 0;
	for(int i = 0; i < n; i++){
		if(sumcot[i] > summaxcot) summaxcot = sumcot[i];
	}
	for(int j = 0; j < n; j++){
		if(sumcot[j] == summaxcot){
			for(int i = 0; i < n; i++) a[i][j] = -1;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] >= 0) printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	u++;
	printf("\n");
    }
    return 0;
}
