class Solution {
public:
    int maxHistogram(vector<int> &heights){
        vector<int> nsl;
        vector<int> nsr(heights.size());
        stack<pair<int,int>> s;
        for(int i=0;i<heights.size();i++){
            if(s.size()==0){
                nsl.push_back(-1);
            }else if(s.size()!=0){
                while(s.size()!=0 && s.top().first >= heights[i]){s.pop();}
                if(s.size()==0){nsl.push_back(-1);}
                else{nsl.push_back(s.top().second);}
            }
            s.push({heights[i],i});
        }
        while(s.size()!=0){s.pop();}
        for(int i=heights.size()-1;i>=0;i--){
            if(s.size()==0){
                nsr[i]= -1;
            }else if(s.size()!=0){
                while(s.size()!=0 && s.top().first>=heights[i]){s.pop();}
                if(s.size()==0){nsr[i]= -1;}
                else{nsr[i]= s.top().second;}
            }
            s.push({heights[i],i});
        }
        int max=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int l = nsl[i]==-1?i:i-nsl[i]-1;
            int r = nsr[i]==-1?heights.size()-i-1:nsr[i]-i-1;
            int k = heights[i]*(l+r+1);
            if(k>max){max=k;}
        }
        return max;
    }
    void convert(vector<char> &c, vector<int> &req){
        for(int i=0;i<c.size();i++){
            if(c[i]=='1'){req[i]++;}
            else{req[i]=0;}
        }
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans=INT_MIN;
        if(matrix.size()==0){return 0;}
        vector<int> req(matrix[0].size());
        for(int i=0;i<matrix.size();i++){
            convert(matrix[i],req);
            ans = max(ans,maxHistogram(req));
        }
        return ans;
    }
};