#include <iostream>
#include <vector>
#include <cmath>

#define PI 3.1415

using namespace std;

double calculateBER(const std::vector<int>& sent, const std::vector<int>& received);

class AWGSimulator {
private:
    double _frequency;
    double _amplitude;
    int _samples;
    std::vector<double> signalBuffer;

public:
    AWGSimulator(double frequency, double amplitude, int samples) :
        _frequency(frequency), _amplitude(amplitude), _samples(samples), signalBuffer(_samples, 0) {}

    std::vector<double> getSignal() {
        return signalBuffer;
    }

    void generateSineWave() {
        signalBuffer.clear();
        signalBuffer.reserve(_samples);
        for (int i = 0; i < _samples; i++) {
            signalBuffer.push_back(_amplitude * sin(2 * PI * _frequency * i / _samples));
        }
    }
};

int main() {
    //AWGSimulator awg(1.0, 5.0, 10);
    //awg.generateSineWave();
    //std::vector<double> signal = awg.getSignal();

    //for (size_t i = 0; i < signal.size(); i++) {
    //    std::cout << "Sinus Wave " << i << ": " << signal[i] << std::endl;
    //}


     std::vector<int> sent = {1, 1, 1, 1};
     std::vector<int> received = {0, 0, 0, 0};
     try {
         double ber = calculateBER(sent, received);
         std::cout << "BER: " << ber << std::endl;
     } catch (const std::exception& e) {
         std::cerr << e.what() << std::endl;
     }

    return 0;
}

double calculateBER(const std::vector<int>& sent, const std::vector<int>& received) {
    if (sent.size() != received.size()) {
        throw std::invalid_argument("Vectors must be of the same size");
    }

    int numErr = 0;
    int numBit = sent.size();
    for (int i = 0; i < numBit; i++) {
        if (sent[i] != received[i]) {
            numErr++;
        }
    }
    return double(numErr) / double(numBit);
}
