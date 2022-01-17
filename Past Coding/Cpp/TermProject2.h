#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    unsigned int age;
    
    public:
    Person(){}
    Person(string name, unsigned int age){
        this->name = name;
        this->age = age;
    }

    string getName(){
        return name;
    }
    unsigned int getAge(){
        return age;
    }
    void setName(string name){
        this->name = name;
    }
    void setAge(unsigned int age){
        this->age = age;
    }
};


class Student : public Person{
    private:
    string course;

    public:
    Student(string name, unsigned int age, string course): Person(name, age){
        this->course = course;
    }
    string getCourse(){
        return course;
    }
    void setCourse(string course){
        this->course = course;
    }
};

class Professor : public Person{
    private:
    string subject;

    public:
    Professor(string name, unsigned int age, string subject): Person(name, age){
        this->subject = subject;
    }
    string getSubject(){
        return subject;
    }
    void setSubject(string subject){
        this->subject = subject;
    }
};