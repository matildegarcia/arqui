#include <stdio.h>

//convertir un numero de complemento a 1 a su representacion con magnitud y signo
// si el numero es negativo entonces se invierten sus bits, los ceros por unos y viceversa
void funcion1 (short num, short* magnitud, char* signo){

if(num<0){
*signo= '-';
*magnitud = ~num; //invierto los valores de los bits y toomo su valor abs

}else{

*signo= '+';
*magnitud= num;
}

}

// de complemento a 2 a  desplazamiento con d= 128
int funciohhhhhhn2(short num){

int d= 128;

if (num<0){
num= -num; // hago positivo
}
return num + d;

}
