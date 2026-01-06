#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	// Variable declaration
	string name;

	// Prompt user for input
	cout << "Please enter your name: ";
	cin >> name;

	// Output greeting message
	cout << "Hello," << name << "Welcome to our system!" << endl;
	cout << "Today; i will help you learning the libary <string>in c++" << endl;
	cout << "First of all, let me explain what is string in c++" << endl;
	cout << "With string libary, we can store multiple characters in a single variable." << endl;
	cout << "For example, instead of storing a single character like 'A', we can store a whole word or sentence like 'Hello, World!'." << endl;
	cout << "This makes it easier to work with text in our programs." << endl;
	cout << "For example; when i took ur name; u stored it in a string variable called name." << endl;
	cout << "Now, let's see some basic operations we can perform with strings." << endl;
	cout << "Press any key to continue when you are ready :)" << endl;
	system("pause");
	system("cls");

	// teaching string and its operations
	cout << "Let's declare a string variable called greeting and assign it a value." << endl << endl;;
	string greeting = "Hello, " + name + "!";
	cout << greeting << endl;
	cout << "Look to the code. after you see this. with this way; we can make two strings came together (=multiplying) and done with : a = b + c ... and you can see this. we did greeting = hello + name \n";

	// eaching length of string and how to find it
	cout << "Now, let's see how to find the length of a string." << endl << endl;
	cout << "The length of the greeting string is: " << greeting.length() << " characters." << endl;
	cout << "We used the length() function to get the number of characters in the string." << endl;
	cout << greeting.length();
	cout << "if you are ready; lets move on to the next part." << endl;
	cout << "Next part is finding a specific character in a string." << endl;
	cout << "When you are ready; press any key to continue." << endl;
	system("pause");
	system("cls");
	
	// teaching finding a specific character in a string
	cout << "To find a specific character in a string, we can use the indexing method." << endl << endl;
	cout << "For example, to get the first character of the greeting string, we can do this:" << endl;
	cout << "The first character of the greeting string is: " << greeting[0] << endl;
	cout << "We used indexing to access the character at position 0 (the first character) of the string." << endl;
	cout << "This is just a brief introduction to strings in C++. There are many more operations and functions you can explore!" << endl;
	cout << "When you are ready; press any key to continue" << endl;
	system("pause");
	system("cls");

	// teaching getline function
	cout << "Now, let's learn about the getline function." << endl << endl;
	cout << "The getline function allows us to read an entire line of text, including spaces." << endl;
	cout << "For example, let's declare a string variable called fullName and use getline to read a full name from the user." << endl;
	string fullName;
	cout << "Please enter your full name: ";
	cin.ignore(); // Clear the input buffer
	getline(cin, fullName);
	cout << "Hello, " << fullName << "! Nice to meet you." << endl;
	cout << "We used the getline function to read the entire line of text, including spaces." << endl;
	cout << "When you are ready; press any key to continue." << endl;
	system("pause");
	system("cls");

	// teaching finding a specific word in a string /find() function
	cout << "Also you can search for a spesific word in a string with find() function." << endl;
	cout << "For example; let's search for the word 'World' in the string 'Hello, World!'." << endl << endl;
	size_t position = greeting.find(name);
	if (position != string::npos) {
		cout << "'Name' variable found at position: " << position << endl;
	} else {
		cout << "'Name' variable not found in the string." << endl;
	}

	cout << "We used the find() function to search for the variable 'name' in the greeting string." << endl;
	cout << "Also we used size_t data type. size_t is an unsigned integer type that is used to represent the size of objects in bytes and is commonly used for array indexing and loop counting." << endl;
	cout << "When you are ready for the other part; press any key to continue." << endl;
	system("pause");
	system("cls");

	// teaching substring function
	cout << "Next, let's learn about the substr function." << endl << endl;
	cout << "The substr function allows us to extract a portion of a string." << endl;
	cout << "For example, let's extract the first 5 characters from the greeting string." << endl;
	string subGreeting = greeting.substr(0, 5);
	cout << "The substring is: " << subGreeting << endl;
	cout << "We used the substr function to get the substring starting at position 0 with a length of 5 characters." << endl;
	cout << "When you are ready; press any key to continue." << endl;

	//ending message
	cout << "This is just a brief introduction to some of the basic operations you can perform with strings in C++. There are many more functions and features to explore!" << endl;
	cout << "I hope this helps you get started with using strings in your C++ programs. Happy coding!" << endl << endl <<endl;

	cout << "                                                                                       All Made By Rüzgar ERDEM << endl";
	cout << "                                                                                       GitHub: rerdem-dev" << endl;










	return 0;
}