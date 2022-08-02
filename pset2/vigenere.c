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

    string x = argv[1]; // Aqui dice que la llave van a ser letras
    int u = strlen(x); // Conteo de cada caracte de llave.
    for (int j = 0; j < u ; j++) // Este for recorre la key de Inicio a Fin.
    {

        if (!isalpha(x[j]))
        {
            printf("INVALID");
            return 1;
        }
    }

    string pedir = get_string("plaintext: "); // Pide al usuario el texto a cifrar
    printf("ciphertext:"); // Si no lo escribo bien me da error, el check50 es bien exigente :D.
    for (int i = 0, y = 0, m = strlen(pedir); i < m; i++)

    {
        if (isupper(pedir[i])) // si es Mayuscula el caracter debe ser cifrado en Mayuscula
        {
            printf("%c", (pedir[i] - 65 + toupper(x[y]) - 65) % 26 + 65);
            y = (y + 1) % u; // Siguiente caracter de la llave.
        }



        if (islower(pedir [i]))
        {
            printf("%c", (pedir[i] - 97 + tolower(x[y]) - 97) % 26 + 97); // si es Minuscula el caracter debe ser cifrado en Miniscula
            y = (y + 1) % u; // Siguiente caracter de la llave.
        }

        if (!isalpha(pedir [i])) // Si es un signo solo se escribe el mismo signo, pero no va el siguiente caracter de la llave
        {
            printf("%c", pedir[i]);

        }

    }
    printf("\n");
    return 0;

} // Final de la función










