bool ispossible(vector<int>& stalls, int k, int mid){
    int cow_count = 1;
    int lastpos = stalls[0];

    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastpos >=mid){
            cow_count++;
            if(cow_count == k){
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s=0;
    int maximum = -1;
    for(int i=0; i<stalls.size(); i++){
        maximum = max(maximum, stalls[i]);
    }
    int e =  maximum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(ispossible(stalls, k, mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}