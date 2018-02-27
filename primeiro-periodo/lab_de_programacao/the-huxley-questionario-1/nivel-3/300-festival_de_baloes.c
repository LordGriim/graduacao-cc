#include <stdio.h>

int main(void) {
	
	int h=0, d=0, s = 0, n, i;
	char mov;
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++) {
		scanf("%c", &mov);
		getchar();
		switch(mov) {
			case 'S':
			if(h <= 200){
				h += 10;
			}
			break;
			case 'D':
			if(h > 0){
				h -= 10;
			}
			break;
			case 'F':
			if(d < 2000) {
				if(s) {
					if(d > 0){
						d-=10;
					} else {
						s = 0;
						d+=10;
					}
				} else	if(d <= 2000 && h > 0){

					d += 10;
				}
			}
			break;
			case 'V':
			if(d>0 && h > 0){
				d += 10;
				s = !s;
			}
		}

	}
	printf("%d %d\n", h, d);
	return 0;
}