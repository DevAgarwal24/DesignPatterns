#ifndef __DESKTOP_HPP__
#define __DESKTOP_HPP__

#include <string>
using namespace std;

// Product
// Parts for the desktop and the setters
class Desktop {
    string monitor;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherBoard;

public:
    void setMonitor(string pMonitor);
    void setKeyboard(string pKeyboard);
    void setMouse(string pMouse);
    void setSpeaker(string pSpeaker);
    void setRam(string pRam);
    void setProcessor(string pProcessor);
    void setMotherBoard(string pMotherBoard);

    void showSpecs();
};

#endif