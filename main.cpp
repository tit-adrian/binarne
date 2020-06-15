
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
string s, s2;
int a, w, zera, b, os, dwa;
fstream liczby;
bool podzielne (string s2)
{
    liczby.open("liczby.txt", ios::in);
    while (liczby.good())
    {
        liczby>>s2;
        int dl=s2.size();
        if(s2[dl-1]=='0')
            dwa++;
        if(s2[dl-1]=='0' && s2[dl-2]=='0' && s2[dl-3]=='0')
            os++;
    }
    cout<<"Ilosc liczb podzielnych przez 2 jest rowna: "<<dwa<<endl<<"Ilosc liczb podzielnych przez 8 jest rowna: "<<os;
    liczby.close();
}
bool wiecej (string s)
{
    liczby.open("liczby.txt", ios::in);
    while (liczby.good())
    {
        liczby>>s;
        int dl=s.size();
        int x=0, y=0;
        for (int i=0; i<dl; i++)
        {
            if(s[i]=='1')
                x++;
            else
                y++;
        }
        if(x<y)
            zera++;
    }
    liczby.close();
    cout<<"Wieksza liczba zer jest w tych liczbach: "<<zera<<endl;
}
int main()
{
    cout<<"Ilosc liczb, w ktorych jest wiecej 0 niz 1 - wcisnij 1"<<endl;
    cout<<"Ilosc liczb podzielnych przez 2 orez podzielnych przez 8 - wcisnij 2"<<endl;
    cout<<"Wybierz opcje 1 lub 2: ";
    cin>>w;
    switch(w)
    {
    case 1:
        wiecej(s);
        break;
    case 2:
        podzielne(s2);
        break;
    default:
        cout<<"Blad!";
    }
    return 0;
}
