/*Write a C++ program that creates an output file, writes information to it,
closes the file,open it again as an input file and read the information from the file*/

#include <iostream>
#include <fstream> // Required for file operations
#include <string>

using namespace std;

int main()
{
    string filename = "example.txt";

    // Step 1: Create and open an output file
    ofstream outfile;
    outfile.open(filename);

    if (!outfile)
    {
        cerr << "Error: Could not create file." << endl;
        return 1;
    }

    // Step 2: Write information to the file
    outfile << "Hello, this is a test file!" << endl;
    outfile << "C++ file handling example." << endl;

    // Step 3: Close the output file
    outfile.close();

    // Step 4: Open the file again as an input file
    ifstream infile;
    infile.open(filename);

    if (!infile)
    {
        cerr << "Error: Could not open file for reading." << endl;
        return 1;
    }

    // Step 5: Read information from the file and display it
    string line;
    cout << "Reading from file: \"" << filename << "\"" << endl;

    while (getline(infile, line))
    {
        cout << line << endl;
    }

    // Step 6: Close the input file
    infile.close();

    return 0;
}