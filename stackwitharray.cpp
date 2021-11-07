#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

class stack {
    //class for the stack
public:
    int size;
    int top;
    char* arr;

    stack() {
        //Defualt constructor for the stack.
        size = 300;
        top = -1;
        arr = new char[size];
    }
    //args constructor for the stack.
    stack(int sizeofstack) {
        size = sizeofstack;
        top = -1;
        arr = new char[size];
    }

    bool isFull() {
        //function which check the stack is full or not.
        return top == size - 1;
    }

    bool isEmpty() {
        //funciton that check the function is empty.
        return top == -1;
    }

    void push(char value) {
        //funciton to push element in the stack
        if (isFull()) {
            cout << "This Stack is full."<<endl;
        }
        else {
            top++;
            arr[top] = value;
        }
    }

    char pop() {
        //funciton to pop element from the stack.
        if (!isEmpty()) {
            return arr[top--];
        }
        else {
            return '!';
        }
    }

    void clear() {
        //function to deleter all entries
        delete[] arr;
    }

    void peak() {
        //funciton that print the top element of the stack.
        if (!isEmpty()) {
            cout << arr[top] << endl;
        }
    }
};
