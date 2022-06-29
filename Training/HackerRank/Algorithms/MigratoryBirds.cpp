#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, X;
    cin >> n;
    int arr[6] = {0};   // the type is guaranteed to be 1...5
    
    for (int i = 0; i < n; i++) {
        cin >> X;
        arr[X]++;
    }
    cout << distance(arr, max_element(arr, arr + n)) << endl;
    
    return 0;
}
