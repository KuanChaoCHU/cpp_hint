
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
    long long int n,m,power; //n�O���ơFm�O���ơFpower�O�����B�⵲�G
    int s,i; //s�Ψӭp���Ʀ�ơFi�Ofor���p���ܼ�
    //while(true)
    //{
        s=0;
        power=1;
        cout << "�п�J�G���n,m�A���{���N�p��n^m: ";
        cin >> n >> m;
        for(i=1;i<=m;i++) //�����B��j��
            power*=n;
        cout << "�ȡG" <<  power; //����X�B�⵲�G
        while(power>=1) //���o��Ʀ��
        {
            power=power/10; //�h���̫�@��
            s++; //��ƥ[�@
        }
        cout << endl << "�@" << s << "�Ӧ��" << endl;
    //}

    /*
    int 4 signed �V2,147,483,648 �� 2,147,483,647
    unsigned int 4 unsigned 0 �� 4,294,967,295
    char 1 �L �w�]�� �V128 �� 127 (�ϥ� /J �sĶ�ɬ� 0 �� 255)
    long long 8 �L (���O�۷�� __int64) �V9,223,372,036,854,775,808 �� 9,223,372,036,854,775,807
    unsigned long long

    �B�� 4 �L 3.4E +/- 38 (7 ���)
    double 8 �L 1.7E +/- 308 (15 ���)
    ������� �P double �ۦP �L �P double �ۦP
    */




    return 0;
}
