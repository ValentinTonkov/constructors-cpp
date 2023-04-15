#include <iostream>

using namespace std;

class Student{
private:
    int age;
    string name;
public:
    /*
     * The constructor is called when a new object is created.
     * Constructors could be used to set data of the fields.
     * */
    Student(int age, string name){
        this->age = age;
        this->name = name;
    }

    int getAge(){
      return age;
    }

    void setAge(int age){
        this->age = age;
    }

    string getName(){
        return name;
    }

    void setName(string name){
        this->name = name;
    }
};

int main() {
    //Creating objects using constructor with parameters:
    Student student(12, "Name1");
    Student s2 = Student(39, "Name2");

    cout<<s2.getName()<<" : "<<s2.getAge()<<endl;
    cout<<student.getName()<<" : "<<student.getAge();

    return 0;
}
