#include <iostream>
using namespace std;

#define MAX 100   

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    bool isFull() {
        return (top == MAX - 1);
    }

    bool isEmpty() {
        return (top == -1);
    }

    void push(char x) {
        if (isFull()) {
            cout << "Stack Overflow!\n";
            return;
        }
        arr[++top] = x;
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return '\0';  // return null char if empty
        }
        return arr[top--];
    }
};

int main() {
    Stack s;
    string str;

    cout << "Enter a string: ";
    cin >> str;   // input one word like "DataStructure"

    // Push all characters into stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // Pop characters and print (reversed order)
    cout << "Reversed string: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;

    return 0;
}