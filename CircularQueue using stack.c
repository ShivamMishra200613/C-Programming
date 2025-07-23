#include<stdio.h>
#define max 5

int st1[max];
int st2[max];
int top1 = -1;
int top2 = -1;

void push();
void pop();
void display();

void main() {
    
    int ch = 0;
    printf("Queue using stack\n\n");
    
    while(ch != 4) {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nPlease enter your choice : ");
        scanf("%d",&ch);
        
        switch(ch) {
            
            case 1 : push();
                break;
            case 2 : pop();
                break;
            case 3 : display();
                break;
            case 4 : printf("\nMADE BY SHIVAM MISHRA D10A\n");
                break;
            default : printf("Invalid Input");
        }
    }
}

void push() {
    
    if(top1 == (max-1)) {
        printf ("Queue Overflow\n");
    }
    else {
        top1++;
        printf("\nEnter a number : ");
        scanf("%d",&st1[top1]);
    }
}

void pop() {
    
    if(top1 == -1) {
        printf("Queue Underflow\n");
    }
    else {
        while(top1 != -1) {
            top2++;
            st2[top2] = st1[top1];
            top1--;
        }
        printf("\nDeleted number is %d\n",st2[top2]);
        top2--;
        while(top2 != -1) {
            top1++;
            st1[top1] = st2[top2];
            top2--;
        }
    }
}

void display() {
    
    int temp1 = top1;
    int temp2 = top2;
    
    if(temp1 == -1) {
        printf("Queue Underflow\n");
    }
    else {
        while(temp1 != -1) {
            temp2++;
            st2[temp2] = st1[temp1];
            temp1--;
        }
        while(temp2 != -1) {
            printf("%d ",st2[temp2]);
            temp2--;
        }
        printf("\n");
    }
}
