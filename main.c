//Defina una función que convierte una cadena de caracteres, pasada por referencia, a
//mayúsculas.
//Notas:
//a. Según el código ASCII => C+32=c. Donde c pertenece al conjunto de
//caracteres alfabéticos en minúscula y C en mayúscula.
//b. La finalización de una cadena de caracteres se representa mediante ´/0´

#include<stdio.h>
void trans(char *);
int main(){
    char texto[1000], *textoptr;
    printf("Ingrese un texto:\n");
    gets(texto);
    printf("El texto ingresado es: ");
    puts(texto);
    trans(textoptr);
    printf("El texto transformado es:");
    puts(texto);
    return 0;
}

void trans(char *textoptr){
    int i;
    for(i=0; textoptr[i]!='\0'; i++){
        if(textoptr[i]>=97 && textoptr[i]<=122){
            textoptr[i]=textoptr[i]-32;
        }
    }
}
