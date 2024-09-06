#include <iostream>
using namespace std;
class Mother {
public:
    virtual void display() {
        cout << "Message from Mother" << endl;
    }
};
class Daughter : public Mother {
public:
    void display()  {
        Mother::display();
        cout << "Message from Daughter" << endl;
    }
};

int main() {
    Daughter daughter;
    daughter.display();

    return 0;
}
