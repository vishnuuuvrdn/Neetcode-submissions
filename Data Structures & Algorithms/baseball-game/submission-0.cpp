class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;

        for(const string& s : operations){
            if(s != "+" && s != "C" && s != "D"){
                record.push(stoi(s));
            }

            if(s == "+"){
                int topElement = record.top();
                record.pop();
                int secondLast = record.top();

                record.push(topElement);
                record.push(topElement + secondLast);
            }

            if(s == "D"){
                int element = record.top();
                element = 2 * element;
                record.push(element);
            }

            if(s == "C"){
                record.pop();
            }
        }

        int sum = 0;
        while(!record.empty()){
            sum += record.top();
            record.pop();
        }

        return sum;
    }
};