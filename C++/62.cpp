#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream out;
    out.open("sample60.txt");
    out<<"Hello World";
    out.close();

    // ifstream in;
    // in.open("sample60.txt");
    // string st;
    // in>>st;
    // cout<<st<<endl;
    // in.close();
    // return 0;
    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<endl;
    // cout<<st2<<endl;
    while (in.eof()==0)
    {
    getline(in,st);
    cout<<st<<endl;
    }
}
