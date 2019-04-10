#include <iostream>
using namespace::std;

struct test{
 double uts,uas,tugas,absen,nilai,tnilai;

}tests;

double input(string text)
{
double nilai;
cout<<"input nilai"<<text<<" = ";cin>>nilai;
return nilai;
}
void grade(double tnilai){

 if (tests.tnilai>80)
    {
    cout<<"Nilai Kamu A";
    }
else if (tests.tnilai>60)
    {
    cout<<"Nilai Kamu B";
    }
else if (tests.tnilai>40)
    {
    cout<<"Nilai Kamu C";
    }
else if (tests.tnilai>20)
    {
    cout<<"Nilai Kamu D";
    }
else
    {
    cout<<"Nilai Kamu E";
    }
}
main()
{


    tests.uts = input ("UTS");
    tests.uas = input ("UAS");
    tests.tugas = input ("TUGAS");
    tests.absen = input ("ABSEN");
    tests.tnilai = (tests.uts*0.2)+(tests.uas*0.3)+(tests.tugas*0.35)+(tests.absen*0.15);

    cout<<"Total Nilai :"<<tests.tnilai;
    cout<<endl;

    grade(tests.tnilai);

}
