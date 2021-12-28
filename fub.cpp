#include <iostream>
using std::cout;
void fib(int n)
{
    int a = 0, b = 1;
    if (n >= 0)
        cout << a << " ";
    if (n >= 1)
        cout << b << " ";
    for (int i = 2; i <= n; i++) {
        cout << a + b << " ";
        a = b;
        b= a+ b;

    }
}
 
// Driver code
int main()
{
    fib(9);
    return 0;
}
