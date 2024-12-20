/*Develop a program in C++ to create a database of student’s information system
containing the following information: Name, Roll number, Class, Division, Date of
Birth, Blood group, Contact address, Telephone number, Driving license no. and other.
Construct the database with suitable member functions. Make use of constructor, default
constructor, copy constructor, destructor, static member functions, friend class, this
pointer, inline code and dynamic memory allocation operators-new and delete as well as
exception handling.*/
#include <iostream>
#include <string>
using namespace std;

class FriendClass;

class Student
{
private:
    string name;
    int roll_number;
    string Class;
    string division;
    string date_of_birth;
    string blood_group;
    string contect_address;
    string telephone_number;
    string driving_license_number;
    static int count;

public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        roll_number = 0;
        Class = "Unknown";
        division = "Unknown";
        date_of_birth = "00-00-0000";
        blood_group = "Unknown";
        contect_address = "Unknown";
        telephone_number = "Unknown";
        driving_license_number = "Unknown";
        count++;
    }
    // Copy constructor
    Student(const Student &other)
    {
        name = other.name;
        roll_number = other.roll_number;
        Class = other.Class;
        division = other.division;
        date_of_birth = other.date_of_birth;
        blood_group = other.blood_group;
        contect_address = other.contect_address;
        telephone_number = other.telephone_number;
        driving_license_number = other.driving_license_number;
        count++;
    }
    // This pointer
    Student(string name, int roll, string dob)
    {
        this->name = name;
        this->roll_number = roll;
        this->date_of_birth = dob;
        Class = "Unknown";
        division = "Unknown";
        blood_group = "Unknown";
        contect_address = "Unknown";
        telephone_number = "Unknown";
        driving_license_number = "Unknown";
        count++;
    }
    // Destructor
    ~Student()
    {
        count--;
    }
    // static member function
    static int getcount()
    {
        return count;
    }
    // inline code
    inline void display()
    {
        cout << "Roll Number:" << roll_number << endl;
        cout << "Name:" << name << endl;
    }
    // friend function
    friend class Friendclass;
};
int Student ::count = 0;
class Friendclass
// Friend class
{
public:
    void modify(Student &s)
    {
        s.name = "Modified Name";
        s.roll_number = 500;
        cout << "Name and Roll Number Modified using Friend Function" << endl;
    }
};
int main()
{
    Student s1;
    s1.display(); // Default constructor
    Student s2("Ayush", 238, "19-12-2004");
    s2.display(); // this pointer
    Student s3 = s2;
    s3.display();          // Copy constructor
    Student *s4 = nullptr; // Exception handling with Dynamic memory alloction
    try
    {
        s4 = new Student;
        s4->display();
        delete s4;
    }
    catch (bad_alloc &e)
    {
        cout << "Memory allocation fail" << e.what() << endl;
    }
    // Static member function
    cout << "Total Student" << Student::getcount() << endl;
    // Friend class
    Friendclass fc;
    fc.modify(s1);
    s1.display();
    return 0;
}