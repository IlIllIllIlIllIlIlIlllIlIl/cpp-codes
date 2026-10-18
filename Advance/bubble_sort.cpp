#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>& arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << '\n';

    return 0;
}
