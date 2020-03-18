//  ================================================================
//  Author: fengyu
//  CreateData: 2020/3/17
//  ModifyDAta: 
//  Description:
//  =================================================================

#ifndef FOURARITHMETIC_FOURARITHMEDIC_H
#define FOURARITHMETIC_FOURARITHMEDIC_H


#include <iostream>
#include<string>

using namespace std;

class FourArithmedic {
public:
    FourArithmedic() {}

    FourArithmedic(string m_str1, char m_ch, string m_str2);            //两数的运算
    inline int compare(string str1, string str2); //相等返回0，大于返回1，小于返回-1
    string SUB_INT(string str1, string str2);   //高精度减法
    string ADD_INT(string str1, string str2);         //高精度加法
    string MUL_INT(string str1, string str2);     //高精度乘法
    string DIV_INT(string str1, string str2); //高精度除法，返回商
    string MOD_INT(string str1, string str2);  //高精度除法，返回余数
    FourArithmedic(FourArithmedic &e);  //拷贝构造
    ~FourArithmedic() {};   //析构函数
};

#endif //FOURARITHMETIC_FOURARITHMEDIC_H
