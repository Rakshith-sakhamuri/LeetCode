class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> vec(1001,0);
        for(auto trip : trips){
            vec[trip[1]]+=trip[0];
            vec[trip[2]]-=trip[0];
        }
        for(int i=0;i<vec.size();i++){
            capacity-=vec[i];
            if(capacity<0) return false;
        }
        return true;
    }
};
