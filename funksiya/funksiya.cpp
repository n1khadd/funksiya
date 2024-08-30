#include <iostream>
using namespace std;
float cube(float num)
{
    return num * num * num;
}
float bignum(float num1, float num2)
{    
    if (num1 > num2)
        return  num1;
    else
        return num2;
}
float plusnum(float num1)
{
    if (num1 >= 0)
        return true;
    else
        return false;
}
float calc(float num1, float num2, char op)
{
    if (op == '+')
        return num1 + num2;
    else if (op == '-')
        return num2 - num1;
    else if (op == '/')
        return num1 / num2;
    else if (op == '*')
        return num1 * num2;
}
int sadenum(int num1)
{
    if (num1 % 2 == 0 && num1 % 3 == 0)
        return false;
    else if(num1%1==0 && num1%num1==0)
        return true;

}
int main()
{
    //cout << cube(4);
    //float num1, num2;
    //cin >> num1>> num2;
    //float result = bignum(num1, num2);
    //cout << "cavab; "<< result <<endl;
    //return 0;

    //float num1;
    //cin >> num1;
    //float result = plusnum(num1);
    //cout << result << endl;
   
    //float num1, num2;
    //char op;
    //cout << "eded daxil edin:";
    //cin >> num1 >> num2;
    //cout << "seciminizi edin \n+ = toplama\n- = cixma\n/ = bolme\n* = vurma";
    //cin >> op;
    //float result = calc(num1, num2, op);
    //cout << "Cavab: " << result;

    //int num1;
    //cin >> num1;
    //int result = sadenum(num1);
    //cout << "cavab; " << result;
}

