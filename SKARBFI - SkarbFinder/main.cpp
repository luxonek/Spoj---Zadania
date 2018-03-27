#include <iostream>

using namespace std;

class Piechur
{
private:
    int x;
    int y;
public:
    Piechur(): x(0), y(0) {};
    void Ruch(int a, int b)
    {
        if(a==0) y+=b;
        else if(a==1) y-=b;
        else if (a==2) x-=b;
        else if (a==3) x+=b;
    }
    void Show()
    {
        if(x==0)
        {
            if(y==0) cout<<"studnia"<<endl;
            else
            {
                if(y>0) cout<<"0 "<<y<<endl;
                else cout<<"1 "<<-y<<endl;
            }
        }
        else
        {
            if( y==0 )
            {
                if(x<0)
                {
                    cout<<"2 "<<-x<<endl;
                }
                else
                {
                    cout<<"3 "<<x<<endl;
                }
            }
            else if(x<0)
            {
                if(y<0)
                {
                    cout<<"1 "<<-y<<endl;
                    cout<<"2 "<<-x<<endl;
                }
                else
                {
                    cout<<"0 "<<y<<endl;
                    cout<<"2 "<<-x<<endl;
                }
            }
            else
            {
                if(y<0)
                {
                    cout<<"1 "<<-y<<endl;
                    cout<<"3 "<<x<<endl;
                }
                else
                {
                    cout<<"0 "<<y<<endl;
                    cout<<"3 "<<x<<endl;
                }

            }
        }
    }
};

int main()
{
    int x;
    int kierunek;
    int kroki;
    cin>>x;
    while(x>0)
    {
        Piechur p1;
        int wskazowki;
        cin>>wskazowki;
        while(wskazowki>0)
        {
            cin>>kierunek>>kroki;
            p1.Ruch(kierunek,kroki);
            wskazowki--;
        }
        p1.Show();
        x--;
    }
}
