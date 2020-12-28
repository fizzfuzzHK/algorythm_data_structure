#include <iostream>

using namespace std;

class Queue {
public:
    int tail;
    int head;
    int *arr;
    int length;

    Queue(int size){
        tail = -1;
        head = 0;
        arr = new int[size];
        length = size;
    }

    void push(int x){
        if(isFull()){
            cout << "error : queue is full" << endl;
            exit(EXIT_FAILURE);
        }
        tail = (tail+1)%length;
        arr[tail] = x;
    }

    int pop(){
        if(isEmpty()){
            cout << "error : queue is full" << endl;
        }
        int t = arr[head];
        head = (head+1)%length;
        return t;
    }

    bool isEmpty(){
        return head == tail;
    }

    bool isFull(){
        if (head == 0){
            return tail == length-1;
        }
        else{
            return head == tail+1;
        }
    }
};

int main() {
    Queue queue(4);

    if(queue.isEmpty()){
        cout << "queue is empty" << endl;
    }
    
    queue.push(2);
    queue.push(3);
    queue.push(5);
 
    queue.pop();
    queue.isEmpty();

    queue.push(4);
    for (int i = 0; i < queue.length; i++){
        cout << queue.arr[i] << endl;
    }
}