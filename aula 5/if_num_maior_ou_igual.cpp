//Leia um numero via teclado e exiba se ele � maior ou igual que 10

#include<iostream.h>
#include<conio.h>

int main()
{
    int valor;
    cout<<"digite o valor = ";
    cin>>valor;
    //trabalhando com condi��es simples se 
    if (valor >10)
    {
       cout<< "numero maior que 10";
       }
    if (valor ==10)
    {
       cout<< "numero e igual a 10";
       }
    getch ();
}    
