//verificar se o aluno esta aprovado ou reprovado com do while

#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    float n1,n2,n3,n4,media;
    int contador=1;
    do
    { 
        fflush(stdin); //limpa o buffer de memoria do teclado impedidno falsar leituras de entrada de dados
        cout<<"digite uma nota = ";cin>>n1;
        cout<<"digite uma nota = ";cin>>n2;
        cout<<"digite uma nota = ";cin>>n3;
        cout<<"digite uma nota = ";cin>>n4;
        media=(n1+n2+n3+n4)/4;
        if(media>=7)
        {
            cout<<"O Aluno esta aprovado\n\n";}
        else
        {
            cout<<"O Aluno esta reprovado\n\n";}
        contador++;
        }
    while(contador<=3); // teste no final :]
    getch();
}
