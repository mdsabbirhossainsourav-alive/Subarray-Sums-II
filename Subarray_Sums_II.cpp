#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }
    map<long long, int> freq;
    long long sum = 0;
    long long ans = 0;
    freq[0] = 1; 
    for(int i=0; i<n; i++) 
    {
        sum += arr[i];
        ans += freq[sum-x]; 
        freq[sum]++;
    }
    cout << ans << endl;
    return 0;
}