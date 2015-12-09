/Project 4 Source cpp
//Author: Alexis Spahn
//Date: 11/23/15
//Due Date: Sunday, 12/8
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
//#include "TreeNode.h"	//include TreeNode header
#include "parsetree.h"
using namespace std;

int main()
{
	ParseTree exprTree;
	bool option1 = false; //checks if option 1 chosen first
	string choice;	//set choice to enter while loop
	string expression; //entered infix expression

	while (choice != "6"){
		cout << "1. Read an expression" << endl;
		cout << "2. Display the prefix expression" << endl; 
		cout << "3. Display the infix expression" << endl;
		cout << "4. Display the postfix expression" << endl;
		cout << "5. Evaluate the expression using postfix notation" << endl;
		cout << "6. Exit" << endl << endl;
		cout << "Select: ";
		cin >> choice;

		if (choice == "1"){
			cout << "Enter an infix expression:" << endl;
			cin >> expression;	
			exprTree.buildTree(expression);
			exprTree.printTree();
			option1 = true;								 //option 1 chosen first
		} // end choice 1

		if (choice == "2"){
			if (option1 == false){ 							//option 1 not chosen first
				cout << "Please enter an expression using Option 1" << endl;}

			else { 										//option 1 chosen

			} 
		} //end option 2
		if (choice == "3"){
			if (option1 == false){ 							//option 1 not chosen first
				cout << "Please enter an expression using Option 1" << endl;}

			else { 										//option 1 chosen
			}

		} //end option 3
		if (choice == "4"){
			if (option1 == false){ 							//option 1 not chosen first
				cout << "Please enter an expression using Option 1" << endl;}

			else { 										//option 1 chosen
			}

		} //end option 4
		if (choice == "5"){
			if (option1 == false){ 							//option 1 not chosen first
				cout << "Please enter an expression using Option 1" << endl;}

			else { 										//option 1 chosen
			}
		} //end option 5
		else{			// other entry
			cout << "Entry not recognized. Please try again." << endl; }		
	} //end of choice while

	return 0;
}
//end of main
