#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = 0;
int rear = 0;

int isFull(){
   return (rear + 1) % SIZE == front;
}

void enqueue(int data){

    if(isFull()){
        printf("인덱스가 꽉 찼음\n");
        return;
    }

    queue[rear] = data; 
    rear = (rear + 1) % SIZE;
}

void printQueue(){
      
    int i = front;

    while (i != rear){
        printf("%d ", queue[i]);
    
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int isEmpty(){
    if (rear == front){
        return 1;
    };

    return 0;
}

int dequeue(){

    if(isEmpty()){
        printf("큐가 비어있음\n");
        return -1;
    }

    int data = queue[front];
    front = (front + 1) % SIZE;
    return data;
}



int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();
    dequeue();

    enqueue(50);
    enqueue(60);

    printQueue();

    return 0;
}

