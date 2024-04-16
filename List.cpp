#include "List.h"

void L_Ini(ls &L)//初始化
{
    L.next = nullptr;
}

int L_length(ls &L) {
    if (L.next == nullptr)
        printf("链表为空\n");
    ls *p = L.next;
    int length = 0;
    while (p) {
        length++;
        p = p->next;
    }
    return length;
}

void L_Insert(ls &L, int i, int e)//插入(链表为空的情况提示是插入位置错误)
{
    ls *p;
    p = L.next;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    if (!p||j>i-1)
        {
        printf("插入位置错误\n");
        return;
        }
    ls *L1 = (ls *) malloc(sizeof(ls));
    if (L1 == nullptr) {
        printf("内存分配失败");
        exit(0);
    } else {
        L1->data = e;
        L1->next = p->next;
        p->next = L1;
    }
    printf("插入成功:\n");
}
void L_PopBack(ls &L,int e)//尾插,判断表是否为空，空的情况在首元节点后插入一片新的空间，否则遍历找到表的尾结点，在尾结点处插入
{
    //表的空间是动态申请的，需要一个申请一个
    ls *p=L.next;
    if(p==nullptr)
    {
        L.next=(ls *)malloc(sizeof(ls));
        L.next->data=e;
        L.next->next=nullptr;
    }
    else
    {
        while(p->next!=nullptr)
        {
            p=p->next;
        }
        p->next=(ls *)malloc(sizeof(ls));
        p->next->data=e;
        p->next->next=nullptr;
    }
}
void L_Delete(ls &L, int i)//删除
{
    ls *p = &L;
    int j = 0;
    while (p && j < i-1) {
        p = p->next;
        j++;
    }
    if (!p || j >i-1)
        printf("删除位置错误\n");
    else {
        ls *q = p->next;
        p->next = q->next;
        free(q);
        printf("删除成功\n");
    }
}

void L_Print(ls L)//打印
{
    ls *p = L.next;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void L_Search(ls L, int e)//查找(头指针需要从头结点开始遍历)
{
    ls *p =&L;
    int j = 0;
    while (p) {
        if (p->data == e) {
            printf("第%d个元素为%d\n", j, p->data);
            return;
        }
        p = p->next;
        j++;
    }
    printf("未找到\n");
}

void L_Destroy(ls &L)//销毁(整个表都销毁，不保留头结点)
{
    ls *p = L.next;
    ls *q;
    while (p) {
        q = p;
        p = p->next;
        free(q);
    }
}