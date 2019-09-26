#include<bits/stdc++.h>

using namespace std;

class person {
public:
    string name;
    int age;
    person(string _name, int _age) { //constructor
        name = _name;
        age = _age;
    }
    void print() {
        cout << "name is " << name << '\n' << "age is " << age << '\n';
    }
};

int main()
{
    person p1("Apaar", 20);
    p1.print();
}
