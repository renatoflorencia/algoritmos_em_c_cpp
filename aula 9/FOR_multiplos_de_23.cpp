//axibir 10 multiplos de 23 com mais de 3 digitos.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    const int controle=23; //declarando variavel constante
    int multiplo=0,i;
    for(i=0;i<10;i++)
    {
        multiplo+=controle;   //multiplos de 23... 23 mais 23 mais 23 e assim vai
           if (multiplo<99)   //verigicando de o numero tem mais de 3 digitos
              i--;
           else
              cout<<"\n"<<multiplo;
    }
    getch();
}
