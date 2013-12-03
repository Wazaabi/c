#include <stdio.h>

int main(int argc, char * argv[]) {
	
	int x, y;

	for (x = 0; x < 6; x++) {
		for(y = x; y >= 0; y--) {
			printf("#");
		}
		printf(" ");
		for (y = x; y < 6; y++) {
			printf("*");
			}
		printf("\n");
	}
return 0;
}
