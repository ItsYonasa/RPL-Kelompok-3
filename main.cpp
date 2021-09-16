#include <bits/stdc++.h>

using namespace std;

int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int N;
    int input, tempS;
    int a, b;
    vector<tuple<int, int, int>> rumah;

    cin >> N;
    int i = 0;
    while (N--)
    {
        cin >> input;
        rumah.push_back(make_tuple(getSum(input), i, input));
        i++;
    }

    sort(rumah.begin(), rumah.end());
    int selis = INT_MAX;
    for (int i = 0; i < rumah.size(); i++)
    {
        if (i < rumah.size() - 1)
        {
            tempS = get<0>(rumah[i + 1]) - get<0>(rumah[i]);
            if (tempS < selis)
            {
                a = i;
                b = i + 1;
                selis = tempS;
            }
        }
    }

    cout << get<0>(rumah[a]) << " " << get<1>(rumah[a]) << " " << get<2>(rumah[a]) << endl;
    cout << get<0>(rumah[b]) << " " << get<1>(rumah[b]) << " " << get<2>(rumah[b]) << endl;

    return 0;
}
