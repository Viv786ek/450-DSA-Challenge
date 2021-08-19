int maxMeetings(int start[], int end[], int n)  
{
        
        vector<pair<int,int>> p;
        for(int i=0;i<n;++i){
            p.push_back({start[i],end[i]});
        }
        sort(p.begin(),p.end());
        int count=0;
        int pt=-1;
        
        for(auto x : p){
            if(x.first > pt){
                count++;
                pt=x.second;
            }
            else if(x.second < pt){
                pt=x.second;
            }
        }
        return count;
}
