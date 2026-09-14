// 처음부터 다시 만들 것

#include <stdio.h>

#define SIZE 10

int hashtable[SIZE];

int hashFunction(int key){
    return key % SIZE; 
}


// 선형 탐사
int hashInsert(int key){
    
    int index = hashFunction(key);
    int start = index;

    while (hashtable[index] != 0) {
        index = (index + 1) % SIZE;

        if(index == start) {
            // break 는 반복문만 종료
            // break;

            //함수 전체를 그냥 끝내기
            return 0;
        }
    }
    
    hashtable[index] = key;
    return 1;

}

int hashSearch(int key){
    int index = hashFunction(key);

    if(hashtable[index] == key){
        return index;
    }
}
