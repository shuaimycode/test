#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*����ṹ��*/
struct Node
{
    char num[8];
    char name[20];
    struct Node *next;
};
/*��������*/
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
        if(a[0]=='0')       //�������a[0]Ϊ0ʱ��ֹͣ����
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
            if(strcmp(da->num,db->num)==0)      //�Ƚ���������num�Ƿ���ͬ���������ַ�����ıȽ���strcmp�Ϻ�
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
