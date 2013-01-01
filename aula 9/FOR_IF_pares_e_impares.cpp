//programa para ler 100 numeros somar os pares, somar os impares, exibir qual somatorio é maior par ou impar

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int somapar=0,somaimp=0,num;  //variaveis globais
    for (int i=1;i<=100;i++)  // variavel local i so vai trabalhar (servir) dentro da função for
    { cout<<"\nDigite um numero = ";
      cin>>num;
         if (num %2 ==0)  //separando os somatorios par e impar
           somapar+=num;
         else
           somaimp+=num;
    }
    cout<<"\nSoma dos pares = "<<somapar;
    cout<<"\nSoma dos impares = "<<somaimp;
    if (somapar>somaimp)     // exibindo o maior
       cout<<"\nSoma par maior";
    else
       cout<<"\nSoma impar maior";
    getch();
}
