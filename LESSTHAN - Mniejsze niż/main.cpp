#include <iostream>
#include <string>
using namespace std;
int sprawdz(string a, string b);
int main()
{
    long int n;
    cin>>n;
    string *tab = new string [n];
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    int a;
    cin>>a;
    for(int j=0; j<a; j++)
    {
        int ile=0;
        string b;
        cin>>b;
        for(int d=0; d<n; d++)
        {
            //cout <<"Porownywana jest "<<tab[d] << " z " <<b<<endl;
            ile+=sprawdz(tab[d],b);
        }
        cout<<ile<<"\n";
    }
    delete [] tab;
}
int sprawdz(string a, string b)
{
    int dla=a.length();
    int dlb=b.length();
    //cout<<"Dlugosc A : "<<dla<<"\n";
    //cout<<"Dlugosc B : "<<dlb<<"\n";
    if(dla<dlb)
    {
       // cout<<"+1 BO "<<a<<" < " <<b<<endl;
        return 1;
    }
    else if (dla==dlb)
    {
        for(int i=0; i<dla; i++)
        {
            if(a[i]<b[i])
            {
                //cout<<"+1 BO "<<a[i]<<" < " <<b[i]<<endl;
                return 1;
            }
            else if (a[i]==b[i])
            {
                if(i!=(dla-1))
                {//cout<<"Kontynuujemy "<<a[i]<<" = " <<b[i]<<endl;
               }
                else
                    break;
            }
            else if (a[i]>b[i])
            {
                //cout<<"Przerywamy "<<a[i]<<" > " <<b[i]<<endl;
                return 0;
            }
        }
    }
    else
    {
       // cout<<"Przerywamy "<<a<<" > " <<b<<endl;
        return 0;
    }
}
