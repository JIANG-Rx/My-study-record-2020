#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter chars; enter # to stop:\n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl
         << count << " chars read";
    return 0;
}
