#include<stdio.h>
#include<math.h>

int main(){
	int k;
	scanf("%d", &k);
	for(int p = 1; p <= k; p++){
		int n, b[100] = {0}; // mang b nay de in ra doan tang do, bang cach in giat lui....
    	scanf("%d", &n);
    	int a[1000];
    	a[n] = 0; // khi i = n -1 thi i + 1 = n, ma vong for dong 18 chi chay den n nen khong biet gia tri cua a[n], a[n] nho hon all de ket thuc day tang do.
    	for(int i = 0; i < n; i++){
		    scanf("%d", &a[i]);
     	}
	    printf("Test %d:\n", p);
     	int count[100] = {1};
    	int u = 0;
    	for(int i = 0; i < n; i++){
	    	if(a[i] < a[i + 1]) count[u]++;
		    else{
			b[i] = count[u]; //b[i] voi i la vi tri tang cao nhat,sau i se mat tinh lien tuc tang cua day,
			u++;
			count[u] = 1; //day la de chuan bi cho lan dem tiep theo, neu khong co buoc nay mang count dong 15 co van de
	    	}
	    }
    	int countmax = 0;
	    for(int i = 0; i < n; i++){
	    	if(count[i] >  countmax) countmax = count[i]; //for nay de tim ra doan co nhieu chu so tang nhat
    	}
	    printf("%d\n", countmax);
	    int xuongdong = 0;
    	for(int i = 0; i < n; i++){
	    	if(countmax == b[i]){
		    	for(int k = i - countmax + 1; k <= i; k++){
		    	    printf("%d ", a[k]);
		    	    xuongdong++;
		    	    if(xuongdong % countmax == 0) printf("\n");
				}
	    	}
    	}
	}
	return 0;
}
