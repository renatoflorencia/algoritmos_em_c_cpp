/* usando a estrutura de condição case e switch 
para criar uma pequena logica de escolhas em um menu relativamente personalizado
para calculos de um numero previamente lido. 
*/
#include<iostream>
#include<conio.h>
using namespace std;  //utilizando o padrão correto para c++

int main()
{
    int num1;
    float num2;
    //lendio o numero a ser calculado
    cout<<"Qual o valor a ser calculado ? ";
    cin>>num2;
    //apresentação das escolhas do menu personalizado
    cout<<"\nQual operacao a ser feita ?";
    cout<<"\n\n 1) Quadrado de "<<num2<<" + 1";
    cout<<"\n 2) "<<"2 * "<<num2;
    cout<<"\n 3) "<<"3 + "<<num2;
    cout<<"\n 4) "<<num2<<" / 4\n\n ";
    cin>>num1;
    //logica de escolha do menu
    switch (num1)
    {case 1:
          cout<<"\n A resposta e "<<(num2*num2)+ num1;
          break;
     case 2:
          cout<<"\n A resposta e "<<num1*num2;
          break;
     case 3:
          cout<<"\n A resposta e "<<num1+num2;
          break;
     case 4:
          cout<<"\n A resposta e "<<num2/num1;
          break;
     default:
          cout<<"\nOpcao invalida";
          break;
          }
     getch();
}
    
