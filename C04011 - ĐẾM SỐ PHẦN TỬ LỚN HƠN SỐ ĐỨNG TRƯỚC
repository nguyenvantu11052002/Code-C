#include<stdio.h>

int main(){
  int k;
  scanf("%d", &k);
  while(k--){
    int n;
    scanf("%d", &n);
    int a[1000];
    for(int i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }
    int dd, count = 1;
    for(int i = n - 1; i >0; i--){
      dd=1;
      for(int j = i - 1; j >= 0; j--){
        if(a[i] < a[j]){
             dd =0;
             break;
        }      
      }
      if(dd==1) count++;
      dd=0;
    }
    printf("%d\n", count);
  }
  return 0;
}
