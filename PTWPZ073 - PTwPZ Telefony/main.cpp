#include <iostream>
#include <map>
#include <string>

using namespace std;



void Numer (string &s)
{
    map<char,int>  Alfabet;
    Alfabet['A']=2; Alfabet['B']=2; Alfabet['C']=2;
    Alfabet['D']=3; Alfabet['E']=3; Alfabet['F']=3;
    Alfabet['G']=4; Alfabet['H']=4; Alfabet['I']=4;
    Alfabet['J']=5; Alfabet['K']=5; Alfabet['L']=5;
    Alfabet['M']=6; Alfabet['N']=6; Alfabet['O']=6;
    Alfabet['P']=7; Alfabet['Q']=7; Alfabet['R']=7; Alfabet['S']=7;
    Alfabet['T']=8; Alfabet['U']=8; Alfabet['V']=8;
    Alfabet['W']=9; Alfabet['X']=9; Alfabet['Y']=9; Alfabet['Z']=9;
    int dl=s.length();
    for(int i=0;i<dl;i++)
    {
        cout<< Alfabet.find(s[i])->second;

    }
    cout<<endl;
}

int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        string a;
        cin>>a;
        Numer(a);
        test--;
    }
}
