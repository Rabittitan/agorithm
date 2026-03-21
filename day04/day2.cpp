#include <iostream>

using namespace std;

int main()
{
    const int max = 100000;
    int n, k, a[max];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (int i = k; i < n; i++)
        a[i] = a[i + 1];
    n--;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;

    return 0;
}