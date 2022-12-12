class Solution {
public:
    string decodeString(string s) {
        stack< pair<string,int> > stck;
        stck.push({"",1});
        int times = 0;
        for(auto character : s){
            if(isdigit(character)){
                times = (times * 10) + (character -'0');
            }
            else if(character == '['){
                stck.push({"",times});
                times = 0;
            }
            else if(character == ']'){
                int timesCount = stck.top().second;
                string setString = stck.top().first;
                stck.pop();
                while(timesCount--){
                    stck.top().first += setString;
                }
            }
            else{
                stck.top().first.push_back(character);
            }
        }
        return stck.top().first;
    }
};