#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Show(const int &x)
{
    cout<<x<<endl;
}
int main()
{
    int ilosc_miast;
    cin>>ilosc_miast;
    vector<int> zyski;
    int wplyw;
    while(ilosc_miast>0)
    {
        cin>>wplyw;
        zyski.push_back(wplyw);
        ilosc_miast--;
    }
//Sprawdzenie poprawnoœci wprowadzonych danych
/*
    cout<<"Zyski:"<<endl;
    for_each(zyski.begin(),zyski.end(),Show);
*/
    vector<int>::iterator it;
    vector<int>::iterator it2;
    vector<int>::iterator it3;
    vector<int> wplywy_maks;
    wplywy_maks.push_back(0);
    for(it=zyski.begin(); it!=zyski.end(); it++)
    {
        if(*it<0) continue;
        else
        {
            wplywy_maks.push_back(*it);
            for(it2=zyski.end()-1; it2!=it; it2--)
            {
                if(*it2<0) continue;
                else
                {
                    wplyw=*it;
                    it3=it2;
                    while(it3!=it)
                    {
                        wplyw+=*it3;
                        it3--;
                    }
                    // cout<<"wplywy: "<<wplyw<<endl;
                    wplywy_maks.push_back(wplyw);
                }
            }
        }
    }
    vector<int>::iterator iterat;
    iterat=max_element(wplywy_maks.begin(),wplywy_maks.end());
    int maks=distance(wplywy_maks.begin(),iterat);
    cout<<"Max element distance: "<<distance(wplywy_maks.begin(),iterat)<<endl;
    cout<<"Bilans :\n";
    for_each(wplywy_maks.begin(),wplywy_maks.end(),Show);
    cout<<wplywy_maks[maks]<<endl;
}
