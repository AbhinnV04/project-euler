#include<iostream>
#include<cmath>
using namespace std;

/*
* Finds the largest prime factors of a given number.
*
* @param n - The target number.
* @return - The largest prime factor of the number
*/
long long largestPrimeFactor(long long n) {
    long long largest_prime_factor = -1;
    for (long long i=2; i<=sqrt(n); i++) {
        while (n%i==0) {
            largest_prime_factor = i;
            n /= i;
        }
   }
    if (n > 2) {
        largest_prime_factor = n;
    }

    return largest_prime_factor;
}

int main(){
    // Objective: Find the largest Prime Factor of a number
    long long input = 600851475143;

    long long result = largestPrimeFactor(input);

    // Output the result
    cout << "The largest prime factor: " << result << endl;

}