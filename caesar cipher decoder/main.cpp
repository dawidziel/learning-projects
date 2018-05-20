#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "defs.h"
/*This program is decoding caesar cipher coded message from other program I made. It is object-oriented program.*/
using namespace std;

int main()
{
    Decoder d1;
    d1.slowo_read();
    d1.read_alfabet();
    d1.decode();
    d1.wynik_make();
    return 0;
}
