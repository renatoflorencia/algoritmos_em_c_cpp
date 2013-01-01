/*verificando se um dado numero é par
caso seja exibir o dobro, 
caso contrario exibir o triplo*/

#include<iostream.h>
#include<conio.h>

int main()
{
    int n1;
    cout <<"digite um numero: \n";
    cin >> n1;
    //inicio da condicional se, senão
    if (n1 %2==0){                         //usando if - mod de n1
           cout << "o numero eh par \n";
           cout << "o dobro do numero eh: "<<n1*2<<"\n";}
    else{
         cout << "o numero eh impar /n";
         cout << "o triplo do numero eh: "<<n1*3<<"/n";}
    getch ();
}
