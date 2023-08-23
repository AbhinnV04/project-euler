#include<iostream>
using namespace std;

int main() {
    /*OBJECTIVE - Find the sum of all the multiples of 3 or 5 below 1000*/    
    int LIMIT = 1000;
    int sum = 0;

    for (int i=0; i<LIMIT; i++) {
        if (i % 3 == 0 || i % 5 == 0) 
            sum += i;    
    }

    cout << "Sum of all multiples of 3 or 5: "<< sum;

    return 1;
}