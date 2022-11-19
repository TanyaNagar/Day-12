// 212-->is palindrome ..as it is same from both side
#include <iostream>
using namespace std;
// 0--> not pallindrome
// 1--> pallindrome
bool isPalindrome(int x)
{
    long int sum = 0;
    int temp = x;
    while (x > 0)
    {
        int reverse = x % 10; // provides the last digit
        sum = sum * 10 + reverse;
        x = x / 10; // starting digit except thr last digit
    }
    if (sum == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int main()
{
    int n;
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "is palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }
}