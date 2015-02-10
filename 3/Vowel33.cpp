/************************************************************************
* Name: Mark Neves                                                CSC 155
* Date: 1/30/2015                                                 Lab 3   
*************************************************************************
* Statement: Determine and display the number of characters and number of
			 vowels in a string
* Specifications:
* Input  - String
* Output - Input string, number of characters in the string, number of
		   each vowel in the string
************************************************************************/

#include <iostream>
#include <string>

using namespace std;



void findVowels()
{

	//declartion of variables
	string input_string;
	int a_count, e_count, i_count, o_count, u_count, char_count;
	//set int values to 0
	a_count = e_count = i_count = o_count = u_count = char_count = 0;
	
	//descriptive message
	cout << endl;
	cout << "This program asks the user for a sentence," << endl
		<< "searches the sentence for all vowels," << endl
		<< "and displays the number of times each" << endl
		<< "vowel appears in the sentence." << endl << endl;
	
	// ask user for input
	cout << "Enter a sentence to search:  ";
	//put input into variable
	getline(cin, input_string);
	
	//get length of input_string and store it
	char_count = input_string.length();
	
	//find the number of each vowel in input_string
	for (int i=0; i < char_count; i++)
	{
			switch(input_string[i])
			{
				case 'a':
				case 'A':
					a_count++;
					break;
				case 'e':
				case 'E':
					e_count++;
					break;
				case 'i':
				case 'I':
					i_count++;
					break;
				case 'o':
				case 'O':
					o_count++;
					break;
				case 'u':
				case 'U':
					u_count++;
					break;
			}
		}
	
	/***********
	Begin output
	***********/
	
	/* output:
	input_string
	has char_count character(s)
	*/
	cout << endl << input_string << endl << endl
		<< "has " << char_count << " character";	
	if (char_count != 1)//exception for 1 character
		cout << "s.";
	else
		cout << '.';
	cout << endl << endl;

	/* output:
	There is/are
	a_count a('s),
	e_count e('s),
	etc.
	*/
	if (a_count != 1)//exception for singular vs plural
	cout << "There are" << endl;
	else
	cout << "There is" << endl;
	
	//number of vowels with singular exceptions
	//a
	cout << a_count;
	if (a_count != 1)
		cout << " a's," << endl;
	else
		cout << " a," << endl;
	
	//e
	cout << e_count;
	if (e_count != 1)
		cout << " e's," << endl;
	else
		cout << " e," << endl;

	//i
	cout << i_count;
	if (i_count != 1)
	cout << " i's," << endl;
	else
		cout << " i," << endl;
	//o
	cout << o_count;
	if (o_count != 1)
		cout << " o's, and" << endl;
	else
		cout << " o, and" << endl;
		//u
	cout << u_count;
	if (u_count != 1)
		cout << " u's." << endl << endl;
	else
		cout << " u." << endl << endl;
	
}

int main()
{
	bool go_again = false;
	do
	{
		//execute the actual program
		findVowels();
		
		//determine if the user wishes to enter another string
		cout << "Search another string? y/n: ";
		string yes_no;
		getline(cin, yes_no);
		if (yes_no[0] != 'y' && yes_no[0] != 'Y')
			go_again = false;
		else
			go_again = true;
	}while(go_again);
}
	

