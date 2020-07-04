/*
���]�� 8 �� bits�A�C�� bit ���u��s�� 0/1 �A�o�u�O²�檺�ƦC�զX���D�A�@�� bit �� 2 �Ӫ��A�A8�� bits �N�� 2*2*2*2*2*2*2*2 = 2^8 = 256 �ت��A�C��O�Y�� 8bits ��ܤ@�� "�L����" ���ܡA�����d��O 0~255�A256 �ت��A�C�M�ӭY�� 8 bits ��ܤ@�� "������" ���ܡA�ڭ��٭n�Ҽ{���t�����D�A��O�⥦���b�A256/2 = 128�A�d��O -128 ~ +127�A�]�t 0 �`�@ 256 �ӡC����F�N�O�U��������

(1.a) n bits �L���ƪ�ܽd��G 0~2^n
(1.b) n bits �����ƪ�ܽd��G-2^(n-1) ~ +(2^(n-1)-1)

�ܩ󨺨� int �Bunsigned int ��ƽd��A�]�O�γo�ؤ覡�h��X�Ӫ��A���O���W�_���ѤW�� int �d��O -2147483648 ~ 2147483647 �N�O�o�ӽd��A�O�]���u�ثe�{���v�� compiler �갵 int �O���� 32 bits�A��X�Ӫ���ܽd��N�O�W�����ˡC�ܩ󦭴��� Turbo C (�p�G�z�٦b�ݳo�������ѡA�i�H�ᱼ���F)�Acompiler �갵 int �O���� 16 bits�A�ҥH�d��O -32768 ~ +32767�C

�n�F�A�o�̳̫ỡ���A�����򨺨ǰ��v���B�z���AŪ�ɪ��ɭԬO�� fgetc�A���o��ĳ�L�̪���ƫ��A�n�]�� unsigned char �Ӥ��O�]  char�C��]��²��A�ѩ� fgetc �O�Ǧ^ int�A�Ǥ@���uŪ 8 bits ��ơA�����o��o 8bits ��Ū�� int�A�]�N�OŪ�X�Ӫ��d��|�O -128~+127�A�M�ӹ�ڤW fgetc �v�����X�Ӫ��ȫo�Ʊ�|�O 00~FF�A�]�N�O 0 ~255 �A��O�~��ĳ�ŧi�� unsigned char�C

��O�O�H�� library �N���ۤv���w�q�X�{�F�A�����o�ؼg�k

typedef char i8;                   // 8bits ������
typedef unsigned char u8;    // 8bits �L����
typedef short i16 ;              // 16 bits ������
typedef unsigned short u16; // 16 bits �L����
typedef int i32 ;                  // 32 bits ������
typedef unsigned int u32 ;    // 32 bits �L����
typedef long long i64;     // 64 bits ������
typedef unsigned long long u64;     // 64 bits �L����


2. IEEE754 �G�i��B�I�ƺ���

�ثe�q���s��B�I�Ƴ��O�q IEEE754 �W��A�`����������(32bits ��ܤ@�ӯB�I��)�M����� (�κ٭���סA64bits ��ܤ@�ӯB�I��)�A�䥦�����������ӳ���(43bits �H�W)�B���������(79 bits �H�W�A�`�H80bits �갵)�C

�Ӧ��Ϊ� bit �ƷU�h�A�N��i�H��ܪ��d��U�j�B�i��ܪ��p���I��ƷU�h�A���۹諸�A���� bit �ƷU�h�A�p��ɶ� "�z�פW" ���|���[�C�`�N���̥ΤF"�z�פW"�T�Ӧr�A��]�O�{�N�j�h�� GPU�A�ϱo�B�z 64 bits ���B�I�Ƥ�_ 32 bits ���B�I�Ƨ֡C�G�Y�D�ե���d API �� (�����D�o�ʧ@�S���Y�A�U�@�y�~�O���I)�A���̫�ĳ�ɶq�ϥ� 64 bits �� double �A�����F�� float �h�Y 32 bits ���~�A���׳t�סB��ǫסB�i��ܽd�򳣦b float ���W�C


���F�~�����U�h�A�o�̥��w�q�X�@��²�檺�Ÿ��X�ӡG

���t���GS (Signed)
���ơGE (Exponent)
�p�ơGF (Fraction)
��춶�ǬO (S - E - F)

3. IEEE754 ���

�o�����ڥu�j�����@�U�A�䥦�� NAN�BINFINITE �ګK���L�C���]�{�b�کw�q�F�@�� 8bits �� �B�I�ƪ�ܡA���t��(S)�Y 1 bit�A����(E)�Y 3 bits�A�p��(F)�Y 4 bits (�A���n���A�o�O�ڰ��]��)�C�n�Ҽ{���O�A�Y�ϥ� IEEE754 �榡�s�o 8 bits �A�s�U�Ӫ������٬O 0/1 ����ơC�o�̭n�`�N���O�A����(E) �������b�s�����ɭԤ@�w�| +/- �@�� base value�A�H�o�ӨҤl�Ө��A�ڪ�����(E) �O�� 3 bits�A���� base value = 2^(3-1)-1 = 3�C �]���Ƭ� n bits �Abase value ������ 2^(n-1)-1�C�s�i�h�ɬO +base value�F���X�ӮɬO -base value�C

�{�b�A���]�ڱN +110.11 �o�ӤG�i��B�I�Ʀs�i�h�C�B�J�p�U

(3.a) �M�w���t���G���s 0�A�t�s 1�A�Ӥ@�� C language �b floating ��ܪk�W�A�]�s�b�ۥ��t�s�����D�C
(3.b) ���W�ơG�H�G�i���Ǫ�ܪk�i�楿�W�ơA�p���I�e���u���@�Ӱߤ@�@��1�A��O�ন�F1.1011 * 2^2   (�p���I������2��A�ҥH�O 2^2)�A��O���� E=2
(3.c) �վ���ơG�W��������Ҧ����ƭn +/- �@�� base value�A�o�ӨҤl���� base value = 3�A�b�s�i�h���ɭԬO + base value�A���X�Ӫ��ɭԬO - base value�A��O��ɭԦs���ɭԬO�s 2 + 3 = 5 �A�G�i���ܬ� 101

(3.d) �s�i IEEE754 ���G�s�i�h���ɭԴN���o��

 IEEE754-2.png

�ܩ�Ū�X�Ӫ��ɭ�

(3.a) Ū�� +/- ���GŪ�� 0 �A�� +
(3.b) Ū������(E)�GŪ��101�A��5�A�A��h�W base value (=3) �A�G���Ƴ����� 2
(3.c) Ū���p��(F)�GŪ�� 1011
(3.d) ��ܧ���ƭȡG����ƭȧY�� +1.1011 * 2^2�A�]�N�O 110.11

���D�G����O 1.1011�A�Ӥ��O 0.11011 ? ���׫�²��A�] IEEE754 �W�w�̡A�b���W�ƮɡA�������W�Ʀ��p���I�e�@�쬰1�A�M��u�s�p���I�᭱���Ʀr�C

������{�b�A�Ĥ@����Ĳ���H�i��L�k�������� base value�A���L IEEE754 �b�s E ���ɭԴN�O�n +/- ���� base value (�n�B�ڷQ�O�i�H "�ɶq" �����ǧa )�C

base value ����k�A�j�աA���]�� n �� bits �s���ơAbase value = 2^(n-1)-1 �C

��A�n�F�A���U�ӧڭ̥i�H�������Q���ǳ��סB����ת����D�F�C

4. ���׻P����׮榡

������@�i�ϤW�ӻ������׻P����׮榡

IEEE754-1.png

�A��z�@�U

(4.a) ���ׯB�I�ơG���t�� 1 bit�A���Ƴ��� 8 bits�A�p�Ƴ��� 23 bits�A�@ 32 bits
(4.b) ����ׯB�I�ơG���t�� 1 bit�A���Ƴ��� 11 bits�A�p�Ƴ��� 52 bits�A�@ 64 bits

�o�˧ڭ̫K�i�o��\�h����


<����1> ���(��T��)

���ת��p�Ƴ����O 23 bits�A�G ���ׯB�I�Ƥ���׬�2^-23 = 1.192092896 * 10^-7�A�o�N�O������סC
����ת��p�Ƴ����O 52 bits�A�G ����ׯB�I�Ƥ���׬�2^-52 = 2.220446049 * 10^-16�A�o�N�O����ת���סC


<����2> �̤j���ơB�̤p�t��

���� - �i�H�s���̤j�ȬO�b���Ƹ̭������� 1�A���̫�@�Ӧ쥲�ݬO�� 0 (��]�O���� 1 ���w�Q�O�d�@���S��Ȫ�ܥ�)�A�Ӫ�ܪ����e�٭n�����@�� base value (2^(8-1)-1 = 127)�A�]�N�O�i�H��ܫ��ƪ��̤j�Ȭ� 1111 1110 = 254�A���� base value = 254 - 127 = 127�F�ܩ�p�Ƴ�������1���Ʒ|�� 32 ��1�F�ҥH�i�H���ץi�H��ܪ��̤j���Ƭ�

���׳̤j���� �G+1.1111.... (�p���I��23��1) * 2^127 = +(2- (2^-23)) * ( 2^127) = +3.402823668  * 10^38
����׳̤j���� �G�@�˪���k�A +(2-(2^-52)) * (2 ^ 1023) = +1.7976931348 * 10^308

�ܩ�̤p�t�ơA���M�W�������p�@�Ҥ@�ˡA�u�O�b Signed bit ���a��q 0 �令 1 �Ӥw�A��O

���׳̤p�t�� �G -(2- (2^-32)) * ( 2^127) = -3.402823668 * 10^38
����׳̤p�t�� �G -(2-(2^-52)) * (2 ^ 1023) = -1.7976931348 * 10^308

�۫H�o�|�ӼƭȩM�U��b�Ь�ѤW�� float �Bdobule �i��ܽd��ۮt�L�X�C


<�䥦����>

�ܩ�̤p���ơB�̤j�t�ƪ����D�A���O�ܪ�ı�����W�������غ�k�A��]�b�� IEEE 754 �榡�A���F���F�@�Ǩҥ~���p (�p�L�a�j�BNot a number ����)�A��O�̤p���ơB�̤j�t�ƨä��󦹳B�U���� (�|��峹�U��U��)�C

�o�������̱N�� [�B�I��] C/C++ �B�I�ƯS��� �o�����~�򱴰Q�A���g���L�K���A�`�J�حz�C

�t�ݪ`�N�A�ëD�Ҧ� compiler �@�w�q IEEE754 �W��(���M�ثe�j�h���O�ŦX�S��)�C�t�Y�� compiler �b�@�뱡�p�U�ŦX IEEE754 �x�s�榡�A���b�̤p���ơB�̤j�t�Ʈɷ|�����@�ǭץ��A�ϱo�i��F���̤p���ơB�̤j�t�Ƥ� IEEE754 �W��ӱo�p�ǡA�������D�� depends on compiler�A�����`�J���Q�C

5. �˦�~�t

�ѤW�z�ڭ̪��D�A���׬O�����٬O����סA���i�H��ܪ��p���٬O�������C���]�{�b�ڧ� 0.8 �s�����סA�ѩ� 0.8 �ন�p�Ʒ|�O 0.11001100110011001100... (1100 �@�� loop �U�h)�A�̫�s�����ץu��s�� 23 bits ���p�ơA�̫�A���X�Ӫ����G�i��O 0.79999998 �������A�o�ӴN�s���˦�~�t�C�ܩ� 0.2 �s���ܤ]�O�s�� 0.001000100010001...(0001 loop �U�h) �ҥH�p�G�g�X�o�˪��{���X�O�D�`�M�I

#include <iostream>
#include <cmath>
int main()
{
    float x=0.8;
    float y=0.2;
    cout << x << endl;
    cout << y << endl;
    if (fmod(x, y)==0.0) cout << "�㰣" << endl;
    return 0;
}
�W���o�q�{���X�����浲�G�O�� compiler �갵�A���O��X x ���� compiler �N�i�H�Ǩ��X 0.8�A���� compiler �o�u���X 0.799999 �������ƭ�(�ڥu���D���� compiler �|���ǡA���|���X����)�A�ܩ�B�I�Ƭ۰����l��(fmod)�����D�]�|�� compiler �갵���P�Ӧ����P���G�C���F�קK�o�ر��ΡA�ڭ̥Τ@��²�檺��k�A�w�q�@�ӫܤp�ܤp���ơA�h�׶}�o�ӱ˦�~�t���D

#include <iostream>
#include <cmath>
#define EPS 1E-6 // �w�q EPS = 10^-6
int main()
{
    float x=0.8;
    float y=0.2;
    cout << x << endl;
    cout << y << endl;
    if (fabs(fmod(x, y))<=EPS) cout << "�㰣" << endl;
    return 0;
}
����o������{���]�p�W�� "�B�I�ƻ~�t" �w�g�إߤF�۷��[���A�p�G�٭n�F�Ѥ@�ǧޥ� (��p���p��h�קK�j�ư��p�ơB�p�ư��j�Ƴy�����~�t)�A�o�譱�i�H�A�h½½�@�ǼƭȤ��R���� (�ڨS½�L�A�ҥH���ͤ]�i�H����)�C

6. �T�w Compiler ���Ѥ��B�I�ƳW��

�̫�n�������O�A�C�� Compiler ���Ѥ��B�I�ƳW��i�ण�ɬۦP�A���o�ǳW��򥻤W���O�b float.h �Bcfloat �̭��A�ڥH VC ���ҡA�K�U�@���������e�P½Ķ (����½�o�ܮt�A�Ш���)

// ���Ħ��15��
#define DBL_DIG 15
// ��ǫ�, �� 1.0 + DBL_EPSILION!=1.0
#define DBL_EPSILON 2.2204460492503131e-016
// ���Ʀ��
#define DBL_MANT_DIG 53
// �̤j��
#define DBL_MAX 1.7976931348623158e+308
// �̤j�Q�i�����
#define DBL_MAX_10_EXP 308
// �̤j�G�i�����
#define DBL_MAX_EXP 1024
// �̤p�����
#define DBL_MIN 2.2250738585072014e-308
// �̤p�Q�i�����
#define DBL_MIN_10_EXP (-307)
// �̤p�G�i�����
#define DBL_MIN_EXP (-1021)
// ���ƶi���
#define _DBL_RADIX 2
#define _DBL_ROUNDS 1

// ���Ħ��6��
#define FLT_DIG 6
// ��ǫ�, �� 1.0 + FLT_EPSILION!=1.0
#define FLT_EPSILON 1.192092896e-07F
#define FLT_GUARD 0
// ���Ʀ��
#define FLT_MANT_DIG 24
// �̤j��
#define FLT_MAX 3.402823466e+38F
// �̤j�Q�i�����
#define FLT_MAX_10_EXP 38
// �̤j�G�i�����
#define FLT_MAX_EXP 128
// �̤p�����
#define FLT_MIN 1.175494351e-38F
// �̤p�Q�i�����
#define FLT_MIN_10_EXP (-37)
// �̤p�G�i�����
#define FLT_MIN_EXP (-125)
#define FLT_NORMALIZE 0
#define FLT_RADIX 2
#define FLT_ROUNDS 1


�`�N��A�o���w�q�M�e���������X�I�ŦX���a��A�ڭ̥H DBL  (double) ���ҡA��L�� FLT �t�C�]�@�� �C



(6.1)   #define DBL_MANT_DIG   53

�o�N�� mantissa ( �]�N�O�s�B�I�ƪ����� ) �� 53 bits�A ���M��ڤW���O�� 52 bits�A���ѩ�b���W�ƹL�{���A�p���I���e��1�|�Q�ð_�ӡA�G�ܦ��F52+1 = 53�C

(6.2)  #define DBL_DIG 15

�o�������u�O�ѦҦӤw�A�ѩ�B�I���٬O�ΤG�i���ܡA52 �� bits �� mantissa�A��׬O 2^-52�A���� 10 �i��� 2.2 * 10^-16�A�G�p���I���� 15 ��ƥ��k ( 16 ��ƥH��S��k������F)�C

(6.3) #define   DBL_MAX         1.7976931348623158e+308

�o�ӤW�������L�F�A����׳̤j�ơA�]�N�O +(2 - (2^-52) ) * ( 2^1024) = +1.7976931348 * 10^308�A�M�ڭ̤W�����ɪ��t�O�ä��j�CFLT_MAX �]�O�P�q�C

(6.4) DBL_MAX_10_EXP �P DBL_MAX_EXP

�W���w�q DBL_MAX_EPS �� 1024�A�O�H�G�i�쬰��ǡA�� DBL_MAX_10_EPS �O�H�Q�i�쬰��ǡA�������Y�s�b :  2^1024  = 1.80*10^308�A�G DBL_MAX_10_EXP �N�O 308�C�`�N�@�I�A DBL_MAX_EXP ���w�q�A�ä��N�������W�Ƥ��̤j���ƭȡCDBL_MIN_10_EXP �P DBL_MIN_EXP �]�O�P�˹D�z�A�u�O�ѳ̤j�ন�̤p�Ӥw�C

(6.5) #define   DBL_EPSILON     2.2204460492503131e-016

�o�ӤW���]�����L�F�A�B�ƭȬ۷��� (���O�@�˪�)�A�ѩ� mantissa �� 52 bits�A��קY�� 2^(-52) = 2.2204460492503131e-016

* (6.6) DBL_MIN

�o�ӭȤU���|�����A�����̤��䤧�G�j compiler ( VC �t�C / gcc �t�C ) �������Ȥ��@�ˡA�C�o�ӭȫܭ��n�A�b�@�ǼƭȤ��R�ɡA�Y���]���ı���ɡA�o�ӭȱN�|�O���ӳQ�ѦҪ��̤p�~�t�A��@�䦬�ı���C�� IEEE754 �A���W�ƫᤧ�̤p����(�̤j�t��)�A���� (+/-) 2^-1022�A�o�ӭȭ�n���� VC �ҩw�q�� DBL_MIN�C



�ݡG������ 11 bits exponment�Abasement = 2^(11-1)-1 = 1023�Aexponment �d�����O (0 - basement) ~ (2^11 - basement) = -1023~1025�A (a) ������ DBL_MIN �O 2^-1022�A�Ӥ��O 2^-1023�H (b) ������ DBL_MAX_EPS �O 1024�A�Ӥ��O 1025�H

���G (a) �]�� 2^-1023�A-1023 �o�ӭȳQ�O�d�U�ӡA�ΨӪ�F���t�s�A�ҥH�̤p�O 2^-1022�C (b) �]�� DBL_EPS �A1025 �Q�O�d�U�Ӥ��O�N���t�L�a�j (�]�N�O���ɭԼg code �|�ݨ쪺 #INF )�A�ҥH�̤j�u�� 1024�C



�q�W�����R�U�Ӫ����G�O�G�w��u���W�ơv�������A VC �B�I�Ƥ��B�z�u�������ŦX IEEE754 �W��C



�W�z�o�ǩM�ڭ̤�⪺�t�O�ä��|�ܤj (���������g�S���쪺�@�Ǩҥ~�A[�B�I��] C/C++ �B�I�ƯS��� )�A�ӤW�z��ı�o������N�q�����O���� "���Ʀ��"�B"�p�Ʀ��" ���w�q�A���D�o�G�Ӥ���Ҧ��F���������o�X�ӡC

�u�ثe�v float: 32bits, double: 64bits, long double �b�W��ѤW�u���n�D���ϥΪ� bit �ƭn�j�󵥩� double�A��@�W�̦U�a Compiler �w�q�A�� VC �� long double �M double �O�@�˪��F��(���O 64 bits)�F�ܩ�䥦 Compiler ���S���� 80 bits�B128 bits�A���٬O�h�d float.h �� cfloat ���ΡC

�����e�����@��ơA�ƹ�W�w�q�b float.h �̭��� DBL_MIN / FLT_MIN�A�����O�u���W�ơv�̤p�ȡA�N����ڤW�i�H�g�ѵ{���y���S�ʤW���ާ@�A�i��i�H�X�{�� DBL_MIN / FLT_MIN ��p���ȡA�o�I�� [�B�I��] C/C++ �B�I�ƯS��� ���g�峹�N�A�ԭz�åH C �y���갵�A�̫᪺�T�i��ܥX�� FLT_MIN / DBL_MIN �٤p���B�I�ƭȡA�߹�ڤW�b�i��ƾǹB�� (�t�|�h�B��B�ƾǨ禡�B��) �ɡA�ä��A�X��N�h���o�D���W�Ƥ��̤p�ȡA�p���@�ӹB��L�{�N�ܱo���ǽT�A�]���i�a�C

*/
