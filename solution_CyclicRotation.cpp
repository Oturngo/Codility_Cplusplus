vector<int> solution(vector<int> &A, int K) {
    if(A.size()<=0)
        return A;

    while(K>0){
        int e=A.back();
        A.pop_back();
        A.insert(A.begin(), e);
        K--;
    }
    return A;
}