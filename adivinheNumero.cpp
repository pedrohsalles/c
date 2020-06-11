#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
main()
{
    int Numero, Palpite;
    srand((unsigned)time(NULL)); ///Esta linha é necessária para que a função rand() não gere sempre o mesmo número quando o programa for executado.
    Numero = rand() % 10; //gera um numero aleatorio de 0 a 10.
    puts("\nAdivinhe o numero magico:");
    scanf("%d", &Palpite);
       if (Palpite == Numero)
        puts("\n Voce ACERTOU...!");
    else
        puts("\n Voce errou...!");
        printf ("\n O numero correto era...! %d \n", Numero);

        getch(); // segura na tela a tecla enter ser precionada....
    return (0);
}