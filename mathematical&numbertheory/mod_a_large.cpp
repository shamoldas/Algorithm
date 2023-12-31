// C++ program to find (a^b) mod m for a large 'a'
#include<bits/stdc++.h>
using namespace std;

// utility function to calculate a%m
unsigned int aModM(string s, unsigned int mod)
{
    unsigned int number = 0;
    for (unsigned int i = 0; i < s.length(); i++)
    {
        // (s[i]-'0') gives the digit value and form
        // the number
        number = (number*10 + (s[i] - '0'));
        number %= mod;
    }
    return number;
}

// Returns find (a^b) % m
unsigned int ApowBmodM(string &a, unsigned int b,
                                  unsigned int m)
{
    // Find a%m
    unsigned int ans = aModM(a, m);
    unsigned int mul = ans;

    // now multiply ans by b-1 times and take
    // mod with m
    for (unsigned int i=1; i<b; i++)
        ans = (ans*mul) % m;

    return ans;
}

// Driver program to run the case
int main()
{
    string a = "987584345091051645734583954832576";
    unsigned int b=3, m=11;
    cout << ApowBmodM(a, b, m);
    return 0;
}
