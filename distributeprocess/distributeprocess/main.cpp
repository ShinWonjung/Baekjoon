#include <iostream>

using namespace std;

int main(void)
{
    int test, a, b;
    cin >> test;
    
    for(int t = 0; t < test; t++)
    {
        cin >> a >> b;
        int ans = a;
        for(int i = 0; i < b - 1; i++)
        {
            ans = (ans * a) % 10;
        }
        ans %= 10;
        if(ans == 0)
            cout << "10" << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}
