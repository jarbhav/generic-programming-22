#ifndef RECT_H
#define RECT_H

class Rect
{
private:
    int length_;
    int breadth_;
public:
    void read();
    void disp() const;
    int find_area() const;
    bool equal(const Rect&) const;
};
/*
equality:
    - referential semantics
    - value sematics
*/

#endif