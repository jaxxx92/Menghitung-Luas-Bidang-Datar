#include <iostream>
using namespace std;
int main (){
    int input, sisipersegi, luaspersegi, panjangperpan, lebarperpan, luasperpan;
    float phi = 3.14, jariling, luasling, alassegitiga, tinggisegitiga, luassegitiga;
    cout<<" --------MENGHITUNG BIDANG DATAR-------"<<endl;
    cout<<"|            1. Lingkaran              |"<<endl;
    cout<<"|            2. Persegi                |"<<endl;
    cout<<"|            3. Segitiga               |"<<endl;
    cout<<"|         4. Persegi Panjang           |"<<endl;
    cout<<" --------------------------------------"<<endl;
    cout<<"\nPilih Salah Satu Bidang Datar : "; cin>>input;
    if (input==1)
    {
        system ("cls");
        cout<<"\nMasukkan Jari Jari Lingkaran : "; cin>>jariling;
        luasling = phi*jariling;
        system ("cls");
        cout<<"Luas Lingkaran Adalah : "<<luasling<<""<<endl;
    }
    else if (input==3)
    {
        system ("cls");
        cout<<"\nMasukkan Alas Segitiga   : "; cin>>alassegitiga;
        cout<<"Masukkan Tinggi Segitiga : "; cin>>tinggisegitiga;
        luassegitiga = 0.2*alassegitiga*tinggisegitiga;
        system ("cls");
        cout<<"Luas Segitiga Adalah : "<<luassegitiga<<""<<endl;
    }
    else
    {
        cout<<"\nMasukkan Kode (1-4)"<<endl;
    }
    switch (input)
    {
        case 2 : system ("cls");
                 cout<<"\nMasukkan Sisi Persegi : "; cin>>sisipersegi;
                 luaspersegi =  sisipersegi*sisipersegi;
                 system ("cls");
                 cout<<"Luas Persegi Adalah : "<<luaspersegi<<""<<endl;
        break;
        case 4 : system ("cls");
                 cout<<"\nMasukkan Panjang Dari Persegi Panjang : "; cin>>panjangperpan;
                 cout<<"Masukkan Lebar Dari Persegi Panjang   : "; cin>>lebarperpan;
                 luasperpan = panjangperpan*lebarperpan;
                 system ("cls");
                 cout<<"Luas Persegi Panjang Adalah : "<<luasperpan<<""<<endl;
        break;
    }
    return 0;
}
