#include <stdio.h>

int main(int argc, char * argv[]) {
        int i, j=1;
     /* printf ("   |");    
		for (i = 1; i < 11; i++)    
			printf ("%3d   ", i);    
		printf ("\n");    

		for (i = 1; i < 64; i++)    
			printf ("-");    
		printf ("\n");    
		for (i = 1; i < 11; i++){    
			printf ("%2d |", i);    
			for (j = 1; j < 11; j++)    
				printf ("%3d   ", i * j);    
			printf ("\n");   
		}    										*/
	/*	for (i = 1; i < 4; i++){       
			for (j = 1; j < 4; j++)    
				printf ("%3d   ", i * j); 
				printf ("\n");	
			}     									*/
		printf ("\nFaktoriaali tabel\n\n"); 
		for (i = 1; i < 4; i++) {
			j=j*i;
		printf ("%3d", j);
		}	 
		printf ("\n");  
  return 0;    
}    
