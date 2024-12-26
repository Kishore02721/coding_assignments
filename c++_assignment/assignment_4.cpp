/* Program for Open a file, Read the file. Every line changes every word’s
 first character to a capital letter and writes that data to another file.*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

//Function for capitilizing first letter of every words
string capitalize_words(const string& line);

int main() {
        string inputFile_name;
	string outputFile_name;
	//To get input file name
	cout<<"Enter input file name: ";
	cin>>inputFile_name;
	//To get output file name
	cout<<"Enter output File name: ";
	cin>>outputFile_name;
	ifstream inputFile(inputFile_name);// Open the input file
        ofstream outputFile(outputFile_name);// Open the output file
        // Check if files are open successfully
        if (!inputFile.is_open()) {
                cout<<"Unable to open input file"<<endl;
                return 1;
        }
        if (!outputFile.is_open()) {
                cout<<"Unable to open output file"<<endl;
                return 1;
        }
        string line;
        //To read each line from the input file
        while (getline(inputFile, line)) {
                string modifiedLine = capitalize_words(line); // Capitalize words
                outputFile<<modifiedLine<<endl; // Write to output file
        }
        // Close both files
        inputFile.close();
        outputFile.close();
        cout << "Operation Completed" << endl;
        return 0;
}

//Function for capitilizing first letter of every words
string capitalize_words(const string& line) {
	string result = "";
	bool new_word = true;
	//Loop through each character in the line
	for (char ch : line) {
		if (isalpha(ch)) {
			if (new_word) {
				result += toupper(ch);//Capitalize first character of word
				new_word = false;
			} else {
				result += ch;//other than first word add without changes
			}
		} else {
			result += ch;//if not alphabet the add without changes
			if (ch == ' ') {
				new_word = true;//If space then consider as new word
			}
		}
	}

	return result;
}

