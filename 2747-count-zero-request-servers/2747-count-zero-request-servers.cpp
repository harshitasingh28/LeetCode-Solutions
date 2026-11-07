class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        // Step 1: Sort logs according to time
        sort(logs.begin(), logs.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        // Step 2: Store query and original index
        vector<pair<int,int>> q;

        for(int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        // Step 3: Sort queries by time
        sort(q.begin(), q.end());

        vector<int> ans(queries.size(), 0);

        unordered_map<int,int> mp;

        int left = 0;
        int right = 0;
        int activeServers = 0;

        // Step 4: Process sorted queries
        for(int i = 0; i < q.size(); i++) {

            int end = q[i].first;
            int start = end - x;
            int idx = q[i].second;

            // Add logs whose time <= end
            while(right < logs.size() &&
                  logs[right][1] <= end) {

                int server = logs[right][0];

                if(mp[server] == 0) {
                    activeServers++;
                }

                mp[server]++;
                right++;
            }

            // Remove logs whose time < start
            while(left < right &&
                  logs[left][1] < start) {

                int server = logs[left][0];

                mp[server]--;

                if(mp[server] == 0) {
                    activeServers--;
                }

                left++;
            }

            // Store answer at original query index
            ans[idx] = n - activeServers;
        }

        return ans;
    }
};