#include <stdio.h>

int main(void) {
	int n1, n2, num;
	scanf("%d", &num);
	while(num >= 1000 && num <= 9999){
		n1 = ((num / 1000) * 10) + ((num/100)%10);
		n2 = (((num/10)%10) * 10) + (num%10);
		if(((n1+n2)*(n1+n2)) == num) {
			printf("propriedade do 3025!\n");
		} else {
			printf("numero comum\n");
		}
		scanf("%d", &num);
	}
	return 0;
}