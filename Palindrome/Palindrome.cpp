#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
string str;
string b;
int i;
int main(){
    cout << "Wprowadz slowo: ";
    cin >> str;
    i=str.size();
    i--;
    while(i>=0){
        b+=str[i];
        i--;}
    if(str!=b)
        cout << "Podane slowo nie jest palindromem";
    if(str==b)
        cout << "Podane slowo to palindrom";
    return 0;}
