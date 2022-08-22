#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int h{ 0 }, m{ 0 }, s{ 0 }, b{ 0 }, var{ 0 };

    while (var == 0)
    {
        cout << "Enter hour: ";
        cin >> h;
        cout << "Enter minute: ";
        cin >> m;
        cout << "Enter second: ";
        cin >> s;
        if (h < 24 && m < 60 && s < 60)
        {
            var++;
        }
        else
        {
            system("cls");
        }
    }
    while (b == 0)
    {
        system("cls");
        cout << h << " : " << m << " : " << s << endl;
        Sleep(1000);
        s++;

        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m > 59)
        {
            m = 0;
            h++;
        }
        if (h > 24)
        {
            h = 0;
        }
    }
    return 0;
}
