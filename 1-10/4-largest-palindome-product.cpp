#include <iostream>
using namespace std;

/*
 * Checks whether a number n is a palindrome or not.
 *
 * @param n - target number
 * @return bool - 1 if n is a palindrome, else 0.
 */
bool palindrome(int n)
{
    if (n < 0)
    {
        return false;
    }

    int original = n;
    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return original == rev;
}

int main()
{
    int largest_palindrome = 0;

    for (int i = 999; i >= 100; i--)
    {
        for (int j = i; j >= 100; j--)
        {
            int product = i * j;
            if (palindrome(product) && product > largest_palindrome)
            {
                largest_palindrome = product;
            }
        }
    }

    cout << "Largest palindromic product: " << largest_palindrome << endl;

    return 0;
}
