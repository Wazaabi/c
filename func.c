#include <stdio.h>

double aa(double a, double b) {
	if (a<b) {
		return a;
	}
	else {
		return b;
	}
}

double ab(double a, double b) {
	if (a>b) {
		return a;
	}
	else {
		return b;
	}
}

double ac(double a, double b) {
	return (a+b)/2;
}

double ad (double n){
  double d;
  double fac = 1.0;
 
  for (d = 1.0; d <= n; d++)
    fac = fac * d;
 
  return fac;
}

int main(int argc, char * argv[]) {
	
        double a, b, c;
        a=10.0;
        b=9.0;
        
        c=aa(a, b);
        printf("Väiksem arv on %.1f\n", c); 
        
        c=ab(a, b);
        printf("Suurem arv on %.1f\n", c);
        
        c=ac(a, b);
        printf("Arvude keskmine on %.1f\n", c);
        
        c=ad(a);
        printf("Arvu a faktoriaal on %.1f\n", c);
        
        c=ad(b);
        printf("Arvu b faktoriaal on %.1f\n", c);
        
		return 0;
}
