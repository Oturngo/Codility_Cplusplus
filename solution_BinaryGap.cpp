#include<climits>
int solution(int N) {
    if(N < 1 || N > INT_MAX)
        return 0;
    const int num_size = sizeof(N)*8;
    int temp_gap = -1, max_gap = 0;
    for(int index = 0; index < num_size; index++)
    {
        if((N>>index)&1)
        {
            if(temp_gap > -1)
                max_gap = temp_gap;
            temp_gap = 0;
        }
        else
        {
            if(temp_gap != -1)
                temp_gap++;
        }
    }
    return max_gap;
}