#include <stdio.h>
#include<stdlib.h>

int main(void) {

    char nums[4], nums_i[4];
    int i = 0, j;

    scanf("%s", nums);
    for(i = 0, j = 3; i < 4; i++, j--){
         nums_i[i] = nums[j];
    }
    i = 0;
    while(nums_i[i] == '0' && i < 3) {
         i++;
    }
    for(j = i; j < 4; j++){
         printf("%c", nums_i[j]);
    }
    return 0;
}
