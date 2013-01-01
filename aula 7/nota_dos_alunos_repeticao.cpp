/*Criar um sistema para fazer a media de quatro notas de 4 alunos
 e exibir se foram aprovados/reprovados na condição media igual ou maior a 7
 exibir tambem se a nota é par ou impar e limpar a tela a cada novo aluno calculado
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   float nota1,nota2,nota3,nota4,media;
   int n=0;   
   // media dos alunos
   while (n<4){
         cout<<"\nDigite a primeira nota : ";
         cin>>nota1;
         cout<<"\n";
         cout<<"Digite a segunda nota : ";
         cin>>nota2;
         cout<<"\n";
         cout<<"Digite a terceira nota : ";
         cin>>nota3;
         cout<<"\n";
         cout<<"Digite a quarta nota : ";
         cin>>nota4;
         cout<<"\n";
         media=(nota1+nota2+nota3+nota4)/4;
         //Condição de aprovação ou reprovação
           if (media>=7)
             cout<<"O aluno esta aprovado !\n";
           else
             cout<<"O aluno esta reprovado !\n";
             n++; // é igual a n=n+1 incrementando o contador
           // mod para saber se é par ou impar
           if (soma %2==0)
             cout<<"O numero e par ";
           else
             cout<<"O numero e impar "; 
         getch();
         system ("cls"); //chamada de comando para limpar a tela
         }
   getch();
}
