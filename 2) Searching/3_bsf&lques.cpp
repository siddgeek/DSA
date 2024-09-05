int  first(vector<int> arr, int n, int key){
    int s=0, e=n-1, ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e){
    if(arr[mid] == key){
        ans = mid;
        e = mid - 1;
    }else if(arr[mid] < key){
        s = mid + 1;
    }
    else{
        e = mid - 1;
    }
    mid = s + (e-s)/2;
    }
    return ans;

}
int  last(vector<int> arr, int n, int key){
    int s=0, e=n-1, ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e){
    if(arr[mid] == key){
        ans = mid;
        s = mid + 1;
    }else if(arr[mid] < key){
        s = mid + 1;
    }
    else{
        e = mid - 1;
    }
    mid = s + (e-s)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = first(arr, n, k);
    p.second = last(arr, n, k);

    return p;
}
