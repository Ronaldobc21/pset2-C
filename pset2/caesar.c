#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>


int main(int argc, string argv[]) // Inicio de la función.
{

    if (argc != 2)
    {
        printf("INVALID \n");
        return 1;
    }
    int key = atoi(argv[1]); // Aqui se convierte una cadena de caracteres Char a entera Int

    string pedir;
    pedir = get_string("plaintext: "); // Aqui le pide al usuario que ingrese el texto a cifrar.
    printf("ciphertext:"); // Aqui esto lo pide el check50 de ley :D.

    for (int i = 0; i < strlen(pedir); i++) //i < n; // aqui es el error aqui pedir un strlen luego de este for voy a pedir
    {

        if (isupper(pedir[i])) // si es Mayuscula el caracter debe ser cifrado en Mayuscula
        {

            printf("%c", ((pedir[i] - 'A') + key) % 26 + 'A');

        }
        else if (islower(pedir[i])) // si es Minuscula el caracter debe ser cifrado en Miniscula
        {

            printf("%c", ((pedir[i] - 'a') + key) % 26 + 'a');
        }
        else
        {
            printf("%c", pedir[i]);
        }


    }

    printf("\n");
    return 0;
} // Fin de la función.