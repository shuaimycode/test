#include<stdio.h>
#include<stdlib.h>

struct link *AppendNode(struct link *head);

void DisplyNode(struct link *head);

void DeleteMemory(struct link *head);

struct link *DeleteNode(struct link *head,int nodeData);

struct link *Insert(struct link *head,int nodeData);

struct link
{
    int data;
    struct link *next;
};

int main(void)
{
    int i = 0;
    char c;
    int n;      //��ɾ�ڵ������ֵ
    int m;      //������ڵ������ֵ
    struct link *head = NULL;       //����ͷָ��
    printf("Do you want to append a new node (Y/N)?");
    scanf(" %c",&c);
    while(c == 'Y'||c == 'y')
    {
        head = AppendNode(head);    //��headΪͷָ��������β��ӽڵ�
        DisplyNode(head);           // ��ʾ��ǰ�����еĸ��ڵ���Ϣ
        printf("Do you want to append a new node (Y/N)?");
        scanf(" %c",&c);
        i++;

    }
    printf("%d new nodes have been append !\n",i);
    printf("Input you want to delete nodeData :");
    scanf("%d",&n);
    DeleteNode(head,n);     //ɾ����ɾ�ڵ�
    DisplyNode(head);       //��ʾɾ�����������ڵ���Ϣ
    printf("Input you want to insert nodeData:");
    scanf("%d",&m);
    Insert(head,m);             //����ڵ�
    DisplyNode(head);       //��ʾ����������ĸ��ڵ���Ϣ
    DeleteMemory(head);    //�ͷ����ж�̬������ڴ�
    return 0;
}

//�������ܣ��½�һ���ڵ㲢��ӵ������β��������ӽڵ��������ͷָ��
struct link *AppendNode(struct link *head)
{
    struct link *p = NULL, *q = head;
    int data;
    p = (struct link *)malloc(sizeof(struct link));     //pָ���½��ڵ�
    if(p == NULL)           //�½��ڵ�ʧ�ܣ�����ֹ����
    {
        printf("No enouth memory to allocate !");
        exit(0);
    }
    if(head == NULL)        //headΪ�գ��½��ڵ���Ϊͷ�ڵ�
    {
        head = p;
    }
    else        //ԭ����ǿգ��½��ڵ����ڱ�β
    {
        while(q->next != NULL)      //��δ����β���ƶ�����β
        {
            q = q->next;
        }
        q->next = p;        //��ĩ�ڵ��ָ��ָ���½��ڵ�
    }
    printf("Input node data:");     //����ڵ�����
    scanf("%d",&data);
    p->next = NULL;         //�½��ڵ���Ϊ��β
    p->data = data;             //�����������ֵ������½��ڵ�����
    return head;        //������ӽڵ��������ͷָ��
}

//�����Ĺ��ܣ���ʾ���������еĽڵ�Ľڵ�ź͸ýڵ��е�����������
void DisplyNode(struct link *head)
{
    struct link *p = head;
    int j = 1;
    while(p != NULL)        //�����Ǳ�β����ѭ����ӡ�ڵ��ֵ
    {
        printf("%5d%10d\n",j,p->data);//��ӡ��j���ڵ������
        p = p->next;            //��pָ����һ�ڵ�
        j++;
    }
}

//��������:�ͷ�headָ������������нڵ�ָ����ڴ�
void DeleteMemory(struct link *head)
{
    struct link *p = head,*pr = NULL;
    while(p!=NULL)      //�����Ǳ�β�����ͷŽڵ���ռ�õ��ڴ�
    {
        pr = p;     //��pr�б��浱ǰ�ڵ��ָ��
        p = p->next;     //��pָ����һ�ڵ�
        free(pr);      //�ͷ�prָ��ĵ�ǰ�Ľڵ�ռ�õ��ڴ�

    }
}

//�������ܣ�ɾ����ɾ�ڵ�
struct link *DeleteNode(struct link *head,int nodeData)
{
    struct link *p = head,*q = head;
    if(head == NULL)        //headΪ��ָ�룬��������
    {
        printf("Linked Table is empty!");
        return head;
    }
    if(p->data != nodeData && p->next != NULL)      //δ�ҵ���δ����β
    {
        q = p;          //q����ԭλ
        p = p->next;        //pָ���һλ
    }
    if(p->data == nodeData)     //�ҵ�
    {
        if(p == head)       //��ɾ�ڵ�Ϊͷ�ڵ㣬ָ����һλ
        {
            head = p->next;
        }
        else        //��ɾ�ڵ�Ϊ�м�ڵ㣬��һ�ڵ��ָ����ָ���ɾ�ڵ����һ�ڵ�
        {
            q->next = p->next;
        }
        free(p);
    }
    else        //  δ�ҵ�
    {
        printf("This node has not been found");

    }
    return head;
}

//�������ܣ������½ڵ�
struct link *Insert(struct link *head,int nodeData)
{
    struct link *p = head, *q = head, *temp = NULL;
    p = (struct link *)malloc(sizeof(struct link));
    if(p == NULL)       //�½��ڵ�ʧ�ܣ����������
    {
        printf("No enouth memory!");
        exit(0);
    }
    p->data = nodeData;
    p->next = NULL;
    if(head == NULL)        //ԭ����Ϊ������
    {
        head = p;       //headָ�����ڵ㣬��ͷָ��
    }
    else        //ԭ����ǿ�
    {
        while(q->next != NULL && q->data < nodeData)
        {
            temp = q;       //���浱ǰ�ڵ��ָ��
            q = q->next;        //ָ����һ�ڵ�
        }
        if(q->data >= nodeData)
        {
            if(q == head)       //����ͷָ��ǰ
            {
                p->next = head;     //��ָ��ָ����ָ��ͷָ��
                head = p;           //ʹheadΪͷָ��
            }
            else        //����ڵ�Ϊ�м�ڵ�
            {
                q = temp;       //qָ��ǰһ�ڵ�
                p->next = q->next;      //����ڵ�ָ����ָ����һ�ڵ�
                q->next = p;        //��һ�ڵ�ָ�����ڵ�
            }
        }
        else        //����ĩ�ڵ��
        {
            q->next = p;    //ĩ�ڵ�ָ����ָ�����ڵ�
        }
    }
    return head;
}
