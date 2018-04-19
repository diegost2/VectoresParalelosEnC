#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5

void mostrarAlumno(char [][50], int [], int [], float [], int [], int );
void CargarAlumno(char [][50], int [], int [], float [], int [], int );

int main()
{
    char nombre[TAMANIO][50]={"Juan","Maria","Alfredo","Jose","Lili"};
    int nota1[TAMANIO]={};
    int nota2[TAMANIO]={};
    float promedios[TAMANIO]={};
    int legajo[TAMANIO]={};

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
    int i;
    legajo[1]=666;


}
