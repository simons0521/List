#include "Sqlist/Sqlist.h"
#include "List/List.h"

int L_length(ls &L);                                               //sl 顺序表-----ls链表
//void Test1(sl &L)//初始化                     //Test_顺序表操作-----Test__链表操作
//{
//    SL_Ini(L);
//}
//void Test2(sl &L,int i,int e)//插入
//{
//    SL_Insert(L,i,e);
//}
//void Test3(sl &L,int i)//删除
//{
//    SL_Delete(L,i);
//}
//void Test4(sl &L,int e)//查找
//{
//    SL_Find(L,e);
//}
//void Test5(sl &L)//打印
//{
//    SL_Print(L);
//}
//void Test6(sl &L,int e)//尾插
//{
//    SL_PopBack(L,  e);
//}
//void Test7(sl L1,sl L2,sl L3)//合集
//{
//    SL_Union(L1, L2,L3);
//}
//void Test8(SL L1,SL L2,sl L3)//合集升序
//{
//    SL_Union1(L1, L2,L3);
//}
//void Test9(sl &L)
//{
//    SL_Destroy(L);
//}
void Test11(ls &L)//初始化
{
    L_Ini(L);
}

void Test22(ls &L, int i, int e)//插入
{
    L_Insert(L, i, e);
}

void Test33(ls &L, int i)//删除
{
    L_Delete(L, i);
}

void Test44(ls &L, int e)//查找
{
    L_Search(L, e);
}

void Test55(ls &L)//打印
{
    L_Print(L);
}

int Test66(ls &L) {
    return L_length(L);
}

void Test77(ls &L)//销毁
{
    L_Destroy(L);
}
void Test88(ls &L,int e)
{
    L_PopBack(L,e);
}
int main() {
//    sl L1, L2,L3;
//    Test1(L1);
//    Test1(L2);
//    Test1(L3);
//    for (int i = 0; i < 4; i++) {
//        Test6(L1, i);
//        Test6(L2, i + 2);
//    }
//    Test5(L1);
//    printf("\n");
//    Test5(L2);
//    printf("\n");
//    Test2(L1, 2, 1);
//    Test5(L1);
//    printf("\n");
//    Test3(L1, 2);
//    Test5(L1);
//    printf("\n");
//    Test4(L1,2);
//    Test5(L1);//打印
//    printf("\n");
//    Test5(L2);
//    printf("\n");
//    Test7(L1,L2,L3);
//    printf("\n");
//    Test8(L1,L2,L3);
//    printf("\n");
//    Test9(L1);
//    Test9(L2);
    ls L;
    Test11(L);
    Test88(L,1);
    Test88(L,2);
    Test55(L);
    printf("\n");
    //Test22(L,Test66(L),3);
    Test22(L,2,3);
    Test55(L);
    printf("\n");
    Test33(L,2);
    Test55(L);
    printf("\n");
    Test44(L,8);
    Test77(L);
}
