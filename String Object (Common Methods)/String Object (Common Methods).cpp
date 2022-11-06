// String Object (Common Methods).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1 = "My Nmae is Mouhamed FARDOUSI,I am a programmer!";
    //Prints the length of string
    cout << s1.length() << endl;;

    //Return the value on a posistion 
    cout << s1.at(0) << endl;

    //Adds @Prpogramming to the end of the string 
    s1.append("@Prpogramming");
    cout << s1 << endl;

    //insert Ali at position 11
    s1.insert(11, "Ali ");
    cout << s1 << endl;

    //Prints all the next 8 letters from position 19
    cout << s1.substr(8,19) << endl;

    //Adds one character to the end of string
    s1.push_back(' X');
    cout << s1 << endl;

    //Removes one charecter from the end of string
    s1.pop_back();
    cout << s1 << endl;

    //Finds Ali in the string
    cout << s1.find("Ali") << endl;
    cout << s1.find("ali") << endl;
}


