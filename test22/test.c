#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ��ѳ�ǩ��������������
//�������Ա����������������a˵������x�ȣ�c˵������x, z�ȣ��������ҳ��������ֵ�������
#include<stdio.h>


int main()   
{
    char a, b, c;
    for (a = 'X'; a <= 'Z'; a++)
    {
        for (b = 'X'; b <= 'Z'; b++)
        {
            if (a != b)
            {
                for (c = 'X'; c <= 'Z'; c++)
                {
                    if (a != c && b != c)
                    {
                        if (a != 'X' && c != 'X' && c != 'Z')
                        {
                            printf("a--%c,b--%c,c--%c\n", a, b, c);
                        }
                    }
                }
            }
        }
    }


return 0;
}