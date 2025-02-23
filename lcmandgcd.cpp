#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lcmAndGcd(int a, int b)
	{
        int x = a;
        int y = b;
        
        while (y != 0)
		{
            int temp = y;
            y = x % y;
            x = temp;
        }
        
        int gcd = x;
        int lcm = (a / gcd) * b;

        return {lcm, gcd};
    }
};

