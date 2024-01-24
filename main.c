#include <stdio.h> // Se definen las librerias 
#include<stdlib.h>

struct producto{ //Estructura establecida para los datos de los productos 
    char codigo[25];
    char nombreProd[50];
    char descrProd [50];
    int cantidad;
    float precioCompra;
    
};

int main()
{
    struct producto datos; // Esto nos ayudara a posteriormente guardar los datos en la estructura
    FILE *archivo; //Se declara un puntero
    int opc;
    do{
        printf("Bienvenidos a Productos Andrade\n"); //Opciones del menu 
        printf("1. Ingresar datos del producto\n");
        printf("2. Mostrar los datos de los productos\n");
        printf("3. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
        archivo = fopen("Productos.txt", "w"); //Con la "w" creamos el archivo para poder escribir y leer al nuevo archivo de texto llamado Productos
        if (archivo!= NULL) //Revisamos si el archivo realmente existe
        {
            printf("Ingrese el codigo del producto\n"); //Solicitamos los datos y con la variable datos junto . con la variable de la estructura se almacena el dato en dicha variable
            scanf("%s", datos.codigo);
            printf("Ingrese el nombre del producto\n");
            scanf("%s", datos.nombreProd);
            printf("Ingrese la descripcion del producto\n");
            scanf("%s", datos.descrProd);
            printf("Ingrese la cantidad de productos\n");
            scanf("%d", &datos.cantidad);
            printf("Ingrese el precio del producto\n");
            scanf("%f", &datos.precioCompra);
            fprintf(archivo, "%s %s %s %d %.2f\n", datos.codigo, datos.nombreProd, datos.descrProd, datos.cantidad, datos.precioCompra); //Con la funcion fprintf Imprimimos estos datos en el archivo de texto 
        }
        fclose(archivo); //Cerramos el archivo
        break;
        case 2:
        archivo = fopen("Productos.txt", "r"); //Ahora abrimos el archivo pero con "r" solo para lectura 
        if (archivo != NULL) //Verificamos si el archivo realmente existe
        {
            while (fscanf(archivo, "%s %s %s %d %f\n", datos.codigo, datos.nombreProd, datos.descrProd, &datos.cantidad, &datos.precioCompra) == 5 ) //Con el while realizamos una revision del archivo hasta que culmine, y se utiliza la funcion fscanf para comparar posteriormente si son 5 datos los cuales se estan leyendo, por eso se comprueba si es ==5
            {
                printf("Datos del producto: %s %s %s %d %.2f\n", datos.codigo, datos.nombreProd, datos.descrProd, datos.cantidad, datos.precioCompra); //Se imprimen los productos almacenado en el archivo Productos 
            }
            fclose(archivo); //Cerramos el archivo

        }else
        {
            printf("Error al abrir el archivo.\n"); //Si el archivo no existe se envia un mensaje de error 

        }
        case 3:
        printf("Saliendo...\n"); //Ultima opcion para salir del programa 
        break;
        default:
            if (opc != 1 || opc !=2 || opc!= 3){ //Se verifica si no es una de las opciones dentro del menu para informar que la opcion no es correcta
                printf("La opcion ingresada no es correcta\n");
            }
            break;
        }

    } while (opc != 3); //Se repite el menu hasta que el usuario quiera salir del programa 
    
    return 0;
}


