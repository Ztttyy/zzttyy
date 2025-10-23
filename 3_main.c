//202510302124
//3447508507@qq.com
//谢金恩
#include <stdio.h>

int main(){
    float a,b;
    char c;

    printf("请输入两个数字(以空格分割)：\n");
    scanf("%f %f",&a,&b);

    printf("请输入运算符(+,-,*,/):");
    scanf(" %c",&c);

    int a1,a2,a3;
    float a4;
    
    switch (c)
    {
    case '+':
        a1=a+b;
        printf("运算结果为:%d",a1);
        break;
    case '-':
        a2=a-b;
        printf("运算结果为:%d",a2);
        break;
    case '*':
        a3=a*b;
        printf("运算结果为%d",a3);
        break;
    case '/':
        if(b==0){
            printf("除数为0!");
            break;
        }
        a4=a/b*1.0;
        printf("运算结果为%.1f",a4);
        break;
    default:
        break;
    }
    return 0;
}
