#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #define 단순메크로
#define MAX_LEN 1000
#define TRUE 1
#define FALSE 0
// typedef 자료형 재정의
typedef char Data;

// 구조체
typedef struct _stack {
    Data arr[MAX_LEN];
    int top;
} Stack;

// *(포인터) 자료형의 주솟값을 저장
void StackInit(Stack *sp){
    // -> 구조체 멤버에 접근
    sp->top = -1;
}

int isEmpty(Stack *sp) {
    if(sp->top == -1) {
        return TRUE;
    }
    return FALSE;
}

void push(Stack *sp, Data data) {
    if((sp->top)+1 >= MAX_LEN) {
        return;
    }
    sp->arr[++(sp->top)] = data;
}

Data pop(Stack *sp) {
    if(isEmpty(sp)) {
        return ' ' ;
    }
    return sp->arr[(sp->top)--];
}

void printStack(Stack *sp) {
    printf("Stack: ");
    for (int i = 0; i < (sp->top)+1; i++) {
        printf("%c ", sp->arr[i]);
    }
    printf("\n");
}


int main() {
    // 구조체 변수를 선언해 메모리 할당
	Stack stack;
	// & 변수의 주소값
	StackInit(&stack);
	
	push(&stack, 'a');
	push(&stack, 'b');
	push(&stack, 'c');
	
	printStack(&stack);
	
	printf("After pop()\n");
	pop(&stack);
	printStack(&stack);
	
	
	return 0;
}