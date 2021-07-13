#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution 
{
    string s;
    string q;
    vector<char> a;
    deque<char> qu;
    public:
    void pushCharacter(char ch);
    void enqueueCharacter(char ch);
    char popCharacter();
    char dequeueCharacter();
};
void Solution::pushCharacter(char ch)
{
    a.push_back(ch);
}
char Solution::popCharacter()
{
    vector<char>::iterator x;
    x=a.end()-1;
    a.pop_back();
    return *x;
}
void Solution::enqueueCharacter(char ch)
{
    qu.push_back(ch);
}
char Solution::dequeueCharacter()
{
    deque <char> :: iterator it;
    it = qu.begin();
    qu.pop_front();
    return *it;
}
int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}