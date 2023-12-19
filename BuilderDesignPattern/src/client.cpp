// We use builder design pattern whenever we have a very complex object with lots of configurations
// E.g Vehicle - It has a lot of parts (complex object), and each part is first built (confgigured) and then assembled

#include "hpDesktopBuilder.hpp"
#include "dellDesktopBuilder.hpp"
#include "desktopDirector.hpp"

int main()
{
    HpDesktopBuilder *hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder *dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector *director1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector *director2 = new DesktopDirector(dellDesktopBuilder);

    Desktop *desktop1 = director1->buildDesktop();
    Desktop *desktop2 = director2->buildDesktop();

    desktop1->showSpecs();
    desktop2->showSpecs();

    return 0;
}