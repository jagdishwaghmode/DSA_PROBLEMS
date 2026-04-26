class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, pair<int,int>> mp;
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int val = 5;        
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(vowels.find(ch) == vowels.end()) continue;
            if(mp.find(ch) == mp.end()){
                mp[ch].second = val--;
            }
            mp[ch].first++;
        }

        vector<pair<int, pair<int,char>>> arr;

        for(auto [ch, pair] : mp){
            arr.push_back({pair.first, {pair.second, ch}});
        }

        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        int i = 0;

        for(auto&ch : s){
            if(vowels.find(ch) == vowels.end()) continue;

            ch = arr[i].second.second;
            arr[i].first--;
            if(arr[i].first == 0) i++;
        }

        return s;
    }
};

