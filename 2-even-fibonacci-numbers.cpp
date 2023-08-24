#include <iostream>
using namespace std;

int main()
{
    // OBJECTIVE: Considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
    int prev_1 = 1;
    int prev_2 = 2;
    int curr = 0;
    int LIMIT = 4000000; // Limit given in the question
    long long sum = 0; 

    while (prev_2 <= LIMIT)
    {
        if (prev_2 % 2 == 0)
            sum += prev_2;

        curr = prev_1 + prev_2;
        prev_1 = prev_2;
        prev_2 = curr;
    }

    // @return total sum of all even fibonacci numbers.
    cout << sum;
}
