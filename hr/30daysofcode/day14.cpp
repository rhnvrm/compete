// Add your code here

    Difference(vector<int> a){
        elements  = a;
    }

    void computeDifference(){
        int m = 1001, M = -1;
        for(auto i : elements){
            m = min(i,m);
            M = max(i,M);
        }
        
        maximumDifference = M-m;
    }
