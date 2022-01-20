int bineary(int *arr, int target, int first, int last) {

    if(first > last)
        return 0;
        
    else {

        int mid = (first + last)/2;
        
        if(arr[mid] == target)
            return 1;

        else if(arr[mid] > target)
            return bineary(arr, target, first,mid-1);

        else
            return bineary(arr, target, mid+1,last);
    }

}
