#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include <string>
int main()
{
    string str = "Hello, world!";
    size_t pos = str.find("o"); // 查找字符 'o' 的第一次出现位置

    if (pos != string::npos)
    { // 如果找到了
        cout << "Found 'o' at position: " << pos << endl;
    }
    else
    { // 如果未找到
        cout << "'o' not found in the string." << endl;
    }

    // 打印 string::npos 的值作为参考
    cout << "Value of string::npos: " << string::npos << endl;

    cout << string::npos << endl;

    using pii = pair<int, int>;
    vector<pii> f(100, pii(2, 3));
    for (int i = 0; i < 100; i++)
    {
        f[i] = make_pair(i, i + 1);

        cout << f[i].first << " " << f[i].second << endl;
    }
    return 0;
}