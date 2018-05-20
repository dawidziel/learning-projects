#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Decoder
{
    public:
    int i,j,przesuniecie;
    string wynik,slowo,alfabet_content;
    fstream alfabet_file;
    fstream slowo_file;
    fstream wynik_file;
    void slowo_read();
    void read_alfabet();
    void decode();
    void wynik_make();

};


#endif // DEFS_H_INCLUDED
