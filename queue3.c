#include <stdio.h>

#define SIZE 3

int queue[SIZE];
int front = 0;
int rear = 0;


void enqueue(int data){

    if((rear +1) % SIZE == front){
        printf ("꽉 참\n");
        return;
    }

    queue[rear] = data;
    rear = (rear + 1) % SIZE;
}

int dequeue(){

    if (front == rear){
        printf("큐가 비어 있음\n");
        return -1;
    }

    int data = queue[front];
    front = (front + 1) % SIZE;

    printf("삭제된 값: %d\n", data);
    
    return data;
}

void print(){
    int i = front;
    while(i != rear){
        printf("%d", queue[i]);
        i = (i+1) % SIZE;
    }
    
    printf("\n");
}


int main(){
        enqueue(1);
        enqueue(2);
        dequeue();
        enqueue(3);
        dequeue();
        dequeue();
        enqueue(4);
    

        print();
}