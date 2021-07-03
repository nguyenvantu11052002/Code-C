#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a == 0){
		if(b == 0) printf("NO");
		else printf("%.2lf", (double) -c/b);
	}
	else{
		double delta = b * b - 4 * a * c;
		if(delta < 0) printf("NO");
		else if(delta == 0) printf("%.2lf", (double) -b/(2*a));
		     else{
		     	double x1 = (-b + sqrt(delta)) / (2*a);
		     	double x2 = (-b - sqrt(delta)) / (2*a);
		     	printf("%.2lf %.2lf", x1, x2);
			 }
	}
	return 0;
}
