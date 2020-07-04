
#include <iostream>
using namespace std;


int main() {

    //  0.  Normal int
    int a = 2147483647;
    char psd[] = {'s','a','e','a','\0'};

    cout << "size of int a: " << sizeof(a) << "(bytes)" << endl;
    cout << "size of char array psd: " << sizeof(psd) << "(bytes)" << endl;

    cout << "a = " << a << endl;    a+=1;
    cout << "a = " << a << endl;    //  32bits range -2^(32-1) ~ 2^(32-1) -1


    //  1.  Long int
    long long int a_long;           //  range -2^(64-1) ~ 2^(64-1) -1


    //  2.  Example
    long long int n,m,power; //n是底數；m是指數；power是乘冪運算結果
    int s,i; //s用來計算整數位數；i是for的計次變數
    //while(true)
    //{
        s=0;
        power=1;
        cout << "請輸入二整數n,m，本程式將計算n^m: ";
        cin >> n >> m;
        for(i=1;i<=m;i++) //乘冪運算迴圈
            power*=n;
        cout << "值：" <<  power; //先輸出運算結果
        while(power>=1) //取得整數位數
        {
            power=power/10; //去掉最後一位
            s++; //位數加一
        }
        cout << endl << "共" << s << "個位數" << endl;
    //}

    /*
    int 4 signed –2,147,483,648 到 2,147,483,647
    unsigned int 4 unsigned 0 到 4,294,967,295
    char 1 無 預設為 –128 至 127 (使用 /J 編譯時為 0 至 255)
    long long 8 無 (但是相當於 __int64) –9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
    unsigned long long

    浮動 4 無 3.4E +/- 38 (7 位數)
    double 8 無 1.7E +/- 308 (15 位數)
    長雙精度 與 double 相同 無 與 double 相同
    */




    return 0;
}
