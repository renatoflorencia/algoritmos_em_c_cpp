//programa com variavel auxiliar(aux)

#include<iostream.h>
#include<conio.h>

int main()
{
    int num1=10,num2=20,aux;     //declaração e valoração das variaveis na mesma linha
    cout<<"antes da troca = "<<num1;
    cout<<","<<num2;
    //trocando o valor das var.
    aux=num1;
    num1=num2;
    num2=aux;
    cout<<"\n\ndepois da troca = "<<num1;
    cout<<","<<num2;
    getch();
}
