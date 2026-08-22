class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> ans;

        for(int i = 0;i < asteroids.size(); i++){
            
            int cur = asteroids[i];
            bool destroyed = false;
            while(!s.empty() && s.top() > 0 && cur < 0){
                if( -cur > s.top()){
                    s.pop();
                    continue;
                }

                if( -cur == s.top()){
                    s.pop();
                    destroyed = true;
                    break;
                }
                
                destroyed = true;
                break;
            }

            if(!destroyed){
                s.push(cur);
            }
        
        }


        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};