#include "sort.h"

void adjust(vector<int>& arr, int len, int idx)
{
	//Ѱ�����ڵ�
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;
	int max_idx = idx;
	//Ѱ�����ڵ�
	if (left < len && arr[left] > arr[max_idx]) {
		max_idx = left;
	}
	if (right < len && arr[right] > arr[max_idx]) {
		max_idx = right;
	}
	if (max_idx != idx) {
		swap(arr[max_idx], arr[idx]);
		//�ҵ��ӽڵ�����Ż�
		adjust(arr, len, max_idx);
	}

}

void head_sort(vector<int>& arr)
{
	int size = arr.size();
	//������
	for (int i = size / 2 - 1; i >= 0; --i) {
		adjust(arr, arr.size(), i);
	}
	//ȡ�������adjust
	for (int i = size - 1; i >= 1; --i) {
		swap(arr[0], arr[i]);
		adjust(arr, i, 0);
	}
}


