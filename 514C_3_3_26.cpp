#include <bits/stdc++.h>
using namespace std;

struct Triesnode {
    vector<Triesnode*> child;
    bool isterminate;
    Triesnode() {
        child.resize(3, NULL);
        isterminate = false;
    }
};

class Tries {
public:
    Triesnode* root;

    Tries() {
        root = new Triesnode();
    }

    int id(char c) {
        return c - 'a';
    }

    void insert(const string& word) {
        Triesnode* cur = root;
        for (char c : word) {
            int idx = id(c);
            if (!cur->child[idx])
                cur->child[idx] = new Triesnode();
            cur = cur->child[idx];
        }
        cur->isterminate = true;
    }

    bool searchdfs(Triesnode* node, const string& word, int pos, bool used) {
        if (!node) return false;
        if (pos == word.length()) return used && node->isterminate;

        int ind = id(word[pos]);

        if (node->child[ind] && searchdfs(node->child[ind], word, pos + 1, used))
        return true;

        if (!used) {
            for (int i = 0; i < 3; i++) {
                if (i == ind) continue;
                if (node->child[i])
                    if (searchdfs(node->child[i], word, pos + 1, true))
                        return true;
            }
        }
        return false;
    }

    bool search(const string& word) {
        return searchdfs(root, word, 0, false);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    Tries trie;

    while (n--) {
        string s;
        cin >> s;
        trie.insert(s);
    }

    while (m--) {
        string q;
        cin >> q;
        cout << (trie.search(q) ? "YES\n" : "NO\n");
    }
}
