class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> unionSet;
        //vector<int> unionVec;
        
        for(int i =0x00; i<a.size(); i++)
        {
            unionSet.insert(a[i]);
        }
        
        for(int i =0x00; i<b.size(); i++)
        {
            unionSet.insert(b[i]);
        }
        
        vector<int> unionVec(unionSet.begin(), unionSet.end());
        
        
        return unionVec;
    }
};