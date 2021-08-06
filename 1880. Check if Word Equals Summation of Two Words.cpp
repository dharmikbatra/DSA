class Solution {
public:
    bool isSumEqual(string first, string second, string target) {
        int i,n=target.size(),k,c=0,n1=first.size(),n2=second.size();
        i=0;
        while(i<n1 && first[i]=='a'){i++;continue;}
        if(i==n1){first="a";}
        else{ first = first.substr(i,n1-i);}       
        i=0;
        while(i<n2 && second[i]=='a'){i++;continue;}
         if(i==n2){second="a";}
        else{ second = second.substr(i,n2-i);}          
        i=0;
        while(i<n && target[i]=='a'){i++;continue;}
         if(i==n){target="a";}
        else{ target = target.substr(i,n-i);}          
        n=target.size();n1=first.size();n2=second.size();
        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());
        reverse(target.begin(),target.end());
        if(n-max(n1,n2)>1){return 0;}
        int t = max(n1,n2);
        for(i=0;i<t;i++){
            if(i<n1 && i<n2){k = first[i]-97+second[i]-97+c;}
            else if(i<n1){k = first[i]-97+c;}
            else if(i<n2){k = second[i]-97+c;}
            if(k>9){c=1;k=k%10;}
            else{c=0;}
            if(target[i]-97!=k){return 0;}            
        }
        if(n-t==1){ if(c==1 && target[n-1]=='b'){return 1;}else{return 0;}}
        if(c==0){return 1;}
        return 0;
        
    }
};