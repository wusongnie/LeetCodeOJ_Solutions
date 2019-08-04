class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        if (word.size() < abbr.size()) return false;
		size_t i = 0;
        size_t j = 0;
		while (i < abbr.size()) {
			if (j >= word.size()) return false;
			if (abbr[i] == word[j]) {
				i++;
				j++;
				continue;
			}
			if (abbr[i] >= '1' && abbr[i] <= '9') {
				size_t k = i;
				while (i < abbr.size() && abbr[i] >= '0' && abbr[i] <= '9') i++;
				j += stoi(abbr.substr(k, i - k));
				continue;
			}
			return false;
		}
		return i == abbr.size() && j == word.size();
    }
};
