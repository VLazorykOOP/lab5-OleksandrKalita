#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

struct PIB 
{
    string fname;
    string name;
    string lname;

    PIB() {
        fname = "NoFirstName";
        name = "NoName";
        lname = "NoLastName";
        cout << "Default constructor PIB \n";
    }

    PIB(string fn) {
        fname = "NoFirstName";
        name = fn;
        lname = "NoLastName";
        cout << "Constructor PIB(string fn) \n";
    }

    PIB(string fn[3]) {
        fname = fn[0];
        name = fn[1];
        lname = fn[2];
        cout << "Constructor PIB(string fn[]) \n";
    }    
    ~PIB() {
        cout << "Destructor ~PIB() \n";
    }
}

int main(){
    string n

    return 0;
}

