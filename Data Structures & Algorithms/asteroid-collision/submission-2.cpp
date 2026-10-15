class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stk;

        for(int a : asteroids){
            while(!stk.empty() && a < 0 && stk.back() > 0){
                int collision = a + stk.back();

                if(collision < 0){
                    stk.pop_back();
                }else if(collision > 0){
                    a = 0;
                }else{
                    a = 0;
                    stk.pop_back();
                }
            }

            if(a){
                stk.push_back(a);
            }
        }
        return stk;
    }
};