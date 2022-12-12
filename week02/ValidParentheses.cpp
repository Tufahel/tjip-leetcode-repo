class Solution {
public:
    bool isValid(string s) {
        //TC : O(N)
        //MC : Confused(?)
        stack<char>bracketStack;
        for(auto character : s){
            if(character == '(' || character == '{' || character == '['){
                bracketStack.push(character);
            }
            else if(character == ')' || character == '}' || character == ']'){
                if(!bracketStack.empty()){
                    if((character == ')' && bracketStack.top() == '(') || (character == '}' && bracketStack.top() == '{') || (character == ']' && bracketStack.top() == '[')){
                        bracketStack.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(bracketStack.empty()) return true;
        else return false;
    }
};