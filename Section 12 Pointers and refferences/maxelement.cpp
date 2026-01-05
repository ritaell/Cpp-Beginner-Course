int find_max_element(int* arr, int size) {
    //-- Write your code below this line 
    int max=*arr;
    for (int i{0};i<size;i++){
        if (max<*(arr+i))
            max=*(arr+i);
    }
    return max;