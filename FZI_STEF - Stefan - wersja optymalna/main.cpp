#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main()
{
    long long ilosc;
    scanf("%lld",&ilosc);
    long long suma=0;
    long long x;
    long long maks=0;
    for(int i=0; i<ilosc; i++)
    {
        scanf("%lld",&x);
        if(suma>=0) suma+=x;
        else suma=x;
        if(suma>maks) maks=suma;
    }
    printf("%lld",maks);
}
