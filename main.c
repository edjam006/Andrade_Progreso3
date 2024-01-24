#include <stdio.h>
/*menu tres opciones; ingresar mostrar salir. guardar en archivo txt, de manera horizontal por producto*/
struct producto{
    char codigo[25];
    char nombreProd[50];
    char descrProd [50];
    int cantidad;
    float precioCompra;
    
};

void ingresarProducto() {
    struct producto datos;
    FILE *archivo;

    archivo = fopen("Productos.txt", "w");
    if ((archivo=fopen("Productos.txt", "w"))!= NULL)
    {
        printf("Ingrese el codigo del producto\n");
        scanf("%s", datos.codigo);
        printf("Ingrese el nombre del producto\n");
        scanf("%s", datos.nombreProd);
        printf("Ingrese la descripcion del producto\n");
        scanf("%s", datos.descrProd);
        printf("Ingrese la cantidad de productos\n");
        scanf("%d", &datos.cantidad);
        printf("Ingrese el precio del producto\n");
        scanf("%f", &datos.precioCompra);
    }
    fclose(archivo);
    
}

int main(int argc, char const *argv[])
{
    int opc;
    do{
        
        printf("Bienvenidos a Productos Andrade\n");
        printf("1. Ingresar datos del producto\n");
        printf("2. Mostrar los datos de los productos\n");
        printf("3. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            ingresarProducto;
            break;
        
        default:
            break;
        }

    } while (opc != 3);
    
    return 0;
}

