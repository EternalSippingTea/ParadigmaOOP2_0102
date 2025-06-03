#include <iostream>
using namespace std;

class baseClass final {
    public:
        virtual void perkenalan() {
            cout << "Hallo saya function dari base class" << endl;
        }
};

class baseClass45 {
    public:
        virtual void perkenalan() {
            cout << "Hallo saya function dari base class" << endl;
        }
};
class derivedClass : public baseClass45 {
    public:
        void perkenalan() {
            cout << "Hallo saya function dari derived class" << endl;
        }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}