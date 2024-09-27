#include <stdio.h>
int main(){
  char op = '\0';
  printf("\tMenú\n\n");
  printf("Elegir la opción deseada\n");
  printf("a) Ingresar\n");
  printf("b) Registrarse\n");
  printf("c) Salir\n");
  scanf("%c", &op);
  switch(op)
{
    default;
        printf("Opción no valida.\n");
        break;
case 'a':
        printf("Se seleccionó 'Ingresar'.\n");
        break;
case 'b':
        printf("Se selecciono 'Registrarse'. \n");
        break;
case 'c':
        printf("Se selecciono 'Salir'.\n");
        break;
}
return 0;
}
