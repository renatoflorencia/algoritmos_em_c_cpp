#include<iostream.h>
#include<conio.h>

int main()
{
    int num,soma=0,quant=0;
    cout<<"Digite um numero = ";
    cin>>num;
    while (num != 0){ //enquanto (condi��o) fa�a
          soma+=num;// � a mesma coisa que soma=soma+num;
          quant++;//� a mesma coisa que quant=quant+1;
          cin>>num;
          }
    cout<<"a soma dos nunmeros eh "<<soma<<"\n";
    cout<<"o total de numeros digitados eh "<<quant<<"\n";
    getch();
}
