//
//
//
#include <stdio.h>

int main(){
    float C=0;
    printf("请输入一个摄氏温度:");
    scanf("%f",&C);

    float H=C*1.0*9/5+32;

    printf("您输入的摄氏温度为:%.1f\n",C);
    printf("对应的华氏温度为:%.1f\n",H);

    return 0;
}
