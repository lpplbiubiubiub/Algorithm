#pragma once
#include <vector>
using namespace std;
/*
�����������ö��������ݽṹ����Ƶ�һ�������㷨����������һ��ѡ������
���������ã�ƽ��ʱ�临�ӶȾ�ΪO(nlogn)����Ҳ�ǲ��ȶ�����
*/

/*
�����ѵĽṹ ʹ֮������������
arr ����������
len ��ǰ�ѵĹ�ģ
idx ��ǰ�ڵ�
*/
void adjust(vector<int>& arr, int len,  int idx);
//������
//�����һ��Ҷ�ӽڵ�ĸ��ڿ�ʼ����
//�����ֵ��������ĩβ����������
void head_sort(vector<int>& arr);