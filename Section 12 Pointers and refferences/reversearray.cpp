void reverse_array(int* arr, int size) {
    //-- Write your code below this line 
    //if (size%2==0){
        for (int i{0}; i<size/2; i++){
            arr[i]=arr[i]+arr[size-1-i];
            arr[size-1-i]=arr[i]-arr[size-1-i];
            arr[i]=arr[i]-arr[size-1-i];
     //   }
    }
    //-- Write your code above this line
}

