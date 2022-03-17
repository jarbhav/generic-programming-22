#ifndef PERSON_H
#define PERSON_H

#if 0
// v1
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
};
#endif

#if 0
// v2
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
    Person();   //default constructor
    ~Person();
};
#endif

#if 0
// v2
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
    ~Person();
};
#endif

#if 0
// v3
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
    Person();   //default constructor
    ~Person();
};
#endif

#if 0
// v4
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
    void operator=(const Person& rhs);  //copy assignment operator
    Person();   //default constructor
    ~Person();
};
#endif

#if 0
// v5
class Person
{
    private:
    char* name_;
    int age_;
    
    public:
    void disp() const;
    Person(char*, int);
    void operator=(const Person& rhs);  //copy assignment operator
    Person();   //default constructor
    ~Person();
};
#endif

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