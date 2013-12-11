#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
	if (a<b) {
		return a;
	}
	else {
		return b;
	}
}

int max(int a, int b) {
	if (a>b) {
		return a;
	}
	else {
		return b;
	}
}

int main(int argc, char * argv[]) {
	
        int a , b, c;
        a=rand() % 1000001;
        b=rand() % 1000001;
        
        c=min(a, b);
        printf("Väiksem arv on %d\n", c); 
        
        c=max(a, b);
        printf("Suurem arv on %d\n", c);
        
        return 0;
}
