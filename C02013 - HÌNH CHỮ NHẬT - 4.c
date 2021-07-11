#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 1, z = 0, m = a, n = b;
	if(a <= b){
		for(int i = 1; i <= a; i++){
			for(int i = n; i >= 1; i--) printf("%d", i);
			for(int i = 2; i <= x ; i++) printf("%d", i);
			n--;
			x++;
			printf("\n");
		}
	}
	else{
		for(int i = 1; i <= a; i++){
			if(m >= b){
				for(int j = 1; j <= b; j++) printf("%d", m - j + 1);
				m--;
				printf("\n");
			}
			else{
				for(int i = m; i >= 1; i--) printf("%d", i);
				for(int i = 2; i <= 2 + z; i++) printf("%d", i);
				z++;
				m--;
				printf("\n");
			}
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
