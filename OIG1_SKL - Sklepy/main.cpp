#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long int num;
typedef map<num, num> MapP;

struct Product
{
public:
    num quantity;
    num ID;
};

void Show( const Product &L )
{
     cout<<L.ID<<" "<<L.quantity<<endl;
}

int main()
{
    num wsk=0;
    num point,ID,quant;
    vector<Product> List;
    MapP Products_list;
    MapP::iterator it;
    int ile;
    cin>>ile;
    while(ile>0)
    {
        cin>>ID>>quant;
        it=Products_list.find(ID);
        if(it==Products_list.end())
        {
            Products_list[ID]=wsk;
            Product A={quant,ID};
            List.push_back(A);
            wsk++;
        }
        else
        {
            point=it->second;
            List[point].quantity+=quant;
        }
        ile--;
    }
    cout<<wsk<<endl;
    for_each(List.begin(), List.end(), Show);
    return 0;
}
