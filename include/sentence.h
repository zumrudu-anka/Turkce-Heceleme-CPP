#include "word.h"

class Sentence{
    
    public:
        Sentence(wstring sentence);
        vector<Word> getWords();
        int getWordCount();
        void printWords();

    private:
        const wchar_t* splitters = L" ,;.?!";
        vector<Word> words;
        int wordCount = 0;
};

#include "../src/sentence.cpp"
