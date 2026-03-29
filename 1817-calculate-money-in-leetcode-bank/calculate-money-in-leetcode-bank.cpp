class Solution {
public:
    int totalMoney(int n) {
        int totalmoney = 0;
        
        int lastmonday = 0;

        if(n==0){
            return 0;
        }

        int preday = lastmonday;

        for (int i = 0; i < n; i++) {
            if (i % 7 == 0) {
                preday = lastmonday + 1;
                lastmonday+=1;
            }

            totalmoney += preday;
            preday++;
        }

        return totalmoney;
    }
};