#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 7};

    sort(nums.begin(), nums.end()); // Sorts in ascending order

    for (int x : nums) cout << x << " ";
}
