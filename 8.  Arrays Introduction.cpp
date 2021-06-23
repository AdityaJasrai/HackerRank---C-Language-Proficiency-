#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N, x;
    vector<int> v;
    
    cin >> N;
    while (N-- > 0)
    {
        cin >> x;
        v.push_back(x);
    }
    
    for (auto i = v.rbegin(); i != v.rend(); ++i)
        cout << *i << " ";
    cout << endl;
    
    return 0;
}
