#include <stdio.h>

short sumaBCD(char num1, char num2){
//divido en digitos el numero

char num1_d1= ((num1>>4) & 0xF0); // mas significativo
char num1_d2= (num1 & 0xF0); // menos significativo

char num2_d1= ((num2>>4) & 0xF0); // mas significativo
char num2_d2= (num2 & 0xF0); // menos significativo

// la mascara AND 0xF0 se utiliza para extraer los ultimos 4 bits de un numero. 
//el valor de 0x0F en binario es 0000 1111. Al aplicar la operacion AND se mnatienen solo los bits que estan en 1 y se borra el resto. 


//primero sumo digitos menos significativos para evaluar el acarreo
char sumad2 = num1_d2 + num2_d2;
char carreo = 0;


//ajuste del acarreo
if (sumad2>9){
sumad2-=10;
carreo=1;
}

// suma digitos significativos con acarreo

char sumad1 = num1_d1 + num2_d2 + carreo;

// vuelvo a evaluar 

if (sumad1>9){
sumad1-=10;
}

// contexto: los resultados estan en 8 bits y tengo que empaquetarlos en 16 bits. desplazo la sumauno hacia la posicion mas significativa
// con un shift hacia la izquierda 4 lugares <<. luego un or bit a bit para la sumados.

short resultado = ((sumad1<<4)| sumad2);

return resultado;

}

