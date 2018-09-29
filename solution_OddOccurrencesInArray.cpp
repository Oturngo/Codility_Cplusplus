#define n_max 1000000
#define n_min 1

int solution(vector<int> &A) {
    int N = A.size();
    if(N < n_min || N > n_max || ((N&1)==0))
        return 0;
    int ans = 0;
    for(int i = 0; i < N; i++) {
        ans^=A.at(i);
    }
    return ans;
}