#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<cmath>
using namespace::std;
int a,b,e,i;
string user,nama2;
double diskon,c,d,Barang,total=0,tot1,tot2;
char mber,ke,TRUE;
struct inputan {
char nama[20];
double harga,banyak,Barang;
};
inputan masuk [50];
inputan sorti;
struct mbr{
string nama, nomor;
};
main(){
mbr alfa[5];
alfa [0].nama="Bayu"   ;alfa [0].nomor="A001";
alfa [1].nama="Irvan"  ;alfa [1].nomor="A002";
alfa [2].nama="Susiati";alfa [2].nomor="A003";
alfa [3].nama="Diana"  ;alfa [3].nomor="A007";
alfa [4].nama="Roni"   ;alfa [4].nomor="A008";

cout<<" =======Toko Hnya Bisa Berharap ======= \n";
awal:
cout<<"||Apakah anda member(y/t): ";cin>>mber;
if (mber=='Y'||mber=='y'){
cout<<"||Masukan Username(perhatikan besar kecil) : ";cin>>user;
    for(i=0;i<5;i++){
    if(user==alfa[i].nomor)
    {TRUE='a';
    ke=i;}
}
switch( TRUE )
{
    case 'a'    :   cout<<"||Member \n";
                    cout<<"||Nomor :";cout<<alfa[ke].nomor;
                    cout<<"\n||Nama  :";cout<<alfa[ke].nama;
                    diskon=0.05;break;
     default    :   cout<<"||Username Tidak valid!!! program akan reboot...tekan enter\n";
                     getch();system ("CLS");goto awal ;break;
}}
if (mber=='t'||mber=='T'){
    cout<<"||Nama :"; cin>>nama2;
    diskon=0;getch();system ("CLS");
       }
    cout<<"\n||Jumlah Barang Belanja : ";cin>>e;
    cout<<"======Daftar Belanja=====\n";
    for (i=0;i<e;i++){
    cout<<"\nBarang ke         : " ;cout<<i+1;
    cout<<"\nNama Barang       : " ;cin>>masuk[a].nama;
    cout<<"Harga Barang      : " ;cin>>masuk[a].harga;
    cout<<"Jumlah Barang     : " ;cin>>masuk[a].banyak;
    c=masuk[a].banyak; d=masuk[a].harga;a++;
    masuk[a].Barang=c*d;
    total=total+masuk[a].Barang;
    }
    for(i=0;i<e;i++){
        for(b=0;b<e-1;b++){
        if(masuk[b].harga>masuk[b+1].harga)
    {
        sorti.harga=masuk[b].harga;
        masuk[b].harga=masuk[b+1].harga;
        masuk[b+1].harga=sorti.harga;
        strcpy(sorti.nama,masuk[b].nama);
        strcpy(masuk[b].nama,masuk[b+1].nama);
        strcpy(masuk[b+1].nama,sorti.nama);
        sorti.banyak=masuk[b].banyak;
        masuk[b].banyak=masuk[b+1].banyak;
        masuk[b+1].banyak=sorti.banyak;
}}}
getch();system ("CLS");
cout<<"======STRUK PEMBAYARAN=====\n";
cout<<"======Daftar Belanja=====\n";
    a=b;
    for(i=0;i<=a;i++){
    cout<<"\nBarang ke         : ";cout<<i+1;
    cout<<"\nNama              : " ;cout<<masuk[i].nama;
    cout<<"\nHarga barang      : " ;cout<<masuk[i].harga;
    cout<<"\nJumlah            : " ;cout<<masuk[i].banyak;
    }
    cout<<endl<<"\nTotal Harga :";cout<<total;
    tot1=total*diskon;
    tot2=total-tot1;
    cout<<"\nDiskon          : ";cout<<tot1;
    cout<<"\nTotal bayar     : ";cout<<tot2;
    cout<<"\n\n======Terimakasih=====\n";
    cout<<"\n\n";
}
