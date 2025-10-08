// remove with loop
    for(int i=indx_rem;i<max_cap;i++){
        int shift = arr[i+1];
        arr[i] = arr[i+1];
    } 