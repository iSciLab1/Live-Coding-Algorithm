
#include <iostream>
#include <vector>
using namespace std;

void sendSignal(const std::vector<int>& signal) {
    // Sendet ein Signal an das Gerät
    for (int bit : signal) {
        std::cout << "Sending bit: " << bit << std::endl;
        int input = 0;
        if (bit != 0 && bit != 1) {
            std::cerr << "Error: Invalid bit detected!" << std::endl;
            std::cerr << "Corrector: Enter the correct bit!" << std::endl;
            std::cin >> input;
            bit = input;
            std::cout << "Corrected bit: " << input << std::endl;
        }
    }
    std::cout << "Signal sent successfully." << std::endl;
}

int fibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }

}

string reverseString(string s) {
    string rs;
    for (int i = s.size() - 1; i >= 0; i--) {

        rs += s[i];
    }
    return rs;

}


int main() {
    //std::vector<int> signal = { 1, 0, 1, 2, 0, 1 }; 
    //sendSignal(signal);

    //std::cout << fibonacci(7) << std::endl;
    std::cout << reverseString("hello") << std::endl;

    return 0;
}
