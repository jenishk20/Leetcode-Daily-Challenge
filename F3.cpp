class Solution {
public:
	int minSetSize(vector<int>& arr) {

		int n = arr.size();
		int i;
		map<int, int>ma;
		for (auto i : arr)
			ma[i]++;

		vector<int>ans;
		for (auto i : ma)
		{
			ans.push_back(i.second);
		}
		sort(ans.begin(), ans.end(), greater<int>());

		int cnt = 0;

		int tot = n;
		for (auto i : ans)
		{
			if (tot <= n / 2)
				break;
			cnt++;
			tot -= i;
		}
		return cnt;
	}
};