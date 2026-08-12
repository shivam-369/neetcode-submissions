class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> sCount, tCount;

        for(int i = 0; i < s.length(); i++){
            sCount[(char)s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            tCount[(char)t[i]]++;
        }

        set <char> tSet(t.begin(), t.end()), sSet(s.begin(), s.end());

        if(sSet.size() != tSet.size()){
            return false;
        }

        for(char c: sSet){
            if(sCount[c] != tCount[c]){
                return false;
            }
        }

        return true;
    }
};
