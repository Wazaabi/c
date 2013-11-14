#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * argv[]) {
	printf("\nSee on MÄNG\n\nMängimiseks kasuta klahve a/s/d\na lisab ritta tühiku\ns jätab reapikkuse samaks\nd lisab reale tühiku\n\nMängu lõpetamiseks vajuta suvalist klahvi (v.a. a/s/d)\n");
	char tekst[256] = "                                      o";
	char tekst2[256];
	char tyhik[] = " ";
	int x = 0;
	char input;
	while (1) {
		scanf( "%s", &input );
		switch ( input ) {
			case a:
				strcpy(tekst2,&tekst[1]);
				printf("%s\n", tekst2);
				break;
			case s:
				printf("%s\n", tekst);
				break;
			case d:
				strncpy(tekst2,tekst,x);
				strC[x] = '\0';
				strcat(tekst2,tyhik);
				strcat(tekst2,tekst+x);
				printf("%s\n",tekst2);
				break;
			default:            
				printf( "Mäng läbi\n" );
				break;
		}
	}
	return 0;
}
