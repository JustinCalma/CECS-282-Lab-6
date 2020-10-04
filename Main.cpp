// Justin Calma
// CECS 282 Lab 6

#include "Palindrome.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

// Main function
int main() {
	
	// Create a string variable that will store the inputted string
	string s;	
	
	// Create a string variable that will store the users decision
	int decision;
	
	// Output the menu to the user
	cout << "1: Palindrome checker." << endl;
	cout << "2: Input any key to exit the program." << endl;

	// Keep running until the user decides to quit
	while (true) {
		
		// Output to the user and get their input
		cout << endl << "Enter 1 to use the palindrome checker or enter 2 to quit: " << endl;
		cin >> decision;
			
		// If the user decides to use the palindrome checker
		if (decision == 1) {
			
			// Clear the input buffer before the user inputs their word / phrase
			cin.sync();
			
			// Output a message to the user prompting for input
			cout << "Enter a word or phrase: ";
								
			// Read the input of the user
			getline(cin, s);
			
			// Clear the input buffer
			cin.sync();
		
			//declares a constant char[] and puts the contents of s into it
			const char* input = s.c_str();
		
			//make a new char[] of length s + 1 so we can have \0 at the end
			char* test = new char[s.length() + 1];
		
			//copies char[] input to char[] test
			strcpy(test, input);
			
			// Create a char[] that will store the transformed cString
			char* final = new char[s.length() + 1];
		
			// Output the word / phrase before it is transformed
			cout << "The word or phrase BEFORE transforming is: " << test << endl;
		
			// Call transform() and save the modified string into final
			transform(test, final); 
			
			// Output the modified string to the user
			cout << "The word or phrase AFTER transforming is: ";
			for (int i = 0; i < strlen(final); i++) {
				
				cout << final[i];
				
			}
			cout << endl;
						
			// Call testPalindrome() and check if the word / phrase is a palindrome
			bool isPalindrome = testPalindrome(final);
			
			// If true, the word / phrase is a palindrome
			if (isPalindrome) {
				
				cout << "The phrase or text: " << test << " IS A palindrome!" << endl;
			
			// Else, the word / phrase is not a palindrome
			} else {
		
				cout << "The phrase or text: " << test << " IS NOT a palindrome!" << endl;
				
			}
			
			// Clear the input buffer
			cin.sync();
				
		// The user has chosen to quit the program						
		} else {
			
			cout << "THE PROGRAM WILL NOW QUIT." << endl;
			
			// Return 0 to main
			return 0;
			
		}
	}
}

