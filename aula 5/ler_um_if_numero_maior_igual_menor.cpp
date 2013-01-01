//ler um numero e verificar se é maior, igual ou menor que 10
//trabalhando com if aninhados
#include<iostream.h>
#include<conio.h>

int main()
{
    int valor;
    cout<<"digite o valor = ";
    cin>>valor;
    if (valor >10)
    {
       cout<< "numero maior que 10";
       }
    else
    {
        if (valor<10)
        {
       cout<< "numero e menor que 10";
       }
       else
       {
           cout<< "o numero e igual a 10";
           }
           }
    getch ();
}   
