#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence; // store input sentence
   
    int words = 0; //store word count
    int length = 0; //int length 
    int spacePos; //int space position

    //prompt user for string
    cout<<"Please enter a line of text: \n";
    getline(cin, sentence); //read the line, store in sentence var

    //while loop to count the words
    while(spacePos != string::npos){
        spacePos = sentence.find(" ");//finds position of space
        words++;//increments word count
        sentence = sentence.substr(spacePos + 1, sentence.length());//update by removing part of the string that has already been counted 
        
    }
    //output statment
    cout <<endl;
    cout<< "There are " << words << " words in this sentence."<<endl;

    return 0;
}