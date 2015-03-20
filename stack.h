#include <list>
#include <vector>
using namespace std;

class IStack {
    //Adauga element
    virtual void push(int elem) = 0; //Scoate element din varf
    virtual void pop() = 0;
    //Returneaza elementul din varf
    virtual int top() = 0;
    //Returneaza true daca stiva e goala
    virtual bool isEmpty() = 0;
};


#ifdef VECTOR_BASED_STACK

class Stack : public IStack {
    /*
       TODO implementati o stiva bazata pe un vector
       Folositi clasa vector. Metodele de care aveti nevoie sunt
       back, push_back, pop_back si empty
       Aveti grija sa eliberati memoria pentru vector in destructor
    */
    vector<int> st;
public:
    void push(int elem) {
    }
    void pop() {
    }
    int top() {
    }
    bool isEmpty() {
    }
};

#else

class Stack : public IStack {
    /*
       TODO implementati o stiva folosind o lista
       Folositi lista pusa la dispozitie.
       Metodele de care aveti nevoie sunt back, push_back,
       pop_back si empty
    */
    list<int> st;

public:
    void push(int elem) {
    }

    void pop() {
    }

    int top() {
    }

    bool isEmpty() {
    }
};

#endif
