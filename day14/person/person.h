#ifndef PERSON_H
#define PERSON_H

#if 1
// v6
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
    Person& operator=(const Person& rhs);  //To support cascading a = b = c
    Person();   //default constructor
    ~Person();
};
#endif

#endif