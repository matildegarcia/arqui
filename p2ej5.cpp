#include <stdio.h>

// calcular la paridad de una palabra de 32 bits, es decir un int
// num de 1s par, paridad par(0) y vicerversa impar(1)

//idea: tengo una palabra y voy shifteando? examinando bit a bit
int paridad( int num, ){

int paridad = 0; // asumo que es par 

for (int i= 0; i < 32; i++){

int menosignificativo = num & 1;
paridad ^= menosignificativo;  // por la propiedad de xor, cambio la paridad de positiva a negativa si hay un uno, 
num >>=1; // desplazo un lugar hacia la derecha e investigo el prox bit 

}
return paridad;

}
