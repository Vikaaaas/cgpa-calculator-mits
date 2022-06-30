#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    float u=0,l=0;
    for(int i=0;i<n;i++)
    {
        float a;cin>>a;
        float b;cin>>b;
        u+=(a*b);
        l+=b;
    }
        
    cout<<u/l;

    return 0;
}
