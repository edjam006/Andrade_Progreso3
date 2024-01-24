#include <stdio.h>
/*menu tres opciones; ingresar mostrar salir. guardar en archivo txt, de manera horizontal por producto*/
struct producto{
    char codigo[25];
    char nombreProd[50];
    char descrProd [50];
    int cantidad;
    float precioCompra;
    
};
int main(int argc, char const *argv[])
{
    int opc;
    do{
        
        printf("Bienvenidos a Productos Andrade\n");
        printf("1. Ingresar datos del producto\n");
        printf("2. Mostrar los datos de los productos\n");
        printf("3. Salir\n");
        scanf("%d", &opc);


    } while (opc != 3);
    
    return 0;
}


