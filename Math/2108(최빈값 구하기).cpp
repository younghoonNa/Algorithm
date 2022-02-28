    for(int i=-4000; i<4001; i++) {
        int tmp = i;
        if(tmp<=0) {
            tmp *= -1;
            tmp+=4000;
        }
        
        
        if (max_value <= arr[i]) {
            
            if(max_value == arr[i]) {
                v_max.push_back(i);
            } else {
                v_max.clear();
                v_max.push_back(i);
                max_index = i;
                max_value = arr[i];
            }
            

        }
    }
