#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int value) {
    //메모리 공간을 할당하고 그 시작 주소를 반환.
    Node *n = malloc(sizeof(Node));
    n->value = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}


Node *insert(Node *node, int value) {
    // 노드 NULL 검사
    if (node == NULL) return createNode(value);

    if (value < node -> value) {
        node -> left = insert(node -> left, value);
    }

    else if (value > node -> value) {
        node -> right = insert(node -> right, value);
    }

    return node;
}

void inorder (Node *node){
    if (node == NULL) return;
    inorder(node -> left);
    printf("%d" , node -> value);
    inorder(node -> right);
}

