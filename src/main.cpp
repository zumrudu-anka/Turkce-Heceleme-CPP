// Created By
// Osman DURDAĞ
// osmandurdag@hotmail.com

#include "../include/sentence.h"
#include <locale.h>

int main(int argc, char** argv){
	setlocale(LC_ALL, "Turkish");

    wstring result = L"Hoşgeldiniz! Bilgisayar bilgiyi sayabilen cihaz demektir. Türkçeleştirdik Saatçimiz uygulaması. Altlık Türkçe korkmak";
    Sentence* sent = new Sentence(result);
    
    wcout<<endl<<L"Tüm Kelimeler"<<endl<<L"-----------------"<<endl<<endl;
    sent->printWords();
    wcout<<endl<<L"-----------------"<<endl<<endl;
    wcout<<L"Kelimelerdeki Heceler"<<endl<<L"---------------------"<<endl<<endl;

    for(Word i:sent->getWords()){
        wcout<<L"---------"<<endl;
        wcout<<endl<<L"Kelime : "<<i.getWord()<<endl<<endl;
        for(Syllable j : i.getSyllables()){
            wcout<<j.getSyllable()<<endl;
        }
        wcout<<endl<<L"-----------------"<<endl;
    }

    wcout<<endl<<L"Teşekkürler."<<endl;
    
    return 0;
}