// troca valores da uma varialve para outra sem perder o valor de nenhuma
#include<iostream.h>
#include<conio.h>
int main()
{
    float direito,esquerdo,aux; //variavel do tipo real
    direito=20.00;
    esquerdo=40.00;
    printf("o valor no bolso direito antes da troca é = %.2f",direito);
    printf("\no valor no bolso esquerdo antes da troca é = %.2f",esquerdo);
    //usando uma variavel auxiliar na troca
    aux=direito;
    direito=esquerdo;
    esquerdo=aux;
    printf("\n\no valor no bolso direito depois da troca é = %.2f",direito);
    printf("\no valor no bolso esquerdo depois da troca é = %.2f",esquerdo);
    printf("\n\nPaulo magno tem no total = %.2f", direito+esquerdo);
    getch ();
    }
