#include <stdio.h>


char * test1(){
    char str[] = "abc";
    printf("test1:%p \n",&str);
    char * a = str;
    printf("char a * addres is %p\n",&a);
    return  str;
}

void test2(){
    char *p = NULL;
    p = test1();
    printf("test2:%p\n",&p);
}

int main() {
    printf("Hello, World!\n");
    test2();
    return 0;
}
