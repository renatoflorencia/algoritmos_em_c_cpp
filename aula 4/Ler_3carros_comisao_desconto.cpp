/*Implementação de programa para ler valor de 3 carros somalos
calular a comição de 10% em cada carro
ler e aplicar um % de desconto  sobre o total dos carros
 */
#include<iostream.h>
#include<conio.h>
int main ()
{
    float car1,car2,car3,perc,soma;
    cout<<"digite o valor do primeiro carro:";
    cin>>car1;
    cout<<"\ndigite o valor do segundo carro:";
    cin>>car2;
    cout<<"\ndigite o valor do terceiro carro:";
    cin>>car3;
    cout<<"\n\n\Qual o percentual de desconto? ";
    cin>>perc;
    soma=car1+car2+car3;
    cout<<"\n\nA soma do valor de todos os carros e =" <<soma;
    cout<<"\nA comicao no primeiro carro e de =" <<car1*0.1;
    cout<<"\nA comicao no segundo carro e de =" <<car2*0.1;
    cout<<"\nA comicao no terceiro carro e de =" <<car3*0.1;
    cout<<"\nO valor do desconto total na compra =" <<(soma*perc)/100;
    getch();
}
    
