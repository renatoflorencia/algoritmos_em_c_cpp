// exibir os numeros pares até 20 
#include<iostream>
#include<conio.h>
using namesapce std;

int main()
{
    // vou contar de dois em dois começando do 2 q sabenm ser o primeiro numero par
    int num=2,cont=0;
    do
    {
        cout<<num<<" ";
        cont++;
        num=num+2;
        }
    while(cont<10);
    getch();
}
