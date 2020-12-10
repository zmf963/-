/*
 * @Version: 0.1
 * @Autor: zmf96
 * @Email: zmf96@qq.com
 * @Date: 2020-11-30 11:19:24
 * @LastEditors: zmf96
 * @LastEditTime: 2020-11-30 12:43:11
 * @FilePath: \src\kmp.cpp
 * @Description: 
 */

#include <iostream>
#include <string>
using namespace std;

// next数组：　当模式串的第ｊ个字符匹配失败时，令模式串跳到next[j]在继续匹配
//            当第ｊ个字符匹配失败，有前1~j-1个字符组成的串记为S，则：
//            next[j] = S的最长相等前后缀长度＋1
//            特别地：　next[1] = 0
                 //    next[2] = 1
                    
int get_next() {
    
}

void main()
{
    std::cout << "KMP模式匹配算法" << std::endl;
}