#include <iostream>
#include <string>

int main(){
    
    // Ask the user to enter the Fibonaccii number they want to know
    std::string number;
    std::cout << "Which Fibonacci number you would like to know?" << std::endl;
    std::cin >> number;
    int n = std::stoi(number); // Convert the string into a integer

    // Do the calculation. This method can handle F(0) and F(1) also.
    int a[n+1];
    a[1] = 1;
    a[0] = 0;
    for(int i = 2; i <= n; i++){
        a[i] = a[i-1] + a[i-2];
    }

    // Output the result.
    std::cout << number + "-th Fibonacci numver is: " << a[n] <<std::endl;
    return 0;
}
