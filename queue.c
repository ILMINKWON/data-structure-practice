#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isFull(){
    if(rear == 4){
        return 1;
    }

    return 0;
}

void enqueue(int data){

    if(isFull()){
        printf("인덱스가 꽉 찼음\n");
        return;
    }

    rear++;
    queue[rear] = data;
}

void printQueue(){
    for(int i = front + 1; i<=rear; i++){
        printf("%d ", queue[i]);
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

    front++;
    return queue[front];
}



int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    int num1 = dequeue();
    int num2 = dequeue();
    int num3 = dequeue();
    int num4 = dequeue();
    int num5 = dequeue();
    int num6 = dequeue();

    printf("삭제된 값: %d\n", num1);
    printf("삭제된 값: %d\n", num2);
    printf("삭제된 값: %d\n", num3);
    printf("삭제된 값: %d\n", num4);
    printf("삭제된 값: %d\n", num5);
    printf("삭제된 값: %d\n", num6);

    
    printQueue();

    return 0;
}

