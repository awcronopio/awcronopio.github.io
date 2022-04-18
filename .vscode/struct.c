#include <stdio.h>

//结构体可以让c语言创建新的类型
//创建一个学生
struct Stu
{
    char name[20];//结构体成员，成员变量
    int age;
    double score;
};

//创建一本书的类型
struct Book
{
    char name[20];
    float price;
    char id[30];
};

int main()
{
        struct  Stu s = {"yagami", 17, 99.5};//结构体的创建和初始化
        //结构体变量本身，直接.找到成员：
        printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量，成员变量
        
        //指针：
        struct Stu * ps = &s;
        printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
        
        //结构体先找到指向对象，再找到成员：
        printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名

    
        
    return 0;
}
