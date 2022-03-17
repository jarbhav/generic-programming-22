#ifndef PERSON_H
#define PERSON_H

struct person {
    char name_[20];
    int age_;

    void read_one();    //no explicit parameter
    void disp_one() const;  //const member function
};

#endif