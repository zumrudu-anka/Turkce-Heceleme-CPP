#include "syllable.h"
#include <vector>

class Word{

    public:
        Word(wstring word);
        wstring getWord();
        vector<Syllable> getSyllables();
    private:
        const wchar_t* vowels = L"aeıioöuüAEIİOÖUÜ";
        vector<Syllable> syllables;
        wstring word;
        bool isVowel(wchar_t character);
};

#include "../src/word.cpp"