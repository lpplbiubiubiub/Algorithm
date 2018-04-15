#pragma once
#include <vector>
using namespace std;
class Combine {
public:
	vector<vector<int> > combine(int n, int k) {/*排列组合问题*/
		vector<vector<int>> result;
		vector<int> tmp;
		if (k > n || k == 0)
			return result;
		_combine(result, tmp, n, k, 1);
		return result;
	}
	void _combine(vector<vector<int>> &result, vector<int>tmp, int n, int len, int start)
	{/*递归回溯*/
		if (tmp.size() == len) {
			result.push_back(tmp);
			return;
		}
		for (int i = start; i < n + 1; i++) {
			tmp.push_back(i);
			_combine(result, tmp, n, len, i + 1);
			tmp.pop_back();
		}
	}
};
