#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,k;
        cin >> n;
        if(n%2==0)
        {
            cout << (n-1)/2 << " " << ((n-1)/2)+1 << " " << 1 << "\n";
        }
        else{
            k = (n-1)/2;
            if(k%2==0)
            {
                cout << k-1 << " " << k+1 << " " << 1 << "\n";
            }
            else{
                cout << k-2 << " " << k+2 << " " << 1 << "\n";
            }
        }
    }
}
