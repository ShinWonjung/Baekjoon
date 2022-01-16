#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>vec(9);
    for(int i=0;i<9;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int sum=0;
    for(int i=0;i<7;i++)
    {
        cout<<vec[i]<<'\n';
    }
    return 0;
}
