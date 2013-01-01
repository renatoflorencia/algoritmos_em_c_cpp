#include<iostream.h>
#include<conio.h>
int main()
{
    int i,soma=0,num;
    for(i=1;i<=10;i++)
    {
        cout<<"\nDigite um numero = ";
        cin>>num;
        soma+=num;
    }
    cout<<"\nSoma dos numeros = "<<soma;
    getch();
}
