class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector <int> nsl;
        vector<int> nsr(heights.size());
        stack <pair<int,int>> s;
        for (int i=0;i<heights.size();i++)
        {
            if (s.size()==0)
                nsl.push_back(-1);
            else if(s.size()>0 && s.top().first<heights[i])
                nsl.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                {
                    s.pop();
                }
                if (s.size()==0)
                    nsl.push_back(-1);
                else
                    nsl.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
       while(!s.empty())
            s.pop();
        for (int i=heights.size()-1;i>=0;i--)
        {
            if (s.size()==0)
                nsr[i]=-1;
            else if(s.size()>0 && s.top().first<heights[i])
                nsr[i]=s.top().second;
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                {
                    s.pop();
                }
                if (s.size()==0)
                    nsr[i]= -1;
                else
                    nsr[i]=s.top().second;
            }
            s.push({heights[i],i});
        }
        vector<int> ans;
        for(int i=0;i<nsl.size();i++){
            int l= nsl[i]==-1?i:i-nsl[i]-1;
            int r = nsr[i]==-1?nsr.size()-i-1:nsr[i]-i-1;
            ans.push_back(heights[i]*(l+r+1));
        }
        return *max_element(ans.begin(),ans.end());
    }
};