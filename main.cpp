#include <iostream>

using namespace std;

int i;
string pole [70][70];


void stworz_pole()
     {

    for( i=0;i<=70;i++)
        {
     int a=-1;
     int b=0;

     do
        {
           a=a+1;
           pole[a][b]="0";

        }while(a<69);
        b=b+1;

}

    }


    void rysuj_pole()
     {

    for( i=0;i<=70;i++)
        {
     int a=-1;
     int b=0;

     do
        {
           a=a+1;
           cout<<pole[a][b]<<" ";

        }while(a<69);
        b=b+1;
        cout<<endl;

}

    }



int main()
{


stworz_pole();

rysuj_pole();






    return 0;
}
