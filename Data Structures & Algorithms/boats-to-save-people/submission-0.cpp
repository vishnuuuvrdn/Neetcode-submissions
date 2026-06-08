class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        int i = 0;
        int j = people.size() - 1;

        sort(people.begin(), people.end());

        while(i <= j){
            if(people[i] + people[j] <= limit){
                boats += 1;
            }else if(people[i] > limit || people[i] == limit){
                boats += 1;
                i++;
                continue;
            }else{
                boats += 1;
                j--;
                continue;
            }

            i++;
            j--;
        }

        return boats;
    }
};