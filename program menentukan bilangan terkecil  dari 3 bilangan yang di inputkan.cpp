#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,terkecil;
    cout<<"Program Menentukan bilangan terkecil dari 3 bilangan yang di inputkan"<<endl
    cout<<"Masukan Bilangan pertama : " ;
    cin>>a;
    cout<<"masukan Bilangan kedua : " ;
    cin>>b;
    cout<<"Masukan Bilangan ketiga : " ;
    cin>>c;
   {if (a<b && a<c){
        terkecil = a;
    }else if (b<a && b<c){
        terkecil = b;
    }else if (c<a && c<a){
        terkecil = c;
    }cout<<endl;
    cout<<"Nilai terkecil adalah : "<<terkecil<<endl;
    }return 0;
}
