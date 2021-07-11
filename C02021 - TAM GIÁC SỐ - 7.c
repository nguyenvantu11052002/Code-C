#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int h = 1;
	for(int i = 1; i <= n; i++){
		int k = n - 1, t = 0;
		for(int j = 1; j <= i; j++){ // j <= i de sau moi vong i thi j in them 1 so.... hay
		    if(j == 1){
		    	printf("%d ", h);
		    	h++;
	     	}
	     	else{
	     		if(j == 2){
	     		    t = h + k - 1; // -1 o day co tac dung triet tieu bu tru do h++ o dong 12, +k la de in ra so dang sau
	     		    printf("%d ", t);
	     		    k--;
			    }
			    else{
			        t = t + k; // do bat buoc phai in ra so thu 2 roi moi den so thu 3 nen t sau dau = da duoc tinh roi
			     	printf("%d ", t);
			     	k--;
				}
			} 
    	}
    	printf("\n");
    }
}

int main(){
	inraketqua();
	return 0;
}
