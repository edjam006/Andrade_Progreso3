#include <stdio.h>
#include<stdlib.h>
/*menu tres opciones; ingresar mostrar salir. guardar en archivo txt, de manera horizontal por producto*/
struct producto{
    char codigo[25];
    char nombreProd[50];
    char descrProd [50];
    int cantidad;
    float precioCompra;
    
};

int main()
{
    struct producto datos;
    FILE *archivo;
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
        archivo = fopen("Productos.txt", "a");
        if (archivo!= NULL)
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
        break;
        case 2:
        
        if ((archivo = fopen("Productos.txt", "r")) !=NULL) 
        { 
            while (!feof(archivo))
            {
                 printf(" Datos del producto: %s %s %s %d %f\n", datos.codigo, datos.nombreProd, datos.descrProd, datos.cantidad, datos.precioCompra);
            }
            fclose(archivo);
        } else
        {
            printf("error con el archivo");
        }
        
        break;
        default:
            if (opc != 1 || opc !=2 || opc!= 3){
                printf("La opcion ingresada no es correcta\n");
            }
            break;
        }

    } while (opc != 3);
    
    return 0;
}


