#include <iostream>
using namespace std;
int main()
{
    char a = 'a';
    int b = 125;
    float c = 12.5;
    bool d = true;
    string f = "Hello";
    char aa[4] = { 'a', 'b', 'c', 'd' };
    int bb[6] = { 1,2,3,4,5,6 };
    float cc[5] = { '1.2', '1.3', '1.4', '1.5', '1.6' };
    bool dd[3] { true, false, true,};
    string ff[4] = { "q", "w", "e", "r" };
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    cout << "d" << d << endl;
    cout << "aa[2] = " << aa[2] << endl;
    int size_a = sizeof(aa) / sizeof(aa[0]);
    for (int index = 0; index < size_a; index++)
    {
        cout << "char aa [" << index + 1 << "]" << aa[index] << endl;
        cout << "int bb [" << index + 1 << "]" << bb[index] << endl;
        cout << "float cc [" << index + 1 << "]" << cc[index] << endl;
        cout << "bool dd [" << index + 1 << "]" << dd[index] << endl;
        cout << "string ff [" << index + 1 << "]" << ff[index] << endl;
    }
}