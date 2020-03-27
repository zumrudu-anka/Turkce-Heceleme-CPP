#include <iostream>

using namespace std;

class Syllable{
    private:
        wstring syllable;

    public:
        Syllable(wstring syllable);
        wstring getSyllable();
};

#include "../src/syllable.cpp"