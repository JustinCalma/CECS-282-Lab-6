#include "Palindrome.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Removes all non-alphabetical char in raw and store it into testStr
void transform(char *raw, char *testStr) {
	
	// Create indices i and j 
	int i = 0;
	int j = 0;
	
	// While the current element in raw is a char or it is not the null string element
	while (isalpha(*(raw + i)) || *(raw + i) != '\0') {
		
		// Check if the current char is lowercase or uppercase		
		if (islower(*(raw + i)) || isupper(*(raw + i))) {
			
			// Uppercase the current char in raw and store it in the proper index of testStr				
			*(testStr + j) = toupper(*(raw + i));
			
			// Increment the indices
			i++;
			j++;
			
		// Else, the current element is a space or non-alphabetical char
		} else {
			
			// Increment i
			i++;
			
		}			
	}		
	
	// Add the null string element to the end of testStr
	*(testStr + strlen(testStr)) = '\0';
	
}

// Loop through the word / phrase and check if it is a palindrome
bool testPalindrome(char *str) {
	
	// Initialize the bool value to true
	bool isPalindrome = true;
	
	// Left will point to the location of the first char in str
	char *left = str;
	
	// Right will point to the location of the last char in str
	char *right = str + strlen(str) - 1;
	
	// Loop through str
	for (int i = 0; i < strlen(str); i++) {
		
		// If the left char and right char are the same
		if (*left == *right) {
			
			// Move the pointers 
			left++;
			right--;
			
		// Else, the word / phrase is not a palindrome
		} else {
			
			// Initialize the bool value to be false
			isPalindrome = false;
			
			// Return false
			return isPalindrome;
			
		}
		
	}
	
	// Return true
	return isPalindrome;
	
}
 
