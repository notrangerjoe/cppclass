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



int main()
{
	//declartion of variables
	string input_string;
	int a_count, e_count, i_count, o_count, u_count, char_count;
	//set int values to 0
	a_count = e_count = i_count = o_count = u_count = char_count = 0;
	
	//descriptive message
	cout << "This program asks the user for a sentence," << endl
		<< "searches the sentence for all vowels," << endl
		<< "and displays the number of times each" << endl
		<< "vowel appears in the sentence." << endl;
	
	//input
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
		cout << " u's." << endl;
	else
		cout << " u." << endl;
		
}

/*	I hate exceptions with numbers, this always feels lazy to me
	cout << "There are" << endl
		<< a_count << " a's," << endl
		<< e_count << " e's," << endl
		<< i_count << " i's," << endl
		<< o_count << " o's, and" << endl
		<< u_count << " u's." << endl;
*/

/* Also to_string() wouldn't compile so...

	string output_string = "";
	
	//number of a's
	output_string += to_string(a_count);
	if (a_count != 1)
		output_string += " a's,";
	else
		output_string += " a,";
	
	//number of e's
	output_string += to_string(e_count);
	if (e_count != 1)
		output_string += " e's,\n";
	else
		output_string += " e,\n";
	
	//number of i's
	output_string += to_string(i_count);
	if (a_count != 1)
		output_string += " i's,\n";
	else
		output_string += " i,\n";
		
	//number of o's
	output_string += to_string(o_count);
	if (a_count != 1)
		output_string += " o's, and\n";
	else
		output_string += " o, and\n";
		
	//number of u's
	output_string += to_string(u_count);
	if (a_count != 1)
		output_string += " u's,\n";
	else
		output_string += " u,\n";

	cout << output_string << endl;
*/
