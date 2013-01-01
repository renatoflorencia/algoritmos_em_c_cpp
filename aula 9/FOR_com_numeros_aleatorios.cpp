//programa que calcula aleatoriamente 10 numeros tipo interio e exibe na tela

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    srand(time(NULL)); //chama a função srand criada para gerar numeros aleatoriamente usando o time como semente para aleatoriedade
    int i=0,num;
    for(i=1;i<=10;i++)
    {
       num=rand()%100; //usando o rand(). %100 determina que os numeros seram gerados entre 0 e 100. se %100+10 por ex os numeros seriam entre 100 e 110
       cout<<"\t"<<num;
    }
    getch();
}
