#include "AutoClicker.h"
#include <Windows.h>

AutoClicker::AutoClicker() {
    this->variableDelay = new VariableDelay();
}

void AutoClicker::leftClick() {
    
    //INPUT contains keyboard/mouse attributes to be sent to stream.
    INPUT input;
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    //Send Left Mouse Down
    SendInput(1, &input, sizeof(INPUT));
    
    input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    //Send Left Mouse Up
    SendInput(1, &input, sizeof(INPUT));
}

void AutoClicker::rightClick() {

    INPUT input;
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
    //Send Right Mouse Down
    SendInput(1, &input, sizeof(INPUT));

    input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
    //Send Right Mouse Up
    SendInput(1, &input, sizeof(INPUT));
}

void AutoClicker::delayedClick(int mouse) {
    
     Sleep(variableDelay->getSleepTime());
    
    if(mouse == 0) {
        leftClick();
    } else if (mouse == 1){
        rightClick();
    }

}