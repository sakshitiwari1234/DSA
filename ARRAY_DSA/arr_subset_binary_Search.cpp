// #include <iostream>
// using namespace std;

// bool is_subset(int arr1[], int arr2[], int m, int n)
// {
//     // int i = 0;
//     // int j = 0;
//     // for (i = 0; i < n; i++)
//     // {
//     //     for (j = 0; j < m; j++)
//     //     {
//     //         if (arr2[i] == arr1[j])
//     //         {
//     //             break;
//     //         }
//     //         if (j == m)
//     //         {
//     //             return 0;
//     //         }
//     //     }
//     // }
//     // return 1;

//     //usign stl dset fro hashing

//     set hashset;

//     for(int i=0; i<n;i++){
//         hashset.insert(arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         if(hashset.find(arr2[i]) == hashset.end()){
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int arr1[] = {11, 10, 13, 21, 30, 70};
//     int arr2[] = {11, 30, 70, 10};

//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     if (is_subset(arr1, arr2, m, n))
//     {
//         cout << "arr2 is a subset of arr1";
//     }
//     else
//     {
//         cout << "arr2 is a subset of arr2";
//     }

//     return 0;
// }