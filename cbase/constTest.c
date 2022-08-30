//
// Created by surface on 2022-08-31.
//
//const 修饰的变量
//1.const修饰的全局变量
//2.const修饰的局部变量
#include "stdio.h"
const int aa = 10;

void const_test1(){
    int * paa = &aa;
    printf("paa value is %d\n",paa);
    //这里会中断掉
    *paa = 100;
    printf("paa value is %d\n",paa);
}
void const_test2(){
    const int bb = 110;
//    bb = 22;  //编译器直接检测失败
    int * pbb = &bb;
    *pbb = 11;
    printf("pbb is %d\n",bb);
    printf("pbb is %d\n",*pbb);
    printf("pbb is %d\n",pbb);
    printf("pbb is %d\n",&pbb);
}


int main(){
    const_test2();
    //常量是不能修改的
//    printf("aa value is %d",aa);
    return 0;
}
