#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if((lhs != nullptr)&(rhs != nullptr)) {
       int khs = *lhs;
       *lhs = *rhs;
       *rhs = khs;
   }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {

    if((num_rows<=0)|(num_cols<=0)){
        return nullptr;
    }

    int **arr = new int* [num_rows];
    for (int count = 0; count < num_rows; count++){
        arr[count] = new int [num_cols];
    }

    for( int i = 0; i<num_rows;i++){
        for( int j = 0; j<num_cols;j++){
            arr[i][j] = init_value;
        }
    }

    return arr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {

    if((arr_2d_source == nullptr)|(arr_2d_target == nullptr)|(num_cols<=0)|(num_rows<=0)){
        return false;
    }

    for( int i = 0; i<num_rows; i++){
        for(int j = 0; j<num_cols; j++){
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    if(arr.empty()){
        return;
    }
    if(arr.size()%2 == 0) {
        for (int i = 0; i < arr.size() / 2; i++) {
            int k = arr[i];
            arr[i] = arr[arr.size() - 1 - i];
            arr[arr.size() - 1 - i] = k;
        }
    }else{
        for (int i = 0; i <= arr.size() / 2; i++) {
            int k = arr[i];
            arr[i] = arr[arr.size() - 1 - i];
            arr[arr.size() - 1 - i] = k;
        }
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if((arr_begin != nullptr)&(arr_end != nullptr)) {
        int size = arr_end - arr_begin +1;

        if(size%2 == 0) {
            for (int i = 0; i < size/ 2; i++) {
                int k = arr_begin[i];
                arr_begin[i] = arr_begin[size - 1 - i];
                arr_begin[size - 1 - i] = k;
            }
        }else{
            for (int i = 0; i <= size / 2; i++) {
                int k = arr_begin[i];
                arr_begin[i] = arr_begin[size - 1 - i];
                arr_begin[size - 1 - i] = k;
            }
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {

    if((arr != nullptr)&(size>0)) {
        int *max = &arr[0];
        for( int i = 0; i<size; i++){
            if(arr[i]>*max){
                *max = arr[i];
            }
        }
        return max ;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd;
    if (!arr.empty()) {
        for (int i = 0; i<arr.size();i++) {
            if (arr[i] % 2 != 0) {
                odd.push_back(arr[i]);
            }
        }
    }
    return odd;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> joint;
    if ((!arr_a.empty())&(!arr_b.empty())) {
        for(int i = 0; i<arr_a.size(); i++){
            for(int j = 0; j < arr_b.size(); j++){
                if(arr_a[i]== arr_b[j]) {
                    joint.push_back(arr_a[i]);
                }
            }
        }
    }
    return joint;
}
