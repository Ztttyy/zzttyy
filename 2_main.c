//202510302124
//3447508507@qq.com
//谢金恩
#include <stdio.h>

int main(){
    int grade=0;

    printf("请输入你的成绩(0-100):");
    scanf("%d",&grade);

    while (grade>100 || grade<0)
    {
        printf("数字不对，请重新输入:");
        scanf("%d",&grade);
    }
    

    if(89<grade){
        printf("A\n");
    }else if (79<grade)
    {
       printf("B\n");
    }else if (69<grade)
    {
       printf("C\n");
    }else if (59<grade)
    {
       printf("D\n");
    }else{
       printf("E\n");
    }
    return 0;
    
    


}
