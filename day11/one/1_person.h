// avoid multiple inclusion of the header file
// guard
#ifndef PERSON_H    // if not defined
#define PERSON_H

//struct person: declaration of type

//definition of type for the compiler
// defines binary layout of a structure
// - total size
// - position of each fields

struct person {
    char name_[20];
    int age_;
};

void read_one(person&);

//v1
//void disp_one(person);

//v2
void disp_one(const person&);

#endif