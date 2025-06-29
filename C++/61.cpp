#include <iostream>
#include <fstream>
using namespace std;
/*
int main() {
    string st;
    // Opening files using constructor and reading it
    ifstream in("sample60.txt"); // Read operation
    // in >> st;//Just like cin
    getline(in,st);
    cout << st << endl;
    return 0;
}
int main(){
    string st="Hello";
    ofstream out("sample60.txt"); // Write operation
    out << st; // Just like cout
    out.close();
}*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream hout("sample60.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file
    hout << name + " is my name";

    // disconnecting our file
    hout.close();
    // connecting our file with hin stream
    ifstream hin("sample60.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    hin >> content;
    cout << "The content of the file is: " << content;

    // disconnecting our file
    hin.close();
    return 0;
}
