/*Write C++ program using STL for sorting and searching with user defined records such as
person record(Name, DOB, Telephone number), Item record (Item code, name,
cost,quantity) using vector container*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class PersonalRecord
{
public:
    string name;
    string dob;
    string telephone;

    // Constructor
    PersonalRecord(const string &name = "", const string &dob = "",
                   const string &telephone = "")
        : name(name), dob(dob), telephone(telephone) {}

    // Overloading >> operator for input
    friend istream &operator>>(istream &in, PersonalRecord &record)
    {
        cout << "Enter Name: ";
        getline(in, record.name);
        cout << "Enter DOB (DD/MM/YYYY): ";
        getline(in, record.dob);
        cout << "Enter Telephone: ";
        getline(in, record.telephone);
        return in;
    }

    // Overloading << operator for output
    friend ostream &operator<<(ostream &out, const PersonalRecord &record)
    {
        out << "Name: " << record.name << "\nDOB: " << record.dob << "\nTelephone: " << record.telephone << '\n';
        return out;
    }

    // Overloading < operator for sorting
    bool operator<(const PersonalRecord &other) const
    {
        return name < other.name; // Sorting by name
    }

    // Overloading == operator for searching
    bool operator==(const PersonalRecord &other) const
    {
        return name == other.name; // Searching by name
    }
};

int main()
{
    vector<PersonalRecord> records;
    int choice;

    do
    {
        cout << "Menu:" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display Records" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Sort Records" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            PersonalRecord record;
            cin >> record;
            records.push_back(record);
            break;
        }
        case 2:
        {
            cout << "\nPersonal Records:\n";
            for (const auto &record : records)
            {
                cout << record << "-----------------\n";
            }
            break;
        }
        case 3:
        {
            string nameToSearch;
            cout << "Enter Name to search: ";
            getline(cin, nameToSearch);

            bool found = false;
            for (const auto &record : records)
            {
                if (record.name == nameToSearch)
                {
                    cout << "\nRecord Found:\n"
                         << record;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nRecord Not Found.\n";
            }
            break;
        }
        case 4:
        {
            sort(records.begin(), records.end());
            cout << "\nRecords sorted successfully.\n";
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
