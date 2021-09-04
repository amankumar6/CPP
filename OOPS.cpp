#include <bits/stdc++.h>
#define ll                      long long int
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
// 2. Abstraction
class AbstractEmployee{
    virtual void AskForPormotion() = 0;
};

class Employee: AbstractEmployee{
private:
    string School;
    int Age;

protected:
    string Name;

public:
    // 1. Encapusulation
    // example of setter
    void setName(string name){
        Name = name;
    }
    // example of getter
    string getName(){
        return Name;
    }

    void setSchool(string s){
        School = s;
    }
    string getSchool(){
        return School;
    }

    void setAge(int n){
        Age = n;
    }
    int getAge(){
        return Age;
    }

    void Introduce(){
        cout << "My name is " << Name << " i am from " << School << " school and my age is " << Age << endl;
    }

    Employee(string n, string s, int a){
        Name = n;
        School = s;
        Age = a;
    }

    void AskForPormotion(){
        if(Age > 40) cout << Name <<" you are pormoted" << endl;
        else cout << Name <<" you can't get pormotation as your age is less than 40" << endl;
    }

    virtual void work(){
        cout << Name << " is working on taskmanager." << endl;
    }
};

// 3. Inherantance
class Dev:public Employee{ // Inherantance is private by default
public:
    string favLang;
    Dev(string n, string s, int a, string lang): Employee(n,s,a){
        favLang = lang;
    }

    void FigBug(){
        cout<< Name << " you are in " << getSchool() <<" so fix bug using " << favLang << endl;
    }

    void work(){
        cout << Name << " is writing " << favLang << " code." << endl;
    }
};

class Teacher: public Employee{
public:
    string Subject;
    void prepareLeasson(){
        cout << Name << " is preapering " << Subject << " leasson" << endl;
    }

    Teacher(string n, string s, int a, string subject):Employee(n, s, a) {
        Subject = subject;
    }

    void work(){
        cout << Name << " is teaching " << Subject << "." << endl;
    }
};

int main()
{
    fast;
    Employee ep1 = Employee("Windows", "Microsoft", 43);
    Employee ep2 = Employee("Preadator", "Acer", 34);
    // ep1.Introduce();
    // ep2.Introduce();
    // ep1.AskForPormotion();
    // ep2.AskForPormotion();

    Dev d = Dev("MIVI", "IND", 32, "CPP");
    // d.Introduce();
    // d.FigBug();

    Teacher t = Teacher("LOGITECH", "FIITJEE", 23, "JAVASCRIPT");
    // t.prepareLeasson();
    // t.AskForPormotion();

    // ep1.work();
    // d.work();
    // t.work();

    // 4. Polymorphism: The most common use of polymorphism is wen a parent class reference is used to refer to a child class object
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->work();
    e2->work();



    return 0;
}
