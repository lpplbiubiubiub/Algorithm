#include "sort.h"

void adjust(vector<int>& arr, int len, int idx)
{
	//寻找最大节点
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;
	int max_idx = idx;
	//寻找最大节点
	if (left < len && arr[left] > arr[max_idx]) {
		max_idx = left;
	}
	if (right < len && arr[right] > arr[max_idx]) {
		max_idx = right;
	}
	if (max_idx != idx) {
		swap(arr[max_idx], arr[idx]);
		//找到子节点继续优化
		adjust(arr, len, max_idx);
	}

}

void head_sort(vector<int>& arr)
{
	int size = arr.size();
	//建立堆
	for (int i = size / 2 - 1; i >= 0; --i) {
		adjust(arr, arr.size(), i);
	}
	//取最大。重新adjust
	for (int i = size - 1; i >= 1; --i) {
		swap(arr[0], arr[i]);
		adjust(arr, i, 0);
	}
}


