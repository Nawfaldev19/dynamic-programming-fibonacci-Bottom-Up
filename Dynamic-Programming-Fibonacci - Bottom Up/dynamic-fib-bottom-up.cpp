#include <iostream>
#include<vector>

using namespace std;

int fibDP(int n)
{
    vector<int> vect(n + 1, { -1 });
    vect[0] = 0; vect[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        vect[i] = vect[i - 1] + vect[i - 2];
    }
    return vect[n];
}

int main()
{
    //solved in leetcode-beats 100%
    cout << fib(6);

}
