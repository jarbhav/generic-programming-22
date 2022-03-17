#ifndef PERSON_H
#define PERSON_H

class person {
private:    //implementation
    char name_[20];
    int age_;
public:     //interface
    void read_one();
    void disp_one() const;
};

#endif