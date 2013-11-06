#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]) {
	int nr [100];
	int i;
	int sum=0;				//ruutude summa
	double rms;				//ruutkeskmine
	for (i=0; i<100; i++){
		nr[i]=20+rand()%21;
		sum +=nr[i]*nr[i];
	}
	for (i=0; i<100; i++){
		printf("%d\t%d\n", i, nr[i]);
	}
	printf("\n");
	rms=sqrt(sum/i);
	printf("Ruutkeskmine: %f\n",rms);
	return 0;
}
