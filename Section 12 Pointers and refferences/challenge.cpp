    #include <iostream>
    int* apply_all(int arr1[],int size1,int arr2[],int size2);
    void print(int* arr,size_t size);

    int main(){
    int arr1[]{6,2,3,4,5};
    int arr2[]{5,4,3,6,7,8,9};
    int* arr3=apply_all(arr1,5,arr2,7);
    print(arr3,35);
    }


    int* apply_all(int arr1[],int size1,int arr2[],int size2){
    int *arr3 {nullptr};
    arr3=new int[size1*size2];
    int position=0;
    for (int i{0};i<size2;i++){
        for (int j{0};j<size1;j++){
            arr3[position]=arr1[j]*arr2[i];
            position++;
        }
    }
    return arr3;
    }

    void print(int* arr,size_t size){
        std::cout<<"{";
        for (int i{0};i<size;i++){
        std::cout<<arr[i];
            if (i!=size-1){
            std::cout<<", ";  
            }
                
        }
    std::cout<<"}";
    }