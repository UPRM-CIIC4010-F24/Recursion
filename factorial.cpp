#include<iostream>
#include<string>

using namespace std;

// 1! = 1
// 2! = 2*1 = 2* 1!
// 3! = 3* 2*1 = 3 * 2!
// 4! = 4* 3*2*1 = 4 * 3!
// 5! = 5*4*3*2*1 = 5 * 4!
// 6! = 6*5*4*3*2*1
// 7! = 7*6*5*4*3*2*1

int factorial(int n) {
     if(n == 1) {
        return 1;
     }
     return n * factorial(n - 1);
}

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << fibonacci(9)<< endl;
}