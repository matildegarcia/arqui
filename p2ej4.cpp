#include <stdio.h>


// las variables int se compilar en 32 bits
// la idea es extraer una porcion de bits utilizando una mascara como en el ej 1
int extraerBits (int palabra, int bitAlto, int bitBajo){

int numBits = bitAlto - bitBajo + 1; //  incluyo los extremos

int mascara = (1<<numBits) - 1; // queremos una mascara de # numbits en 1 

// desplazo la palabra hacia la derecha con shift bitBajo, es decir agrego a la izquierda de palabra  tantos ceros como bitBajo
//luego le aplico la mascara
int resultado = (palabra>> bitBajo) & mascara;
return resultado;

}
