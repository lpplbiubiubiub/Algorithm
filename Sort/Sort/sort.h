#pragma once
#include <vector>
using namespace std;
/*
堆排序是利用堆这种数据结构而设计的一种排序算法，堆排序是一种选择排序，
它的最坏，最好，平均时间复杂度均为O(nlogn)，它也是不稳定排序。
*/

/*
调整堆的结构 使之保持上述条件
arr 堆排序数组
len 当前堆的规模
idx 当前节点
*/
void adjust(vector<int>& arr, int len,  int idx);
//堆排序
//对最后一个叶子节点的父节开始倒序
//将最大值交换到最末尾，重新排序
void head_sort(vector<int>& arr);