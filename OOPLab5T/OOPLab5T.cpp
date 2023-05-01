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
    toString() {
        string r,w,n ;
        a = to_string(age);
        w = to_string(weight);
        r = name.toString() + " age: " + a + " weight: " + n;
        return r;
    }
}

class Student : public Person {
    int classNum;
public:
    Student () {
        classNum = 1;
        cout << " Default constructor Student() \n";
    }
    Student(int a, int w, string n, int c) {
        Person(a, w, n);
        classNum = c;
        cout << " Constructor Student(int a, int c, string n) \n";
    }
    ~Student(){
        cout << "Destructor ~Student() \n";
    }
    void setClassNum(int c) {
        if (c > 0 && a <= 11){
           classNum = c; 
        }
        else{
            cout << "ClassNumber " << c << " not allow, classNumber is " << classNum << endl;;
        }
    }
    string toString() {
        string sC;
        sC = to_string(classNum);
        r = name.toString() + " classNumber: " + sC;
        return r;
    }
}

int main(){
    Student studentFirst;
    cout << studentFirst.toString() << endl;
    studentFirst.setAge(16);
    studentFirst.setClassNum(10);
    Student studentSecond(16, 65, 'Petrov Denys Alegovich', 10);
    studentSecond.toString();
    studentSecond.~Student();
    
    return 0;
}

class Student
{
    protected string name;
    protected int course;

    public Student(string Name, int course)
    {
      this.Name = Name;
      this.course = course;
      this.gradeBook = gradeBook;
    }

    public string Name
    {
      get { return name; }
      set { name = value; }
    }

    public int Course
    {
      get { return course; }
      set { course = value; }
    }
    public void Print()
    {
      cout << "Name = " + this.name << endl;
      cout << "Course = " + this.course << endl;
    }
  }

  public class DiplomStdent : Student
  {
    protected string diplom; 

    public DiplomStudent(string name, int course, string diplom) :
    base(name, course)
    {
      base.name = name;
      this.course = course; 
      this.diplom = diplom; 
    }
  }