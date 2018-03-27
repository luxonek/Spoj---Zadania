#include <iostream>
#include<string>

using namespace std;
void dodawanie(string a, string b);
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        string b,c;
        cin>>b>>c;
        dodawanie(b,c);
    }
    return 0;
}

void dodawanie(string a,string b)
{
    int taba[1002],tabb[1002];
    int tabc[1002]={0};
    int la=a.length();
    int lb=b.length();
    int maks=(la>lb?la:lb);
    for(int i=0;i<la;i++)
    {
        taba[i]=(a[la-i-1]-'0')%10;
    }
    for(int i=0;i<lb;i++)
    {
        tabb[i]=(b[lb-i-1]-'0')%10;
    }
    int k=0;
    for(int i=0;i<=maks;i++)
    {
        tabc[i]=taba[i]+tabb[i]+tabc[i];
        if(tabc[i]>=10)
        {
            tabc[i]%=10;
            tabc[i+1]=1;
            if(i==maks-1) k=1;
        }
    }
    int i=(k==1?maks:maks-1);
    for(i;i>=0;i--)
    {
        cout<<tabc[i];
    }
    cout<<endl;

}
