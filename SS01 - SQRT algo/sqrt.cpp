#include <bits/stdc++.h>
using namespace std;

// Hàm này dùng để tính độ dài bao nhiêu chữ số sau dấu phẩy để tiện tính ạ
int dodai (double esp)
{
    long long dodai = 0;
    while (esp != int(esp))
    {
        esp*=10;
        dodai +=1;
    }
    return dodai;
}

// Hàm này dùng để so sánh 2 số thực với độ chính xác esp - ý tưởng là nhân 10 để quy hết về số nguyên rồi so sánh coi nó chênh lệnh một lượng không quá esp.
bool compare(double a, double b, double esp)
{
    long long dodaitmp = dodai(esp);

    for (long long i = 1; i <= dodaitmp;i++)
    {
        a *= 10;
        b *= 10;
        esp *= 10;
    }
    long long a2 = a;
    long long b2 = b;
    return (abs(a2 - b2) <= int (esp));
}


// Chạy hàm tìm kiếm nhị phân như bài giảng trên lớp
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,x;
    double esp;

    cin >> a >> esp;
    x = a/2;

    // Kiểm tra a có phải giá trị đặc biệt không
    if (a<0.0)
    {
        cout << "NULL";
        return 0;
    }
    else if (a == 1.0||a == 0.0)
    {
        return 0;
    
    long long lan = 1;
    // Nếu a không đặc biệt thì tìm căn
    while (!compare(a,x*x,esp))
    {

        x = ((a/x)+x)/2.0;
        lan ++;
    }
    
    cout << fixed << setprecision(dodai(esp))<< x;
   return 0;
    

}