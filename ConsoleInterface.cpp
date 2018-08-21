#include "ConsoleInterface.h"
#include <iostream>

int main() {
    AutoClicker * autoClicker = new AutoClicker();
    
    int delay;
    int delta;

    std::cout << "Please Enter Your Desired Click Interval" << std::endl;
    std::cin >> delay;

    std::cout << "Please Enter Your Desired Human Error Delay" << std::endl;
    std::cin >> delta;

    autoClicker->variableDelay->setDelay(delay);
    autoClicker->variableDelay->setDelta(delta);

    while(true) {
        autoClicker->delayedClick(0);
    }

    return 0;
}