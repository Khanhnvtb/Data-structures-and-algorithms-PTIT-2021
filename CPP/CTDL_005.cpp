//
// Created by khanh on 10/04/2021.
//
/*
Cho danh sách liên kết đơn lưu giữ các số nguyên được quản lý bởi con trỏ First. Viết chương trình con xóa tất cả các
phần tử có giá trị bằng x trong danh sách liên kết đơn; chương trình con trả về số lượng các phần tử đã xóa. Sau khi xóa
xong, liệt kê các phần tử còn lại trong danh sách liên kết đơn First. Ví dụ: Ta có Input sau:
14 : là số lượng phần tử trong danh sách
1 1 1 4 5 1 1 1 1 7 1 8 1 9   : là 14 phần tử
1 : là số cần xóa
Output :  4 5 7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    long n;
    cin>>n;
    vector<long>a;
    for(long i=0;i<n;i++){
        long x;
        cin>>x;
        a.push_back(x);
    }
    long x;
    cin>>x;
    //nếu a[i] khác x thì in ra kết quả
    for(long i=0;i<n;i++){
        if(a[i]!=x){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}

