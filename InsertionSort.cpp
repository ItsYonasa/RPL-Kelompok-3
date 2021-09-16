#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int h[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int pos = i;
        while ((pos > 0) && (h[pos] < h[pos - 1]))
        {
            int temp = h[pos];
            h[pos] = h[pos - 1];
            h[pos - 1] = temp;
            pos = pos - 1;
        }
    }
}

int main()
{
    int h[] = {5, 5, 6, 9, 8, 3, 4, 7, 6, 2};
    int N = sizeof(h) / sizeof(h[0]);
    InsertionSort(h, N);
    for (int i = 0; i < N; i++)
    {
        cout << h[i] << " ";
    }
}