#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> dictionary;
        string word;
        vector<vector<string>> result;
        for (int count = 0; count < strs.size(); count++)
        {
            word = strs[count];
            sort(strs[count].begin(), strs[count].end());
            dictionary[strs[count]].push_back(word);
        }
        for (const auto &pair : dictionary)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};