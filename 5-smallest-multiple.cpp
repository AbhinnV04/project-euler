#include <iostream>
using namespace std;

int main()
{
    // Initialize the starting number to 20, as it needs to be divisible by all numbers from 1 to 20.
    long num = 20;
    bool found = false;

    do
    {
        // Assume the current number is divisible by all numbers.
        found = true;

        // Check divisibility by each number from 2 to 20.
        for (int i = 2; i <= 20; i++)
        {
            // If the current number is not divisible by i, update num to the next multiple that is divisible by i.
            if (num % i != 0)
            {
                found = false;
                // Calculate the next multiple of i that is larger than the current num.
                num += i - (num % i);
                break; // Break the loop since the number is updated.
            }
        }
    } while (!found);

    // Output the result.
    cout << "The smallest number divisible by all numbers from 1 to 20: " << num << endl;

    return 0;
}
