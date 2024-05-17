#include <iostream>

int main() 
{
    long sum_of_squares = 0;
    int sum = 0;
    long square_of_sum;

    // Calculate the sum of squares and the sum of numbers from 1 to 100.
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        sum_of_squares += i * i;
    } 

    // Calculate the square of the sum.
    square_of_sum = sum * sum;

    // Calculate the difference between the square of sum and sum of squares.
    long sum_square_difference = square_of_sum - sum_of_squares;

    // Output the result.
    std::cout << "The difference between the sum of squares and the square of sum: " << sum_square_difference << std::endl;

    return 0;
}
