#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
/*Program szyfrujacy podane slowo na szyfr cezara z przesunieciem o 13 znakow i uwzglednieniem zawijania alfabetu.
Program znaki nie dodane do pliku "alfabet" uznaje za spacje (³¹cznie ze spacj¹). Wynik zapisuje w pliku i na ekranie konsoli*/
int main()
{
    int i=0;
    int j=0;
    string wynik;
    string slowo;
    string alfabett;
    fstream alfabet;
    alfabet.open("alfabet.txt", ios::in);
    if(alfabet.good()==false)
    {
        cout<<"Alfabet nie jest zalaczony";
        exit(0);
    }
    getline(alfabet,alfabett);
    cout<<"Wpisz tekst:"<<endl;
    getline(cin,slowo);
    while(i<slowo.size())
    {
        if(alfabett[j]==slowo[i]){wynik+=alfabett[j+13];}
        while(alfabett[j]!=slowo[i])
        {
            j++;
            if(slowo[i]==alfabett[j] && j+13>25)
            {
                    wynik+=alfabett[j+13-25];
                    continue;
            }
            if(alfabett[j]==slowo[i])
            {
                wynik+=alfabett[j+13];
                break;
            }
            if(slowo[i]!=alfabett[j]&&j==25)
            {
                    wynik+=" ";
                    break;
            }
        }
        j=0;
        i++;
    }
    cout<<wynik<<endl;
    fstream wynik2;
    wynik2.open("wynik.txt", ios::out);
    wynik2<<wynik;
    alfabet.close();
    alfabet.clear();
    wynik2.close();
    wynik2.clear();
    return 0;
}
