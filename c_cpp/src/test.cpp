/*
 * @Version: 0.1
 * @Autor: zmf96
 * @Email: zmf96@qq.com
 * @Date: 2020-12-04 16:14:43
 * @LastEditors: zmf96
 * @LastEditTime: 2020-12-04 16:42:36
 * @FilePath: \src\test.cpp
 * @Description: 
 */
#include <iostream>
#include <string>
using namespace std;

void func1()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, i;
    for (i = 5; i < 10; i++)
        printf("%d, ", a[i]);
}

void fun2(int x, int y, int z)
{
    z = x * x + y * y;
}

void fun3()
{
    int a = 2, b = -1, c = 2;
    if (a < b)
        if (b < 0)
            c = 0;
        else
            c++;
    printf("%d\n", c);
}

void fun_ayst()
{
    int x = 1, find = 0;
    while (find != 1)
    {
        if (x % 2 == 1 && x % 3 == 2 && x % 5 == 4 && x % 6 == 5 && x % 7 == 0)
        {
            printf("x = %d\n", x);
            find = 1;
        }
        x++;
    }
}
void main()
{
    std::cout << "测试" << std::endl;
    int a = 31;
    fun2(5, 2, a);
    printf("%d", a);
    fun3();
    fun_ayst();
}