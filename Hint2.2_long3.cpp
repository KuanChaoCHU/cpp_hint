#include<iostream>
#include<iomanip>
using namespace std;
/*
int main()
{
    long int a,i,b,d; //a是計次變數(指數的)；i是第幾位數之變數；b是計次變數(輸出的)；d是位數-1，即陣列的最大值
    long long int n,m,v,s; //n是底數；m是指數；v是進位暫存變數；s用來記錄整數位數
    while(true)
    {
        cout << "請輸入二整數n,m，本程式將計算n^m: ";
        cin >> n >> m;
        long long int x[100000]={0}; //宣告int x陣列
        v=0; //清空v的值
        s=1; //不管怎麼樣，s必會大於等於1，因為整數一定有位數
        x[0]=1; //先讓最早要乘的這格陣列值等於1
        for(a=1;a<=m;a++)
        {
            for(i=0;i<s;i++)
            {
                x[i]=x[i]*n+v; //各個位數運算式，v是有進位時要加上去的
                v=x[i]/1000000000; //v若大於0，則需進位
                x[i]=x[i]%1000000000; //每格陣列存九位數
                if(v!=0&&i+1==s) //判斷陣列是否+1
                s++; //記錄陣列位數
            }
        }

        cout << "值：" ;
        for(b=s-1;b>=0;b--) //反向輸出
        {
            if(b!=s-1) //最前面的陣列前面不能補0
            cout << setfill('0') << setw(9) << x[b];
            else //最前面的陣列輸出
            cout << x[b];
        }
        cout << endl; //換行

        if(i==1) //如果整數不超過一個陣列(即不超過9位數)
        {
            s=0; //陣列位數清除
            while(x[0]>=1) //取得整數位數
            {
                x[0]=x[0]/10;  //去掉最後一位
                s++;  //整數位數加一
            }
        }
        else //如果整數超過一個陣列(即超過9位數)
        {
            d=s-1; //d是陣列最大值
            s=(s-1)*9; //陣列位數扣掉最前面的陣列再乘9，就是扣掉最前面的陣列目前的整數位數
            while(x[d]>=1) //取得整數位數
            {
                x[d]=x[d]/10; //去掉最後一位
                s++; //整數位數加一
            }
        }


        cout << "共" << s << "個位數" << endl;
    }

    return 0;
}
*/
