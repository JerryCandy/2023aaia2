#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    int b[4]; ///陣列的宣告
    b[0]=9; ///陣列的使用
    b[1]=8;
    b[2]=7;
    b[3]=6;
    for(int i=0;i<4;i++){
        printf("i:%d a[i]:%d b[i]:%d\n",i,a[i],b[i]);
    }///陣列的使用 用for 迴圈, 把裡面的值都印出來

}
