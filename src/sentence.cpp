Sentence::Sentence(wstring sentence){
    for(int i = 0; i < sentence.size(); i++){
        bool isSplitter = false;
        for(int j = 0; j < wcslen(this->splitters); j++){
            if(sentence[i] == splitters[j]){
                isSplitter = true;
            }
        }
        if(!isSplitter){
            int endpos = i;
            isSplitter = false;
            do
            {
                endpos++;
                for(int j = 0; j < wcslen(splitters); j++){
                    if(sentence[endpos] == splitters[j]){
                        isSplitter = true;
                    }
                }
            } while (!isSplitter && endpos < sentence.size());
            int characterCountInWord = endpos - i;
            wchar_t* tempword = new wchar_t[characterCountInWord + 1];
            for(int j = 0; j < characterCountInWord; j++){
                tempword[j] = sentence[i + j];
            }
            tempword[characterCountInWord] = L'\0';
            this->words.push_back(Word(tempword));
            this->wordCount++;
            i = endpos;
            delete tempword;
        }
    }
}

vector<Word> Sentence::getWords(){
    return this->words;
}

int Sentence::getWordCount(){
    return this->wordCount;
}

void Sentence::printWords(){
    for(int i = 0; i < this->wordCount; i++){
        wcout<<this->words[i].getWord()<<endl;
    }
}