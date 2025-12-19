#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    
    long long a, b, c;
    long long result;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    if(scanf("%lld %lld %lld", &a, &b, &c)!=3) return 0;


    result = (a*a) +c;


    cout << "The result of the operation is: " << result;
    return 0;
}