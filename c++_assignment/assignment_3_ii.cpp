/* Program for splitting words in a string and
 reversing words in it and printind it */

#include <iostream>
#include <string>

//Function for word reversal in a string
std::string word_reversal(const std::string &sentence);

int main() {
	std::string sentence {"Hello World"};
	std::string reversed_sentence = word_reversal(sentence);//Function call
	std::cout << reversed_sentence <<std::endl;//To print output string
	return 0;
}

//Function for word reversal in a string
std::string word_reversal(const std::string &sentence) {
	std::string word {""};
	std::string result {""};
	//To traverse through each character of the input sentence
	for (int i = 0; i < sentence.length(); i++) {
        	// If character is not a space, build the word
		if (sentence[i] != ' ') {
			word += sentence[i];
		} else {
			// If space is encountered, add the word to result
			if (word != "") {
				result = word + " " + result;
				word = "";
			}
		}
	}

	// Add the last word if exists
	if (word != "") {
		result = word + " " + result;
	}
	return result;
}

