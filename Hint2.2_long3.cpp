#include<iostream>
#include<iomanip>
using namespace std;
/*
int main()
{
    long int a,i,b,d; //a��Ӌ��׃��(ָ����)��i�ǵڎ�λ��֮׃����b��Ӌ��׃��(ݔ����)��d��λ��-1������е����ֵ
    long long int n,m,v,s; //n�ǵה���m��ָ����v���Mλ����׃����s�Á�ӛ�����λ��
    while(true)
    {
        cout << "Ոݔ�������n,m������ʽ��Ӌ��n^m: ";
        cin >> n >> m;
        long long int x[100000]={0}; //����int x���
        v=0; //���v��ֵ
        s=1; //�������N�ӣ�s�ؕ���춵��1���������һ����λ��
        x[0]=1; //��׌����Ҫ�˵��@�����ֵ���1
        for(a=1;a<=m;a++)
        {
            for(i=0;i<s;i++)
            {
                x[i]=x[i]*n+v; //����λ���\��ʽ��v�����Mλ�rҪ����ȥ��
                v=x[i]/1000000000; //v�����0���t���Mλ
                x[i]=x[i]%1000000000; //ÿ����д��λ��
                if(v!=0&&i+1==s) //�Д�����Ƿ�+1
                s++; //ӛ����λ��
            }
        }

        cout << "ֵ��" ;
        for(b=s-1;b>=0;b--) //����ݔ��
        {
            if(b!=s-1) //��ǰ������ǰ�治���a0
            cout << setfill('0') << setw(9) << x[b];
            else //��ǰ������ݔ��
            cout << x[b];
        }
        cout << endl; //�Q��

        if(i==1) //������������^һ�����(�������^9λ��)
        {
            s=0; //���λ�����
            while(x[0]>=1) //ȡ������λ��
            {
                x[0]=x[0]/10;  //ȥ������һλ
                s++;  //����λ����һ
            }
        }
        else //����������^һ�����(�����^9λ��)
        {
            d=s-1; //d��������ֵ
            s=(s-1)*9; //���λ���۵���ǰ�������ٳ�9�����ǿ۵���ǰ������Ŀǰ������λ��
            while(x[d]>=1) //ȡ������λ��
            {
                x[d]=x[d]/10; //ȥ������һλ
                s++; //����λ����һ
            }
        }


        cout << "��" << s << "��λ��" << endl;
    }

    return 0;
}
*/