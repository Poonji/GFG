class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
         unordered_map<int, int> frequencyMap;

    for (int i = 0; i < n; i++) {
        frequencyMap[a[i]]++;
        if (frequencyMap[a[i]] == k) {
            return a[i];
        }
    }

    return -1;
    }
};
