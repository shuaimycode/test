#include<stdio.h>
#include<stdlib.h>
struct node{//������ṹ
    int data;
    struct node * next;
};
struct node * create(int n){//������n��Ԫ�ص�����
    struct node *head=NULL,*p=NULL,*q=NULL;
    int i;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    p=head;
    for(i=0;i<n;i++){
        q=(struct node *)malloc(sizeof(struct node));
        q->next=NULL;
        scanf("%d",&(q->data));
        p->next=q;
        p=q;
    }
    return head;
}

void rev(struct node *head)
{
    struct node *a,*b,*t;
    a=head->next;
    b=a->next;
    a->next=NULL;
    t=b->next;
    while(t->next)
    {

        b->next=a;
        a=b;
        b=t;
        t=b->next;
    }
    b->next=a;
    t->next=b;
    head->next=t;
}

void print(struct node *head){//�������
    while(head->next){
        head=head->next;
        printf("%5d",head->data);
    }
    printf("\n");
}
int main(){
    struct node *head=NULL;
    int n;
    scanf("%d",&n);
    head=create(n);
print(head);
    rev(head);
    print(head);
    return 0;
}
