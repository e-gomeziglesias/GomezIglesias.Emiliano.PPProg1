/* Primer Parcial Programación I
Nombre: Gomez Iglesias, Emiliano
Division: 1A

1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int),
recuperados(int) y muertos(int). Desarrollar una función llamada actualizarRecuperados
que reciba el país y los recuperados del dia y que acumule estos a los que ya tiene el país.
La función no devuelve nada.

2. Crear una función que se llame invertirCadena que reciba una
cadena de caracteres como parámetro y su responsabilidad es
invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU

3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro y su responsabilidad es ordenarlos
caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;

//1
//void actualizarRecuperados(ePais pais, char nombrePais[20], int recuperados );
//2
int invertirCadena(char cadena[], int tam);
//3
int main()
{
    char cadena [20] = "Emiliano";
    invertirCadena(cadena,20);


}

void actualizarRecuperados(ePais pais, char nombrePais[20], int recuperados )
{

}

int invertirCadena(char cadena[], int tam)
{
    int retorno = 0;
    if (cadena != NULL)
    {
        for (int i=tam-1; i>=0; i--)
        {
            printf("%c", cadena[i]);
        }
    }
    return retorno;
}
