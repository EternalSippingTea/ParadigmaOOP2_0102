#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() final {
            cout << "Hallo saya function dari base class" << endl;
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan45() {
            cout << "Hallo saya function dari derived class" << endl;
        }
};

int main() {
    derivedClass a;
    a.perkenalan45();

    return 0;
}