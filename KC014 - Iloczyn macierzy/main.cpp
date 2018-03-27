#include <iostream>

using namespace std;

void Wczytaj(int *tab, int t_size)
{
    for(int i=0; i<t_size; i++)
    {
        for(int j=0; j<t_size; j++)
        {
            cin>>tab[i*t_size + j];
        }
    }
}
void Calculate(const int *tab,const int *tab1,int t_size)
{
    int suma=0;
    for(int i=0; i<t_size; i++)
    {
        for(int j=0; j<t_size; j++)
        {
            for(int k=0; k<t_size; k++)
            {
                suma+=tab[i*t_size + k]*tab1[k*t_size + j];
            }
            cout<<suma<<" ";
            suma=0;
        }
    }
    cout<<endl;
}
int main()
{
    int size_m;
    while(cin>>size_m && size_m>0 && size_m<11)
    {
        //int *tab = new int [size_m];
        //int *tab1 = new int [size_m];
        int tab[size_m*size_m];
        int tab1[size_m*size_m];
        Wczytaj(tab,size_m);
        Wczytaj(tab1,size_m);
        Calculate(tab,tab1,size_m);
        //delete [] tab;
        //delete [] tab1;
        cin.get();
    }
        return 0;
}
