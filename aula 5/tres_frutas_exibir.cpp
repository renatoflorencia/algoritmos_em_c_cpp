//é hora de relembrar :) ler o nome de tres frutas e depois exibir

#include<iostream.h>
#include<conio.h>

int main()
{
    char fruta1[15],fruta2[15],fruta3[15];// var tipo char noma_da_var [quantidades de caracteres que serão armazenados]
    cout<<"digite o nome da primeira fruta :";
    cin>>fruta1;
    cout<<"\ndigite o nome da segunda fruta :";
    cin>>fruta2;
    cout<<"\ndigite o nome da terceira fruta :";
    cin>>fruta3;
    cout<<"\nfrutas informadas";
    cout<<"\nprimeira "<<fruta1[3];
    cout<<"\nsegunda "<<fruta2;
    cout<<"\nterceira "<<fruta3;
    getch();
}
