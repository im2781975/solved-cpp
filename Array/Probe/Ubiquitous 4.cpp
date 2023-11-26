int BinarySearchIndexOfMinimumRotatedArray(int A[], int l, int r)
{
    // extreme condition, size zero or size two
    int m;
 
    // Precondition: A[l] > A[r]
    if( A[l] >= A[r] )
        return l;
 
    while( l <= r )
    {
        // Termination condition (l will eventually falls on r, and r always
        // point minimum possible value)
        if( l == r )
            return l;
 
        m = l + (r-l)/2; // 'm' can fall in first pulse,
                        // second pulse or exactly in the middle
 
        if( A[m] < A[r] )
            // min can't be in the range
            // (m < i <= r), we can exclude A[m+1 ... r]
            r = m;
        else
            // min must be in the range (m < i <= r),
            // we must search in A[m+1 ... r]
            l = m+1;
    }
 
    return -1;
}
 
int BinarySearchIndexOfMinimumRotatedArray(int A[], int size)
{
    return BinarySearchIndexOfMinimumRotatedArray(A, 0, size-1);
}
