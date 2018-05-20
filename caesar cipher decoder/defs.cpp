#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "defs.h"
using namespace std;

void Decoder::slowo_read()
{
    slowo_file.open("wynik.txt", ios::in);
    if(slowo_file.good()==false)
    {
        cout<<"There is nothing to decode. Please insert coded message in this folder and name it wynik.txt. Thank you."<<endl;
        exit(0);
    }
     getline(slowo_file,slowo);
     slowo_file.close();
}
void Decoder::read_alfabet()
{
    alfabet_file.open("alfabet.txt", ios::in);
    if(alfabet_file.good()==false)
    {
        cout<<"Alfabet is not declared";
        exit(0);
    }
    getline(alfabet_file,alfabet_content);
    alfabet_file.close();
}
void Decoder::decode()
{
    i=0;
    przesuniecie=13;
    j=alfabet_content.size()-1;
    while(i<slowo.size())
    {
        if(alfabet_content[j]==slowo[i]){wynik+=alfabet_content[j-przesuniecie];}
        while(alfabet_content[j]!=slowo[i])
        {
            j--;
            if(slowo[i]==alfabet_content[j] && j-przesuniecie<0)
            {
                    wynik+=alfabet_content[j-13+alfabet_content.size()-1];
                    continue;
            }
            if(alfabet_content[j]==slowo[i])
            {
                wynik+=alfabet_content[j-przesuniecie];
                break;
            }
            if(slowo[i]!=alfabet_content[j]&&j==0)
            {
                    wynik+=" ";
                    break;
            }
        }
        j=alfabet_content.size()-1;
        i++;
    }
}
void Decoder::wynik_make()
{
    cout<<wynik<<endl;
    wynik_file.open("wynik.txt", ios::out | ios::app);
    wynik_file<<endl<<wynik;
}
