vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
    vector<pair<int,int>> ans;
    int s = 0, e = n-1;
    while(s < e){
        int sum = arr[s] + arr[e];
        if(sum == target){
            ans.push_back({arr[s], arr[e]});
            s++;
            e--;
        }
        else if(sum < target){
            s++;
        }
        else{
            e--;
        }
    }
    return ans;
}
