#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int brPoena;
    int maxBrPoena = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> brPoena;
        maxBrPoena = max(maxBrPoena, brPoena);
        cout << maxBrPoena << '\n';
    }

    return 0;
}