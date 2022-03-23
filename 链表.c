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
    int n;      //待删节点的数据值
    int m;      //待插入节点的数据值
    struct link *head = NULL;       //链表头指针
    printf("Do you want to append a new node (Y/N)?");
    scanf(" %c",&c);
    while(c == 'Y'||c == 'y')
    {
        head = AppendNode(head);    //向head为头指针的链表结尾添加节点
        DisplyNode(head);           // 显示当前链表中的各节点信息
        printf("Do you want to append a new node (Y/N)?");
        scanf(" %c",&c);
        i++;

    }
    printf("%d new nodes have been append !\n",i);
    printf("Input you want to delete nodeData :");
    scanf("%d",&n);
    DeleteNode(head,n);     //删除待删节点
    DisplyNode(head);       //显示删除后的链表各节点信息
    printf("Input you want to insert nodeData:");
    scanf("%d",&m);
    Insert(head,m);             //插入节点
    DisplyNode(head);       //显示插入后的链表的各节点信息
    DeleteMemory(head);    //释放所有动态分配的内存
    return 0;
}

//函数功能：新建一个节点并添加到链表结尾，返回添加节点后的链表的头指针
struct link *AppendNode(struct link *head)
{
    struct link *p = NULL, *q = head;
    int data;
    p = (struct link *)malloc(sizeof(struct link));     //p指向新建节点
    if(p == NULL)           //新建节点失败，则终止程序
    {
        printf("No enouth memory to allocate !");
        exit(0);
    }
    if(head == NULL)        //head为空，新建节点置为头节点
    {
        head = p;
    }
    else        //原链表非空，新建节点置于表尾
    {
        while(q->next != NULL)      //若未到表尾，移动到表尾
        {
            q = q->next;
        }
        q->next = p;        //让末节点的指针指向新建节点
    }
    printf("Input node data:");     //输入节点数据
    scanf("%d",&data);
    p->next = NULL;         //新建节点置为表尾
    p->data = data;             //将输入的数据值赋予给新建节点数据
    return head;        //返回添加节点后的链表的头指针
}

//函数的功能：显示链表中所有的节点的节点号和该节点中的数据项内容
void DisplyNode(struct link *head)
{
    struct link *p = head;
    int j = 1;
    while(p != NULL)        //若不是表尾，则循环打印节点的值
    {
        printf("%5d%10d\n",j,p->data);//打印第j个节点的数据
        p = p->next;            //让p指向下一节点
        j++;
    }
}

//函数功能:释放head指向的链表中所有节点指向的内存
void DeleteMemory(struct link *head)
{
    struct link *p = head,*pr = NULL;
    while(p!=NULL)      //若不是表尾，则释放节点所占用的内存
    {
        pr = p;     //在pr中保存当前节点的指针
        p = p->next;     //让p指向下一节点
        free(pr);      //释放pr指向的当前的节点占用的内存

    }
}

//函数功能：删除待删节点
struct link *DeleteNode(struct link *head,int nodeData)
{
    struct link *p = head,*q = head;
    if(head == NULL)        //head为空指针，结束程序
    {
        printf("Linked Table is empty!");
        return head;
    }
    if(p->data != nodeData && p->next != NULL)      //未找到且未到表尾
    {
        q = p;          //q保持原位
        p = p->next;        //p指向后一位
    }
    if(p->data == nodeData)     //找到
    {
        if(p == head)       //待删节点为头节点，指向下一位
        {
            head = p->next;
        }
        else        //待删节点为中间节点，上一节点的指针域指向待删节点的下一节点
        {
            q->next = p->next;
        }
        free(p);
    }
    else        //  未找到
    {
        printf("This node has not been found");

    }
    return head;
}

//函数功能：插入新节点
struct link *Insert(struct link *head,int nodeData)
{
    struct link *p = head, *q = head, *temp = NULL;
    p = (struct link *)malloc(sizeof(struct link));
    if(p == NULL)       //新建节点失败，则结束程序
    {
        printf("No enouth memory!");
        exit(0);
    }
    p->data = nodeData;
    p->next = NULL;
    if(head == NULL)        //原链表为空链表
    {
        head = p;       //head指向插入节点，做头指针
    }
    else        //原链表非空
    {
        while(q->next != NULL && q->data < nodeData)
        {
            temp = q;       //保存当前节点的指针
            q = q->next;        //指向下一节点
        }
        if(q->data >= nodeData)
        {
            if(q == head)       //插入头指针前
            {
                p->next = head;     //新指针指向域指向头指针
                head = p;           //使head为头指针
            }
            else        //插入节点为中间节点
            {
                q = temp;       //q指向前一节点
                p->next = q->next;      //插入节点指针域指向下一节点
                q->next = p;        //上一节点指向插入节点
            }
        }
        else        //插入末节点后
        {
            q->next = p;    //末节点指针域指向插入节点
        }
    }
    return head;
}
