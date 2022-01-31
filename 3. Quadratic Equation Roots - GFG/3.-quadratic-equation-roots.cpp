// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> roots;
        int root1 = 0, root2 = 0;
        // value of b^2-4ac
        int temp = (pow(b, 2) - 4 * a * c);

        // if b^2-4ac is less then zero then roots are imaginary
        if (temp < 0)
            roots.push_back(-1);
        else {
            // calculate root1 and root2 using fomula 
            // floor function returns greatest integer below ( -b + sqrt(temp) )
            // sqrt function returns square root of temp
            root1 = floor((-b + sqrt(temp)) / (2 * a));
            root2 = floor((-b - sqrt(temp)) / (2 * a));
            // store both roots calculated in vector
            // max function returns greater value between root1 and root2
            // min function returns smaller value between root1 and root2
            roots.push_back(max(root1, root2));
            roots.push_back(min(root1, root2));
        }
        return roots;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends