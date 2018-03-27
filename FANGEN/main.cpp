#include <iostream>
#include <cmath>

using namespace std;

class Wiatraczek
{
private:
    int dl;
    bool lewy;
public:
    Wiatraczek(int a)
    {
        if(a<0)
        {
            dl=abs(a);
            lewy=true;
        }
        else
        {
            dl=a;
            lewy=false;
        }
    };
    void Show()
    {
        string segm(dl,'.');
        string wiatr[dl];
        string wiatr1[dl];
        for(int i=0; i<dl; i++)
        {
            wiatr[i]=segm;
            wiatr1[i]=segm;
            for(int j=0; j<=i; j++)
            {
                wiatr[i][j]='*';
                wiatr1[i][dl-j-1]='*';
            }
        }
        if(!lewy)
        {
            for(int i=0; i<dl; i++)
            {
                cout<<wiatr[i]<<wiatr[dl-i-1]<<endl;
            }
            for(int i=0; i<dl; i++)
            {
                cout<<wiatr1[i]<<wiatr1[dl-i-1]<<endl;
            }
        }
        else
        {
            for(int i=0; i<dl; i++)
            {
                cout<<wiatr1[dl-i-1]<<wiatr1[i]<<endl;
            }
            for(int i=0; i<dl; i++)
            {
                cout<<wiatr[dl-i-1]<<wiatr[i]<<endl;
            }
        }

    }
};


int main()
{
    int a;
    while(cin>>a)
    {
        Wiatraczek W(a);
        W.Show();
    }


    return 0;
}
