#include<stdio.h>
#include<math.h>

int main(){
	int n, p = 0;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		for(int i = 0; i <= p && p < n; i++){
			int index = i;
			int value = a[i];
		   	while(index > 0 && a[index - 1] > value){
		    	a[index] = a[index - 1];
		    	index--;
	     	}
			a[index] = value;	
	    }
	    printf("Buoc %d: ", p);
	    for(int i = 0; i <= p; i++){
	    	printf("%d ", a[i]);
		}
		p++;
		printf("\n");
	}
	return 0;
}
