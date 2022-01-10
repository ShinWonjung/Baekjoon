#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    while(1)
    {
        string s;
        cin >> s;
        if(s == "0") return 0;
        int len = s.length();
        stack<char>stack;
        for(int i = 1; i <= len/2; i++)
        {
            stack.push(s.front());
            s.erase(0, 1);
        }
        if(s.length() != stack.size())
            s.erase(0, 1);
        bool flag = true;
        for(char c : s)
        {
            if(stack.top() != c)
            {
                cout << "no" << '\n';
                flag = false;
                break;
            }
            stack.pop();
        }
        if(flag)
            cout << "yes" <<'\n';
    }
}
