class Solution {
public:
 unordered_map<string,string>m;
    int i=1;
    
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s="http://url/"+to_string(i);
        i++;
        m[s]=longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string s) {
        return m[s];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));