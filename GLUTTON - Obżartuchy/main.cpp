#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    long double pudelka[a];
    for(int i=0; i<a; i++)
    {
        long double ilosc=0;
        long int obzartuchy, ciastka;
        cin>>obzartuchy>>ciastka;
        long double czas[obzartuchy];
        for(int j=0; j<obzartuchy; j++)
        {
            cin>>czas[j];
            ilosc=ilosc+floor((24*3600/czas[j]));
        }
        pudelka[i]=ceil(double (ilosc)/double(ciastka));
    }
    for(int i=0; i<a; i++)
    {
        cout<<pudelka[i]<<endl;
    }
    return 0;
}
