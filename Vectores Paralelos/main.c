#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5

void mostrarAlumno(char [][50], int [], int [], float [], int [], int );
void CargarAlumno(char [][50], int [], int [], float [], int [], int );
int BuscarLugar(int [],int );
float SacarPromedio(int notaUno[], int notaDos[] )

int main()
{
    char nombre[TAMANIO][50]={"Juan","Maria","Alfredo","Jose","Lili"};
    int nota1[TAMANIO]={4,10,2,7,2};
    int nota2[TAMANIO]={4,8,7,8,3};
    float promedios[TAMANIO]={4,9.5,4.5,8.5,2.5};
    int legajo[TAMANIO]={111,222,333,444,555};

    CargarAlumno(nombre,nota1,nota2,promedios,legajo,TAMANIO);
    mostrarAlumno(nombre,nota1,nota2,promedios,legajo,TAMANIO);

    return 0;
}

void mostrarAlumno(char nombre[][50], int notaUno[], int notaDos[], float promedio[], int legajo[], int largo)
{
    int i;
    for(i=0;i<largo;i++){
        printf("\nLegajo: %d , Nombre: %s , Nota1: %d , Nota 2: %d , Promedio: %.2f ",legajo[i],nombre[i],notaUno[i],notaDos[i],promedio[i]);

    }
}

void CargarAlumno(char nombre[][50], int notaUno[], int notaDos[], float promedio[], int legajo[], int largo){
    int indice;
    legajo[indice]=666;
    indice=BuscarLugar(legajo,largo);


}

int BuscarLugar(int legajo[],int largo){
    int i;
    int indiceRetornado=-1;
    for(i=0;i<largo;i++)
    {
        if(legajo[i]==0)
        {
            indiceRetornado=i;
        }
        break;
    }
    return indiceRetornado;
}
