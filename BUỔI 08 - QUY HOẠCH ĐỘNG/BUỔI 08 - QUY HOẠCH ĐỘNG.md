# [ALGORITHM] - BUỔI 8

# QUY HOẠCH ĐỘNG

```
Nội dung:
- Chuẩn bị các bài tập sau trên SPOJ:
    + https://vn.spoj.com/problems/LIQ/
    + https://www.spoj.com/PTIT/problems/BCCAITUI/
- Khái quát về quy hoạch động:
    + Quy hoạch động là gì? Trạng thái là gì? Có những loại quy hoạch động nào? Khi nào cần sử dụng quy hoạch động?
    + Nêu những bước cơ bản cần để giải quyết một bài toán quy hoạch động.
    + Trình bày về 2 bài toán quy hoạch động kinh điển: Dãy con tăng dài nhất và Bài toán cái túi.
```

## I. Khái quát về quy hoạch động

- Quy hoạch động là một kỹ thuật thiết kế thuật toán theo kiểu chia bài toán lớn thành các bài toán con, sử dụng lời giải của các bài toán con để tìm lời giải cho bài toán ban đầu.
- Khác với bài toán chia để trị, quy hoạch động, thay vì gọi đệ quy, sẽ tính trước lời giải của các bài toán con và lưu vào bộ nhớ (thường là một mảng), sau đó lấy lời giải của các bài toán con ở trong mảng đã được tính trước để giải bài toán lớn.
- Trạng thái là một trường hợp, một bài toán con của bài toán lớn với tham số cho trước.
- Phần lớn các bài toán quy hoạch động có thể chia thành 2 loại:
  - Bài toán quy hoạch động tối ưu: yêu cầu chúng ta phải tìm đáp án tốt nhất từ mục tiêu của bài toán (số đồng xu ít nhất, xâu con chung dài nhất, dãy con tăng dài nhất, …).
  - Bài toán tổ hợp: yêu cầu chúng ta tìm ra số cách khác nhau để thực hiện một việc gì đó. Sự khác biệt cơ bản của dạng bài toán này với dạng bài toán tối ưu là ở chỗ chúng ta cần tính tổng thay vì tìm số lớn nhất hoặc nhỏ nhất.
- Quy hoạch động được sử dụng khi ta tìm được công thức liên hệ giữa kết quả bài toán có đầu vào cho trước với một (hoặc một số) bài toán con tương tự nhưng có đầu vào nhỏ hơn. Khi ta biết được một số trạng thái bắt đầu của bài toán, nói cách khác - bài toán con với những đầu vào rất nhỏ, ta có thể sử dụng QHĐ để tính ra kết quả cuối cùng.

## II. Những bước cơ bản cần để giải quyết một bài toán quy hoạch động

- Phân rã:
  - Chia bài toán cần giải thành những bài toán con nhỏ hơn đến mức có thể giải trực tiếp được hay không??
- Nếu được => Giải các bài toán con và ghi nhận lời giải:
  - Lưu trữ lời giải của các bài toán con vào một bảng để sử dụng về sau.
- Tổng hợp lời giải:
  - Tổng hợp lời giải các bài toán con kích thước nhỏ hơn thành lời giải bài toán lớn hơn.
  - Tiếp tục cho đến khi thu được lời giải của bài toán xuất phát (là bài toán con có kích thước lớn nhất).

## III. Hai bài toán quy hoạch động kinh điển

### Dãy con tăng dài nhất

- Dùng mảng f[] để lưu độ dài dãy con tăng dài nhất. f[i] là độ dài dãy con tăng dài nhất khi xét đến phần tử a[i].
- Với mỗi a[i] ta sẽ xét từ 0 đến i-1:
  - Nếu a[i] > a[j] và f[i] < f[j] + 1 thêm a[i] vào dãy con kết thúc tại a[j] nếu a[i] > a[j].
- Duyệt f[], phần tử lớn nhất là độ dài dãy con tăng dài nhất.
  
  ```c++
    #include<bits/stdc++.h>  
    #define MAX 1001
    using namespace std;     

    int LIS( int A[], int n )  {  
        int L[n];
        L[0] = 1;    
        for (int i = 1; i < n; i++ )  { 
            L[i] = 1; 
            for (int j = 0; j < i; j++ ) 
                if ( A[i] > A[j] && L[i] < L[j] + 1)  
                    L[i] = L[j] + 1;  
        }   
        return *max_element(L, L+n); 
    }

    int main()  {  
        int A[MAX], n, T=1;
        while(T--) {
            cin>>n;
            for(int i=0; i<n; i++) cin>>A[i];
            cout<<LIS(A,n)<<endl;
        }
    }
  ```

### Bài toán cái túi

- Dùng mảng f[] lưu tổng giá trị lớn nhất mà tên trộm có thể lấy được khi chọn trong các món đồ từ 1 đến i và có khối lượng không vượt quá j. Kết quả của bài toán sẽ là f[m].
- Duyệt đến đồ vật thứ i, và giới hạn trọng lượng hiện tại là j, ta sẽ xét:
  - Chỉ xét đến khi mà j >= w[i]: Nếu vật thứ i được chọn vào phương án tối ưu, thì tải trọng còn lại có thể sử dụng là (j – w[i]) cho (i - 1) đồ vật phía trước, và ta được thêm giá trị là v[i] của vật thứ i.
  - Nếu vật thứ i không được chọn vào phương án tối ưu thì kết quả tối ưu sẽ lấy của (i - 1) đồ vật trước đó với giới hạn trọng lượng là j.
- Vậy ta sẽ có công thức quy hoạch động là:
  - Nếu j < w[i] thì f[i][j] = f[i - 1][j].
  - Nếu j >= w[i] thì f[i][j] = max (f[i - 1][j], f[i - 1][j - w[i]] + v[i]).
  
  ```c++
    #include <bits/stdc++.h>

    using namespace std;
 
    int n,m,w[105],v[105],f[105];
    int main()
    {
        cin >> n >> m;
        for (int i=1;i<=n;i++) cin >> w[i] >> v[i];
        for (int i=1;i<=n;i++)
        {
            for (int j=m;j>=1;j--)
            {
                if (j>=w[i]) f[j]=max(f[j],f[j-w[i]]+v[i]);
            }
        }
        cout<<f[m];
    }
  ```
