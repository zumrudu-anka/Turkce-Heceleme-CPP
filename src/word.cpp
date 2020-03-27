Word::Word(wstring word){
    this->word = word;
	for(int chIndexForFindVowel = 0, indexForSplit = 0; chIndexForFindVowel < this->word.size(); chIndexForFindVowel++){
		if(this->isVowel(this->word[chIndexForFindVowel])){
			// Bulunan sesli harf kelimenin sonunda veya sondan ikinci harf ise
			if(chIndexForFindVowel == this->word.size() - 1 || chIndexForFindVowel == this->word.size() - 2){ 
				int characterCountForSyllable = this->word.size() - chIndexForFindVowel + 1;
				wstring temp = this->word.substr(indexForSplit, characterCountForSyllable);
				this->syllables.push_back(Syllable(temp));
			}
			// Bulunan sesli harften sonra gelen harf sesli ise (Saat)
			else if(this->isVowel(this->word[chIndexForFindVowel + 1])){
				wstring temp = this->word.substr(indexForSplit, chIndexForFindVowel + 1);
				this->syllables.push_back(Syllable(temp));
				indexForSplit = chIndexForFindVowel + 1;
			}
			// Bulunan sesli harften sonra gelen sessiz harften sonra gelen harf sesli ise
			else if(this->isVowel(this->word[chIndexForFindVowel + 2])){
				int characterCountForSyllable = chIndexForFindVowel + 1 - indexForSplit;
				wstring temp = this->word.substr(indexForSplit, characterCountForSyllable);
				this->syllables.push_back(Syllable(temp));
				indexForSplit = chIndexForFindVowel + 1;
			}
			// Bulunan sesli harften sonra gelen yanyana 2 sessiz harften sonra gelen harf sesli ise
			else if(this->isVowel(this->word[chIndexForFindVowel + 3])){
				int characterCountForSyllable = chIndexForFindVowel + 2 - indexForSplit;
				wstring temp = this->word.substr(indexForSplit, characterCountForSyllable);
				this->syllables.push_back(Syllable(temp));
				indexForSplit = chIndexForFindVowel + 2;
			}
			// Bulunan sesli harften sonra gelen 3 harf de sessiz ise
			else{
				int characterCountForSyllable = chIndexForFindVowel + 3 - indexForSplit;
				wstring temp = this->word.substr(indexForSplit, characterCountForSyllable);
				this->syllables.push_back(Syllable(temp));
				indexForSplit = chIndexForFindVowel + 3;
			}
		}
	}
}

wstring Word::getWord(){
    return this->word;
}

vector<Syllable> Word::getSyllables(){
	return this->syllables;
}

bool Word::isVowel(wchar_t character){
	for(int i = 0; i < wcslen(this->vowels); i++){
		if(character == this->vowels[i]){
			return true;
		}
	}
	return false;
}
