
#include <iostream>
using namespace std;

int qu[5] = {0};
int size = 0;
int front = 0;
int rear = 0;
int capacity = 5;

bool isFull() {
    return (size == capacity);
}

bool isEmpty() {
    return (size == 0);
}

void enqueue(int data) {
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }
    qu[rear] = data;
    rear = (rear + 1) % capacity;
    size++;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << qu[front] << endl;
    front = (front + 1) % capacity;
    size--;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    int i = front;
    do {
        cout << qu[i] << " ";
        i = (i + 1) % capacity;
    } while (i != rear);
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();

    return 0;
}
