#ifndef MYVECTOR_H
#define MYVECTOR_H

//This class is in canonical form
class myvector
{
    public:
    /*
    We are making it explicit to handle cases such as foo(100)
        integer becomes vector object with hundred elements in it

    Always do this in case of a single arg ctor (except in certain cases)
    */
    explicit myvector(int n);
    ~myvector();
    //contextual keyword (delete)
    myvector(const myvector&) = delete;             //copy ctor
    myvector& operator=(const myvector&) = delete;  //assignment operator
    /*
    We could have made the above two private
    but then the compiler would have given errors if client calls
    and if we call and don't give a definition linker gives error

    We can ask the compiler to not generate code for this
    using delete (contextual keyword)
    */
    
    //class within a class
    // indicates a position
    // opaque object
    class myiterator
    {
        //This is a trivial class (already in canonical form)
        public:
        explicit myiterator(int* ptr = nullptr) : ptr_(ptr) {}
        int operator*() const { return *ptr_; }
        //  int& operator*() const { return *ptr_; }     // for lvalue usage
        bool operator==(const myiterator& rhs) const
        {
            return ptr_ == rhs.ptr_;
        }
        bool operator!=(const myiterator& rhs) const
        {
            //canonical way of writing inequality
            // != should call ==
            return !(*this == rhs);
        }
        myiterator& operator++()
        {
            ++ptr_;
            return *this;
        }
        myiterator operator++(int)
        {
            myiterator temp(*this);
            ++*this;
            return temp;
        }

        private:
        int *ptr_;
    };
    myiterator begin()
    {
        return myiterator(p_);
    }
    myiterator end()
    {
        return myiterator(p_ + n_);
    }

    private:
    int *p_;
    int n_;
};

#endif