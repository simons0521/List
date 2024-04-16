#include <stdio.h>
#include <stdlib.h>
#pragma once
typedef struct List {
    int data;
    List *next;
} ls;
//含有头节点的单链表

void L_Ini(ls &L);//初始化
int L_length(ls &L);//表长
void L_Insert(ls &L, int i, int e);//插入
void L_PopBack(ls &L, int e);//尾插
void L_Delete(ls &L, int i);//删除(索引从零开始)
void L_Print(ls L);//打印
void L_Search(ls L, int e);//查找
void L_Destroy(ls &L);//销毁
