//Jacob Johnson
//jejohnson8@dmacc.edu
//12/11/17
//Pig Latin (ch. 10) - takes english sentence and translates to pig latin

#include<iostream>
#include<string>

using namespace std;

string getWord(string &);
string translate(string);
string trim(string);

int main(){
	string line;//user input sentence
	string pigLatin; //translated sentence
	
	cout << "This program takes an English language string\n";
	cout << "and converts it to Pig Latin." << endl;
	cout << "Please enter a string to be converted: ";
	getline(cin, line);
	
	while (line.size() > 0){
		string word = getWord(line);
		
		word = translate(word);
		
		pigLatin += word + " ";
	} 
	
	cout << "Translation: ";
	cout << pigLatin << endl; //display translation
	
	
	return 0;
}

string getWord(string &line){
	line = trim(line);
	int i = 0;
	while (line[i] != ' ' && i < line.size()){
		i++;
	}
	string word = line.substr(0, i);//i is the length of the word due to while loop
	line.erase(0, i);
	
	return word;
}

string trim(string line){
	
	while (line[0] == ' '){
		line.erase(0, 1);
	}
	
	return line;//return line without spaces in the front
}

string translate(string word){
	//get first character
	char first = word[0];
	word.append(1, first);//append first character to end of word
	word.append("ay"); //append ay to end of word
	word.erase(0, 1); //delete first character
	return word;// return translated word
}
