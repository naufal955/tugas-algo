#include <iostream>
using namespace::std;
double input(string text){
double x;
cout<<"masukkan Nilai "<<text<<" : "; cin>>x;
return x;
}

void grade (double x){
if     (x>81)
    {cout<<" (A)";}
else if(x>61)
    {cout<<" (B)";}
else if(x>41)
    {cout<<" (C)";}
else if(x>21)
    {cout<<" (D)";}
else
    {cout<<"(E)";}
}

struct isi{
double uts, uas, tugas, absen;};

main(){
float x;

isi is;

is.uts = input("UTS");
is.uas = input("UAS");
is.tugas = input("TUGAS");
is.absen = input("ABSEN");
x=(is.uts*20/100)+(is.uas*30/100)+(is.tugas*35/100)+(is.absen*15/100); cout<<"Nilai Akhir : " <<x;
grade(x);
}



