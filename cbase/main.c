#include <stdio.h>

//只初始化一次，编译期就分配内存，属于内部链接属性，只能在当前文件中使用
static int  a = 10;
//默认可以不写extern，默认就是extern，代表了全局变量，别的文件也可以使用这个变量
extern int b = 100;

char * test1(){
    char str[] = "abc";
    printf("p指针地址:%p \n",&str);
    char * a = str;
    printf("a指针地址：%p\n",&a);
    return  str;
}

void test2(){
    char *p = NULL;
    p = test1();
    printf("test2中p指针地址:%p\n",&p);
}

//int main() {
//    //不能返回局部变量地址，因为已经释放
//    printf("Hello, World!\n");
//    test2();
//    printf("%d",a);
//    return 0;
//}
