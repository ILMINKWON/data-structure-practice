#include <stdio.h>
#include <stdlib.h>

// 힙이란? - 힙(heap)은 여러 값 중 가장 큰 값이나 가장 작은 값을 바로 꺼내 볼 수 있도록 만든 트리
/*상태	① 루트	② 왼쪽 자식	③ 오른쪽 자식
    50, 30이 들어 있음	50	30	비어 있음
    다음 빈자리에 70을 넣음	50	30	70
    70이 부모 50보다 커서 둘을 바꿈	70	30	50 */


int main(){
    int array[100];
    int byeonsoo = 0;

    array[byeonsoo] = 50;      // 현재 개수를 다음 칸 번호로 사용
    byeonsoo = byeonsoo + 1;   // 기존 개수에 1을 더해서 다시 저장

    array[byeonsoo] = 30; 
    byeonsoo = byeonsoo + 1;

    array[byeonsoo] = 70; 
    byeonsoo = byeonsoo + 1;

    for(int i = byeonsoo-1; i > 0; i--){
        int temp;
        if(array[2] > array[0]){
            int temp = array[0];  // 50을 보관
            array[0] = array[2];  // 70을 0번 칸에 복사
            array[2] = temp;      // 보관한 50을 2번 칸에 복사
        }
    }

    array[byeonsoo] = 60;
    byeonsoo = byeonsoo + 1;
    
    if(array[byeonsoo - 1] > array[byeonsoo - 3]){
        int temp = array[byeonsoo - 3];
        array[byeonsoo - 3] = array[byeonsoo - 1];
        array[byeonsoo - 1] = array[byeonsoo - 3];
        array[byeonsoo - 1] = temp;
    }
    printf("%d\n", byeonsoo);
    printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
}