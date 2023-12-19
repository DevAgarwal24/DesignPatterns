#include <iostream>
using namespace std;

class IButton {
public:
    virtual void press() = 0;
};

class MacButton : public IButton {
public:
    void press() {
        cout << "Mac Button Pressed\n";
    }
};

class WindowsButton : public IButton {
public:
    void press() {
        cout << "Windows Button Pressed\n";
    }
};

class ITextBox {
public:
    virtual void showText() = 0;
};

class MacTextBox : public ITextBox {
public:
    void showText() {
        cout << "Mac Text Box\n";
    }
};

class WindowsTextBox : public ITextBox {
public:
    void showText() {
        cout << "Windows Text Box\n";
    }
};

class IFactory {
public:
    virtual IButton* CreateButton() = 0;
    virtual ITextBox* CreateTextBox() = 0;
};

class MacFactory : public IFactory {
public:
    IButton* CreateButton() {
        return new MacButton();
    }

    ITextBox* CreateTextBox() {
        return new MacTextBox();
    }
};

class WindowsFactory : public IFactory {
public:
    IButton* CreateButton() {
        return new WindowsButton();
    }

    ITextBox* CreateTextBox() {
        return new WindowsTextBox();
    }
};

class GUIAbstractFactory {
public:
    static IFactory* CreateFactory(string osType);
};

IFactory* GUIAbstractFactory::CreateFactory(string osType) {
    IFactory *fact = NULL;

    if (osType == "Mac") {
        fact = new MacFactory();
    } else if (osType == "Win") {
        fact = new WindowsFactory();
    } else {
        cout << "Wrong Input\n";
    }

    return fact;
}

int main()
{
    cout << "Enter your machine OS (Mac/Win): ";
    string osType;
    cin >> osType;

    IFactory *fact = GUIAbstractFactory::CreateFactory(osType);
    if (fact == NULL) return 0;

    IButton *button = fact->CreateButton();
    button->press();

    ITextBox *textBox = fact->CreateTextBox();
    textBox->showText();

    return 0;
}