//Introduction
/***************************************************************************
 *          The game is in accordance with evolved Diushou Juan
 * 1. First enter the names of 10 people, and in accordance with the serial 
 *    number in a circle
 * 2. After 10 personal circle, you can start from any one person, and then 
 *    a random number reported a "number", from the current number of people 
 *    reported since the beginning, when the number of the "number" two words, 
 *    so the first "number" a list of personal attraction, finished the first 
 *    "number" reported that the number of individuals, from the first 
 *    "number" +1 personal start counting until all of the columns.
 * 3. The binary file can be displayed for all the columns in the order
 ***************************************************************************/
//Summary
/***************************************************************************
 * Project size: about 290 lines
 * The number of variables: about 15
 * The number of function: 10
 * 
 * This project includes many concepts that we learned from the chapters in the book
 * of course its in cloud the 5 ask:
 *   1) Memory allocation
 *   2) Functions with structures, used as input and output
 *   3) Pointers with arrays and arrays of structures, internally as well as externally.
 *   4) Use of character arrays as well as string objects.
 *   5) Reading and wrting to binary files.
 * Also, it has many possibilities to be extended for next project.
 * For example, I can let people run to catech the people who call him.
 
 * It took almost 1 mounth because I am not good for this part, I need read the 
 * book again and again.
 * but I am fun in doing this project, couse I get this Its run!!!!!!
 * I think I can do the better projet in the future.
 ***************************************************************************/
//Pseudo Code
/****************************************************************************
 * The game ask user to Enter 10 people name
 * Than you can chose
 *          1 play game
 *          2 view binary file
 *          3 exit
 * chose the person who start the game
 * than let this person1 to get a number than get next person2, 
 * than person2 show himself 
 * now let this person2 to get a number than get next person3, 
 * Like that until every show themselves.
 * Than ask if you want play again and chose from menu
 ***************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

const int SIZE = 10;   // accommodation size 


struct Stu
{
	string name;
	int key;
	Stu *next;
};

/*******************************************************/
void init(Stu *S);
void create(Stu *S, string *store);
void print(Stu *S);
void binWrite(string name, ofstream &outfile);
bool delNode(Stu *S, int &key, int number, ofstream &outfile);
void inputInformation(string *store);
void playGame(Stu *S);
void binRead();
void menu();
/*******************************************************/


int main(void)
{
	Stu S;
	int select;
	string *store = new string[SIZE];
	inputInformation(store);
	create(&S, store);
	print(&S);

	while (true)
	{
		menu();
		cin >> select;
		switch (select)
		{
		case 1:
			playGame(&S);
			break;
		case 2:
			binRead();
			break;
		case 3:
			return 0;
		default:
			cout << "error, input again!" << endl;
			break;
		}
		// system("pause");
		// system("cls");
	}
	delete store;
	store = NULL;
	return 0;
}




// init link
void init(Stu *S)
{
	S->next = NULL;
}


// create circle link
void create(Stu *S, string *store)
{
	Stu *temp = NULL;
	Stu *head = S;

	for (int i = 0; i < SIZE; i++)
	{
		temp = new Stu();
		temp->name = store[i];
		temp->key = i + 1;
		temp->next = NULL;
		head->next = temp;
		head = temp;
	}
	head->next = S->next;
}


// print all node
void print(Stu *S)
{
	Stu *temp = S->next;  
	Stu *stop = temp;
	cout << "current all people's name : " << endl;
	if (temp == NULL)
		cout << "NULL" << endl;
	while (temp) 
	{
		cout << temp->name << " ";
		temp = temp->next;
		if (temp == stop)
			break;
	}
	cout << endl;
}

// binary write file
void binWrite(string name, ofstream &outfile)
{
	char arr[100] = { 0 };
	int len = name.length();
	for (int i = 0; i < len; i++)
	{
		arr[i] = name[i];
	}
	outfile.write((char*)&arr, sizeof(arr));
}

// delete node
bool delNode(Stu *S, int &key, int number, ofstream &outfile)
{
	Stu *last = S;
	Stu *first = S->next;
	Stu *head = S->next;
	int i;

	if (first == NULL)
	{
		cout << "delNode failure! link is empty." << endl;
		return false;
	}

	// cout << "1.............." << endl;
	while (true)
	{
		last = first;
		first = first->next;
		if (first == head)
			break;
	}

	while (first)
	{
		if (first->key == key)
		{
			break;
		}
		last = first;
		first = first->next;
	}
	// cout << "2.............." << endl;
	// only one node
	if (last == first)
	{
		binWrite(last->name, outfile);
		delete last;
		last = NULL;
		S->next = NULL;
		return true;
	}
	// cout << "3.............." << endl;
	i = 1;
	while (i < number)
	{
		last = first;
		first = first->next;
		i++;
	}
	// cout << "4.............." << endl;
	key = first->next->key;
	cout << first->name << " leave team." << endl;
	if (first == head)
		S->next = first->next;
	last->next = first->next;
	binWrite(first->name, outfile);
	delete first;
	first = NULL;
	return true;
}

// enter information
void inputInformation(string *store) 
{
	string *s = store;
	cout << "please input " << SIZE << " name." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "name " << i << " : ";
		cin >> *s;
		s++;
	}
}

// play game
void playGame(Stu *S)
{
	int key;
	int number;
	ofstream outfile("stu.dat", ios::binary);
	if (!outfile)
	{
		cerr << "open stu.dat error!" << endl;
		exit(0);
	}

	cout << "******************play game start****************" << endl;
	print(S);
	cout << "the game from where start(1-10) : ";
	cin >> key;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "input a rand number : ";
		cin >> number;
		if (!delNode(S, key, number, outfile))
		{
			cout << "game over!" << endl;
			break;
		}
		print(S);
	}

	outfile.close();
}



// binary read file
void binRead()
{
	ifstream infile("stu.dat", ios::binary);
	if (!infile)
	{
		cerr << "open stu.dat error!" << endl;
		exit(0);
	}
	
	cout << "leave team order : " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		char arr[100] = { 0 };
		infile.read((char*)&arr, sizeof(arr));
		cout << string(arr) << endl;
	}
	
	infile.close();
}

// view menu
void menu()
{
	cout << "\t\t\t*******************************************" << endl;
	cout << "\t\t\t*              1.play game                *" << endl;
	cout << "\t\t\t*              2.view binary file         *" << endl;
	cout << "\t\t\t*              3.exit                     *" << endl;
	cout << "\t\t\t*******************************************" << endl;
	cout << "input select : ";
}


/*
huyong
libai
wangxiong
lili
wangkai
guxuan
erka
huyong
ergouzi
xiexiao
*/


