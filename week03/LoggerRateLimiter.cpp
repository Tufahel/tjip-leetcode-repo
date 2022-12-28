class Logger {
public:
    unordered_map<string,int>saveTimeStamp;
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(saveTimeStamp.find(message) == saveTimeStamp.end()){
            saveTimeStamp[message] = timestamp+10;
            return true;
        }
        else if(timestamp >= saveTimeStamp[message]){
            saveTimeStamp[message] = timestamp+10;
            return true;
        }
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */