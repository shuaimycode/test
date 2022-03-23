#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*定义结构体*/
struct Node
{
    char num[8];
    char name[20];
    struct Node *next;
};
/*创建链表*/
struct Node * create(void)
{


    struct Node *head,*p,*q;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->next=NULL;
    q=head;
    int i,j;
    char a[8];
   for(i=0;;i++){
        p=(struct Node *)malloc(sizeof(struct Node));
        p->next=NULL;
        scanf("%s",a);
        if(a[0]=='0')       //当输入的a[0]为0时，停止输入
        {
            break;

        }
        else{
            for(j=0;a[j]!='\0';j++)
            {
                p->num[j]=a[j];
            }
            scanf("%s",p->name);
        q->next=p;
        q=p;
        }
    }
    return head;

}

void delNode(struct Node *a,struct Node *b)
{
    struct Node *da;
    struct Node *db;
    struct Node *m;
    for(db=b->next;db;db=db->next)
    {

           for(da=a->next,m=a;da;){
            if(strcmp(da->num,db->num)==0)      //比较两个链表num是否相同，对于两字符数组的比较用strcmp较好
            {
                m->next=da->next;
                struct Node *s=da;
                 da=da->next;
                free(s);
            }
            else
            {
                m=m->next;
                da=da->next;
            }
           }
        }

}

void print(struct Node *head){
    struct Node *p=head->next;
    while(p)    {
        printf("%s-%s\n",p->num,p->name);
        p=p->next;
    }
}
int main(void){
    struct Node *a,*b;
    a=create();
  b=create();
    delNode(a,b);
    print(a);
    return 0;
}
