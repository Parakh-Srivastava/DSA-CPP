#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int check[26] = {0};
        int res[26] = {0};
        for (char c : s)
        {
            check[c - 'a']++;
        }
        for (char c : t)
        {
            check[c - 'a']--;
        }
        for (int a = 0; a < 26; a++)
        {
            if (check[a])
            {
                return false;
            }
        }
        return true;
    }
};