#include <stdio.h>

int main(void){

	int hora_inicial, hora_final, min_inicial, min_final, hora, min;
    hora = 0;
    min = 0;
    scanf("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);
    while(!(hora_inicial == 0 && hora_final == 0 && min_inicial == 0 && min_final == 0)){
        if(hora_final == hora_inicial){
            if(min_final == min_inicial){
                hora = 24;
            } else if (min_inicial > min_final){
                hora = 23;
                min  = (60 - (min_inicial-min_final));
            } else {
                hora = (hora_final-hora_inicial);
                min  = (min_final-min_inicial);
            }
        } else {
            if(hora_final >= hora_inicial){
                hora = (hora_final - hora_inicial);
            } else {
                hora = 24 + (hora_final - hora_inicial);
            }
            if(min_final >= min_inicial){
                min  = (min_final-min_inicial);
            }else if(min_final < min_inicial){
                hora--;
                min  = (60 - (min_inicial-min_final));
            } 
        }
        printf("%d\n", (hora*60)+min);
        scanf("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);
    }
    return 0;
}
