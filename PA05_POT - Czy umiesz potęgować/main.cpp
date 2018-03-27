#include <iostream>

using namespace std;
int main()
{
    int a;
    cin>>a;
    int pod[a],wyk[a];
    for(int i=0; i<a; i++)
    {
        cin>>pod[i]>>wyk[i];
    }
    for(int i=0; i<a; i++)
    {
        if(wyk[i]==0) cout<<1<<endl;
        else
        {
            switch(pod[i]%10)
            {
            case 0:
            {
                cout<< 0<<endl;
                break;
            }
            case 1:
            {
                cout<< 1<<endl;
                break;
            }
            case 2:
                switch(wyk[i]%4)
                {
                case 0:
                    cout<<6<<endl;
                    break;
                case 1:
                    cout<<2<<endl;
                    break;
                case 2:
                    cout<<4<<endl;
                    break;
                case 3:
                    cout<<8<<endl;
                    break;
                }break;
            case 3:
                switch(wyk[i]%4)
                {
                case 0:
                    cout<<1<<endl;
                    break;
                case 1:
                    cout<<3<<endl;
                    break;
                case 2:
                    cout<<9<<endl;
                    break;
                case 3:
                    cout<<7<<endl;
                    break;
                }break;
            case 4:
                switch(wyk[i]%2)
                {
                case 0:
                    cout<<6<<endl;
                    break;
                case 1:
                    cout<<4<<endl;
                    break;
                }break;
            case 5:
                cout<< 5<<endl;
                break;
            case 6:
                cout<< 6<<endl;
                break;
            case 7:
                switch(wyk[i]%4)
                {
                case 0:
                    cout<<1<<endl;
                    break;
                case 1:
                    cout<<7<<endl;
                    break;
                case 2:
                    cout<<9<<endl;
                    break;
                case 3:
                    cout<<3<<endl;
                    break;
                }break;
            case 8:
                switch(wyk[i]%4)
                {
                case 0:
                    cout<<6<<endl;
                    break;
                case 1:
                    cout<<8<<endl;
                    break;
                case 2:
                    cout<<4<<endl;
                    break;
                case 3:
                    cout<<2<<endl;
                    break;
                }break;
            case 9:
                switch(wyk[i]%2)
                {
                case 0:
                    cout<<1<<endl;
                    break;
                case 1:
                    cout<<9<<endl;
                    break;
                }break;
            }
        }
    }
    return 0;
}
