//programa para escolher os meses do ano atraves de um numero de 1 a 12

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Digite um numero de 1 a 12 para escolher um mes do anos = ";
    cin>>num;
    cout<<"\n";
    switch(num) //inicio da estrutura de escolha
    {case 1:
          cout<<"JANEIRO";
          break; //para os eventos do case
     case 2:
          cout<<"FEVEREIRO";
          break;
     case 3:
          cout<<"MARÇO";
          break;
     case 4:
          cout<<"ABRIL";
          break;
     case 5:
          cout<<"MAIO";
          break;
     case 6:
          cout<<"JUNHO";
          break;
     case 7:
          cout<<"JULHO";
          break;
     case 8:
          cout<<"AGOSTO";
          break;
     case 9:
          cout<<"SETEMBRO";
          break;
     case 10:
          cout<<"OUTUBRO";
          break;
     case 11:
          cout<<"NOVEMBRO";
          break;
     case 12:
          cout<<"DEZEMBRO";
          break;
     default:                       //FIM da estrutura de escolha
          cout<<"MES INVALIDO";
          break;
          }
     getch();
}
