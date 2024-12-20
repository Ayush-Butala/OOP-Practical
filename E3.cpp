/*
Imagine a publishing company which does marketing for book and audio cassette
versions. Create a class publication that stores the title (a string) and price (type float) of
a publication.
From this class derive two classes: book, which adds a page count (type int), and tape,
which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data
and displays the data members. If an exception is caught, replace all the data member
values with zero values.
*/
#include <iostream>
#include <limits>
#include <string>
using namespace std;

class publications
{
protected:
	string title;
	float price;

public:
	publications()
	{
		title = " ";
		price = 0.0;
	}
};

class bookpublications : protected publications
{
private:
	int pagecount;

public:
	bookpublications()
	{
		pagecount = 0;
	}
	void bookinfo()
	{
		cin.ignore();
		cout << "Enter title of book" << endl;
		getline(cin, title);
		cout << "Enter price of book" << endl;
		cin >> price;
		try
		{
			cout << "Enter Number of pages of book" << endl;
			cin >> pagecount;
			if (cin.fail())
			{
				throw invalid_argument("Invalid input please enter and intger value\n");
			}
			else
			{
				cout << "Information saved" << endl;
			}
		}
		catch (const invalid_argument &invalArg)
		{
			cerr << invalArg.what();
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			title = "";
			price = 0.0;
			pagecount = 0;
		}
	}
	void displaybook()
	{
		cout << "Title of book is " << title << endl;
		cout << "Price of book is " << price << endl;
		cout << "Number of pages of book " << pagecount << endl;
	}
};

class tapepublication : public publications
{
private:
	float playingtime;

public:
	tapepublication()
	{
		playingtime = 0.0;
	}
	void tapeinfo()
	{
		cin.ignore();
		cout << "Enter title of tape" << endl;
		getline(cin, title);
		cout << "Enter price of tape" << endl;
		cin >> price;
		try
		{

			cout << "Enter Number of playing time in mintues " << endl;
			cin >> playingtime;
			if (cin.fail())
			{
				throw invalid_argument("Invalid input please enter and intger value");
			}
			else
			{
				cout << "Information saved" << endl;
			}
		}
		catch (const invalid_argument &invalArg)
		{
			cerr << invalArg.what();
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			title = "";
			price = 0.0;
			playingtime = 0.0;
		}
	}
	void displaytape()
	{
		cout << "Title of tape is " << title << endl;
		cout << "Price of tape is " << price << endl;
		cout << "Playing time of tape is " << playingtime << endl;
	}
};

int main()
{
	bookpublications bk1;
	tapepublication t1;
	int op;
	do
	{
		cout << "1)Enter information of Book" << endl;
		cout << "2)Display information of Book" << endl;
		cout << "3)Enter information of Tape" << endl;
		cout << "4)Display information of tape" << endl;
		cout << "5)Exit program" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			bk1.bookinfo();
			break;
		case 2:
			bk1.displaybook();
			break;
		case 3:
			t1.tapeinfo();
			break;
		case 4:
			t1.displaytape();
			break;
		case 5:
			cout << "Exiting....." << endl;
			break;
		default:
			cout << "Enter number between 1-5" << endl;
		}

	} while (op != 5);
	return 0;
}