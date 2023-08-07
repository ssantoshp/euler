#include <iostream>

long fib(){
    long sum = 0;
    int a = 0;
    int b = 1;
    int result = 0;
    while(result < 4000000){
        result = a + b;
        a = b;
        b = result;
        if(result%2==0){
            sum += result;
        }
    }
    return sum;
} 

int main(){
    int sum=0;
    long result = fib();
    std::cout << result << std::endl;
}