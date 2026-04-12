
    int maxBalancedSubstring(string s) {
// storing 

        int count0 = 0, count1 = 0;

        for(char c : s) {
            if(c == '0') count0++;
            else count1++;
        }

        return 2 * min(count0, count1);
    }
};