#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str = "a-12b34-5";
    int num = 0;
    bool negative = false;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '-')
        {
            negative = true;
        }

        if(isdigit(str[i]))
        {
            num = num * 10 + (str[i] - '0');
        }

        if(!isdigit(str[i]) && num != 0)
        {
            if(negative)
                num = -num;

            cout << num << endl;

            num = 0;
            negative = false;
        }
    }
}