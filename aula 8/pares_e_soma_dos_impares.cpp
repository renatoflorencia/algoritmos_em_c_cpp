//exibir os pares e somar os impares de 1 a 10
#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int num=1,soma;
    do
    {
        fflush(stdin);//pura precaus�o
        // verificando se o numero � par ou impar
        if(num%2==0)
        {
               cout<<" "<<num<<" ";
               ;
               }
        else{
        soma+=num;//lembrando isso � = a soma=soma+num
        }
    num++;
    }
    while(num<=10);
    cout<<"\nSoma dos numeros impares = "<<soma;
    getch();
}
