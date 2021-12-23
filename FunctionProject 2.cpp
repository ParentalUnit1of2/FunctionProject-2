#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age = 0) {

    // Default's work from end backwards. So you cannot have a default as such:
    // ie: introduceMe(string name, string city="defualt", int age)
    // Must be:  introduceMe(string name, string city="default", int age = 0)

    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if(age!=0)
    cout << "I am " << age << " years old" << endl;

}

int main()
{
    // This has predetermined variables
    
    //introduceMe("JaNita", "Wichita", 50);
    //cout << endl;
    //introduceMe("Myers","Seattle");

    // This allows for the user to input information

    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "age: ";
    cin >> age;
    cout << endl << endl;
    introduceMe(name, city, age);


    system("pause>0");
    
}

