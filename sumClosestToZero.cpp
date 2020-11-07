/*
Find Pair of numbers having sum closest to zero

3
6
1 2 3 4 5 6
6
-3 -4 5 6 -1 2
6
-4 -3 -1 4 5 6


1 -3 -4 4 5 6


-> if all number are positive then two smallest numbers 
-> if all numbers are negative then largest 2 will be our answer
-> 

sort
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

void read(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cin >> arr[i];
    }
}

struct Comp
{
    bool operator()(const int &a, const int &b) const
    {
        return abs(a) < abs(b);
    }
};

class Solution
{
public:
    void solve()
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        read(arr);
        sort(arr.begin(), arr.end(), Comp());
        int best = std::numeric_limits<int>::max();
        for (int i = 1; i < n; ++i)
        {
            best = min(best, abs(arr[i - 1] + arr[i]));
        }
        cout<<best<<"\n";
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solution s;
        s.solve();
    }
}