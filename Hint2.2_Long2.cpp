#include<iostream>
using namespace std;
/*
int main()
{
    int a,i,b; //a是計次變數(指數的)；i是第幾位數之變數；b是計次變數(輸出的)
    int n,m,v,s; //n是底數；m是指數；v是進位暫存變數；s用來記錄整數位數
    while(true)
    {
        cout << "n^m: ";
        cin >> n >> m;
        int x[500000]={0}; //宣告int x陣列
        v=0; //清空v的值
        s=1; //不管怎麼樣，s必會大於等於1，因為整數一定有位數
        x[0]=1; //先讓最早要乘的這格陣列值等於1
        for(a=1;a<=m;a++)
        {
            for(i=0;i<s;i++)
            {
                x[i]=x[i]*n+v; //各個位數運算式，v是有進位時要加上去的
                v=x[i]/10; //v若大於0，則需進位
                x[i]=x[i]%10; //每格陣列存一位數
                if(v!=0&&i+1==s) //判斷位數是否+1
                s++; //記錄整數位數
            }
        }
        cout << "值：" ;
        for(b=s-1;b>=0;b--) //反向輸出
            cout << x[b];

        cout << endl;
        cout << "共" << s << "個位數" << endl;
    }

    return 0;
}
*/
