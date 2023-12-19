// This is the builder class to build objects

#ifndef __DESKTOPBUILER_HPP__
#define __DESKTOPBUILER_HPP__

#include "desktop.hpp"

// Pure virtual functions so that our concrete builders know which all function to implement
class DesktopBuilder {
protected:
    Desktop *desktop;
public:
    DesktopBuilder() {
        desktop = new Desktop();
    }
    virtual void buildMonitor() = 0;
    virtual void buildKeyboard() = 0;
    virtual void buildMouse() = 0;
    virtual void buildSpeaker() = 0;
    virtual void buildRam() = 0;
    virtual void buildProcessor() = 0;
    virtual void buildMotherBoard() = 0;

    virtual Desktop* getDesktop() {
        return desktop;
    }

    ~DesktopBuilder() {
        delete desktop;
    }
};

#endif