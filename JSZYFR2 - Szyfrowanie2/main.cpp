#include <iostream>
#include <vector>

using namespace std;

const int PRIME_NUM[5] = {127,131,137,139,149}; // wypisanie liczb pierwszych z zakresu 120-150

void check(int *tab, vector<int> wynik, int n) // funkcja deszyfrujaca
{
    int a=0;
    int ile=0;
    int prime_number=0;
    for(int i=0; i<5 ; i++ )
    {
        wynik.clear();
        for(int j=0; j<n; j++)
        {
            a=tab[j]%PRIME_NUM[i];
            if(a>='A' && a <='Z')
            {
                wynik.push_back(a);
            }
            if(wynik.size()==n)
            {
                ile++;
                prime_number=i;
            }
        }

    }
    if(ile==1)
    {
        cout<<PRIME_NUM[prime_number]<<" ";
        for(int j=0; j<n; j++)
        {
            a=tab[j]%PRIME_NUM[prime_number];
            cout<<(char)a;
        }
        cout<<endl;

    }
    else
    {
        cout<<"NIECZYTELNE";
    }
}
int main()
{
    int x;
    cin>>x;
    while(x>0)
    {
        int a;
        cin>>a;
        int *tab = new int [a];
        vector<int> wynik;
        for(int i=0; i<a; i++) cin>>tab[i];
        check(tab,wynik,a);
        delete []tab;
        x--;
    }
    return 0;
}
