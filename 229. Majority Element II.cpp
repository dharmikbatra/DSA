class Solution {
public:
    
    vector<int> majorityElement(vector<int>& nm) {
        if(nm.size()==1 || nm.size()==0){return nm;}
        int num1=-1,num2=-1,c1=0,c2=0;
        for(int i=0;i<nm.size();i++){
            if(nm[i]==num1){c1++;}
            else if(nm[i]==num2){c2++;}
            else if(c1==0){
                num1=nm[i];c1=1;
            }else if(c2==0){
                num2=nm[i];c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        c1=c2=0;
        for(int i=0;i<nm.size();i++){
            if(nm[i]==num1){c1++;}
            if(nm[i]==num2){c2++;}
        }
        vector<int> ans;
        if(c1> nm.size()/3){ans.push_back(num1);}
        if(c2> nm.size()/3 && num1!=num2){ans.push_back(num2);}
        return ans;
    }
};