#include <stdio.h>
int main()
{
    printf("�ЦL�X10�Ӧr��,���঳�Ů�b�̭�:\n");
    char line[11];///�n��r���h�@��
    scanf("%s",line);///�Ф��n���Ů棢
    printf("�o�Ӧr�O:%s �̭����r,���O�O:\n");
    for(int i=0;i<11;i++){
        printf("��%d�Ӧr��: %c �������r���O: %d\n", i, line[i], line[i]);
    }
}
