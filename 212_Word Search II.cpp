class TrieNode {
public:
    bool word;
    TrieNode* children[26];
    TrieNode() : word(false) {
        memset(children, 0, sizeof(children));
    }
};

class Trie {
public:
    Trie() {}
    
    void add(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node -> children[c - 'a']) {
                node -> children[c - 'a'] = new TrieNode();
            }
            node = node -> children[c - 'a'];
        }
        node -> word = true;
    }
    
    bool search(string word) {
        TrieNode* node = leaf(word);
        if (node && node -> word) {
            node -> word = false;
            return true;
        }
        return false;
    }
    
    bool startsWith(string word) {
        return leaf(word);
    }
private:
    TrieNode* root = new TrieNode();
    
    TrieNode* leaf(string word) {
        TrieNode* node = root;
        for (int i = 0; i < word.size() && node; i++) {
            node = node -> children[word[i] - 'a'];
        }
        return node;
    }
};

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie trie = Trie();
        for (string word : words) {
            trie.add(word);
        }
        int m = board.size(), n = m ? board[0].size() : 0;
        vector<string> res;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                find(trie, board, res, "", i, j);
                if (res.size() >= words.size()) {
                    return res;
                }
            }
        }
        return res;
    }
    void find(Trie trie, vector<vector<char>>& board, vector<string>& res, string word, int i, int j) {
        int m = board.size();
        int n = board[0].size();
        if (i >= 0 && i < m && j >= 0 && j < n && board[i][j]) {
            word += board[i][j];
            if (!trie.startsWith(word)) {
                return;
            }
            if (trie.search(word)) {
                res.push_back(word);
            }
            board[i][j] = 0;
            find(trie, board, res, word, i - 1, j);
            find(trie, board, res, word, i + 1, j);
            find(trie, board, res, word, i, j - 1);
            find(trie, board, res, word, i, j + 1);
            board[i][j] = word.back();
        }
    }
};
