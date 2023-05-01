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
    string toString() {
        string ts = "PIB: " + fname + " " + name + " " + lname + " ";
        return ts;
    }
    void Input() {
        cout << "Input fname "; cin >> fname;
        cout << "Input name "; cin >> name;
        cout << "Input lname "; cin >> lname;
    }
}

class Person {
    protected:
        int age, weight;
        PIB name;

    public:
    Person() {
        age = 0;
        weight = 1;
        cout << " Default constructor Person() \n";
    }
    Person(int a, int w, string n) {
        age = a;
        weight = w;
        name = n;
        cout << " Constructor Person(int a, int w, string n) \n";
    }
    ~Person(){
        cout << "Destructor ~Person() \n";
    }
    void setAge(int a) {
        if (a >= 0 && a <= 200){
           age = a; 
        }
        else{
            cout << "Age " << a << " not allow, age is " << age << endl;;
        }
    }
    string toString() {
        string r,w,n ;
        a = to_string(age);
        w = to_string(weight);
        r = name.toString() + " age: " + a + " weight: " + n;
        return r;
    }
}



int main(){
    

    return 0;
}

