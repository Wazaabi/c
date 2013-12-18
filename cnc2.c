#include <stdio.h>

void koodid (float x, float y, float w, float h){
        printf("G X GoTo %f\n", x );
        printf("G Y GoTo %f\n", y );
        printf("G Z Down\n");
        printf("G X Move %f\n", w );
        printf("G Y Move %f\n", h);
        printf("G X Move %f\n", -w);
        printf("G Y Move %f\n", -h);
        printf("G Z Up\n\n");   
}
void kastid (int x0, int x1, int y0, int y1, int w, int h, int dx, int dy){
	int x, y;
	
	for(y = y0; y + h <= y1; y = y + h + dy){
		for(x = x0; x + w <= x1; x = x + w + dx){
			koodid(x, y, w, h);
		}
	}
}

int main(int argc, char * argv[]) {
        kastid(6, 100, 3, 110, 45, 40, 1, 1);
        
        return 0;
}
