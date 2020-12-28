#include <iostream>

using namespace std;

class Stack {
public:
    int top;
    int *arr;
    int max;

    Stack(int size){
        top = -1;
        arr = new int[size];
        max = size;
    }

    void push(int x){
        if(isFull()){
            cout << "error : stack is full" << endl;
            exit(EXIT_FAILURE);
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if(isEmpty()){
            cout << "error : stack is full" << endl;
            
        }
        top--;
        return arr[top+1];

    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return top == 0;
    }

    bool isFull(){
        return top == max;
    }
};

int main() {
    Stack stack(4);

    if(stack.isEmpty()){
        cout << "stack is empty" << endl;
    }
    
    stack.push(2);
    stack.push(3);
    stack.push(5);
 
    stack.pop();
    stack.isEmpty();
    cout << "Stack size is " << stack.size() << endl;

    stack.push(4);
    for (int i = 0; i < stack.size(); i++){
        cout << stack.arr[i] << endl;
    }

}