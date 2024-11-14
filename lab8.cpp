#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void removeAndSort (vector<int>& vec) {
    for (auto it = vec.begin(); it != vec.end(); ) {
        if (*it % 2 == 0) {
            it = vec.erase(it); 
        }
        else {
            ++it;
        }
    }
    sort(vec.begin(), vec.end(), greater<int>());
}

int main()
{
    vector<int> vec = { 76, 15, 9, 2, 93, 71, 48, 46 };
    removeAndSort(vec);
    for (int x : vec) {
        cout << x << " ";
    }
    return 0;
}
