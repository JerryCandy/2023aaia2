#include <stdio.h>
int main()
{
    int a=5;
    ///if(a>0){///if(判斷)只做1次, 實驗完後註解掉
    ///    printf("a:%d\n",a);
    ///}
    ///while(a>0){///while(迴圈)會一直做, 實驗完後註解掉
    ///    printf("a:%d\n", a);
    ///}
    ///while(1) printf("a:1\n");

    if(999) printf("999成立\n");
    if(3) printf("3成立\n");
    if(2) printf("2成立\n");
    if(1) printf("1成立\n");
    if(0) printf("0成立?\n");///只有0不成立
    if(-1) printf("-1成立\n");///其他全部成立
    if(-2) printf("-2成立\n");
    if(-3) printf("-3成立\n");
}
