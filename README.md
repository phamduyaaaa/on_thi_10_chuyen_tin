# 15 Bài tập Sàng số — Competitive Programming

## Bài 1. Kiểm tra số nguyên tố

**Độ khó:** Dễ

### Đề bài
Cho số nguyên dương \(N\). Hãy xác định \(N\) có phải là số nguyên tố hay không.

Một số nguyên tố là số nguyên lớn hơn 1 chỉ có đúng hai ước dương là 1 và chính nó.

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^9\)).

### Output
- In `YES` nếu \(N\) là số nguyên tố.
- In `NO` nếu \(N\) không phải số nguyên tố.

### Ví dụ
Input:
```text
17
```

Output:
```text
YES
```

---

## Bài 2. Liệt kê số nguyên tố

**Độ khó:** Dễ

### Đề bài
Cho số nguyên \(N\). Hãy liệt kê tất cả các số nguyên tố trong đoạn từ 2 đến \(N\), theo thứ tự tăng dần.

### Input
- Một dòng chứa số nguyên \(N\) (\(2 \le N \le 10^6\)).

### Output
- In tất cả số nguyên tố không vượt quá \(N\), cách nhau bởi một dấu cách.

### Ví dụ
Input:
```text
20
```

Output:
```text
2 3 5 7 11 13 17 19
```

---

## Bài 3. Đếm số nguyên tố

**Độ khó:** Dễ

### Đề bài
Cho số nguyên \(N\). Hãy đếm có bao nhiêu số nguyên tố không vượt quá \(N\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^7\)).

### Output
- In ra số lượng số nguyên tố không vượt quá \(N\).

### Ví dụ
Input:
```text
10
```

Output:
```text
4
```

Giải thích: Các số nguyên tố không vượt quá 10 là 2, 3, 5 và 7.

---

## Bài 4. Đếm số nguyên tố trong mảng

**Độ khó:** Dễ

### Đề bài
Cho mảng gồm \(N\) số nguyên dương. Hãy đếm số phần tử là số nguyên tố.

Mỗi phần tử trong mảng được tính riêng. Nếu một số nguyên tố xuất hiện nhiều lần, mỗi lần xuất hiện đều được tính.

### Input
- Dòng đầu chứa số nguyên \(N\) (\(1 \le N \le 10^5\)).
- Dòng thứ hai chứa \(N\) số nguyên \(a_1,a_2,\ldots,a_N\) (\(1 \le a_i \le 10^6\)).

### Output
- In ra số lượng phần tử nguyên tố trong mảng.

### Ví dụ
Input:
```text
6
2 4 7 9 11 15
```

Output:
```text
3
```

---

## Bài 5. Truy vấn số nguyên tố

**Độ khó:** Dễ–Trung bình

### Đề bài
Cho \(Q\) truy vấn. Mỗi truy vấn cung cấp một số nguyên \(x\). Với mỗi truy vấn, hãy xác định \(x\) có phải số nguyên tố hay không.

### Input
- Dòng đầu chứa số nguyên \(Q\) (\(1 \le Q \le 10^5\)).
- \(Q\) dòng tiếp theo, mỗi dòng chứa một số nguyên \(x\) (\(1 \le x \le 10^6\)).

### Output
- Với mỗi truy vấn, in `YES` nếu \(x\) là số nguyên tố, ngược lại in `NO`.

### Ví dụ
Input:
```text
4
2
9
13
1
```

Output:
```text
YES
NO
YES
NO
```

---

## Bài 6. Số nguyên tố kế tiếp

**Độ khó:** Trung bình

### Đề bài
Cho số nguyên \(N\). Hãy tìm số nguyên tố nhỏ nhất \(P\) thỏa mãn \(P \ge N\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^6\)).

### Output
- In ra số nguyên tố nhỏ nhất không nhỏ hơn \(N\).

### Ví dụ
Input:
```text
10
```

Output:
```text
11
```

---

## Bài 7. Phân tích thừa số nguyên tố

**Độ khó:** Trung bình

### Đề bài
Cho số nguyên \(N\). Hãy phân tích \(N\) thành tích các thừa số nguyên tố và biểu diễn mỗi thừa số bằng số mũ tương ứng.

Ví dụ:
\[
360=2^3 \times 3^2 \times 5^1
\]

### Input
- Một dòng chứa số nguyên \(N\) (\(2 \le N \le 10^{12}\)).

### Output
- In mỗi thừa số nguyên tố theo định dạng `p^e`.
- Các thừa số được in theo thứ tự tăng dần và cách nhau bởi dấu ` * `.

### Ví dụ
Input:
```text
360
```

Output:
```text
2^3 * 3^2 * 5^1
```

---

## Bài 8. Đếm số ước

**Độ khó:** Trung bình

### Đề bài
Cho số nguyên dương \(N\). Hãy tính số lượng ước dương của \(N\), bao gồm cả 1 và \(N\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^{12}\)).

### Output
- In ra số lượng ước dương của \(N\).

### Ví dụ
Input:
```text
12
```

Output:
```text
6
```

Giải thích: Các ước dương của 12 là 1, 2, 3, 4, 6 và 12.

---

## Bài 9. Tổng các ước

**Độ khó:** Trung bình

### Đề bài
Cho số nguyên dương \(N\). Hãy tính tổng tất cả các ước dương của \(N\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^{12}\)).

### Output
- In ra tổng các ước dương của \(N\).

### Ví dụ
Input:
```text
12
```

Output:
```text
28
```

Giải thích:
\[
1+2+3+4+6+12=28
\]

---

## Bài 10. Ước nguyên tố nhỏ nhất (SPF)

**Độ khó:** Trung bình

### Đề bài
Với mỗi số nguyên \(x\) từ 2 đến \(N\), hãy xác định ước nguyên tố nhỏ nhất của \(x\).

SPF (Smallest Prime Factor) của một số \(x\) là số nguyên tố nhỏ nhất chia hết cho \(x\).

### Input
- Một dòng chứa số nguyên \(N\) (\(2 \le N \le 10^6\)).

### Output
- In \(N-1\) dòng. Dòng thứ \(x-1\) chứa SPF của số \(x\), với \(x\) chạy từ 2 đến \(N\).

### Ví dụ
Input:
```text
10
```

Output:
```text
2
3
2
5
2
7
2
3
2
```

Giải thích: SPF của 2 là 2, SPF của 3 là 3, SPF của 4 là 2, SPF của 5 là 5, và tương tự cho các số còn lại.

---

## Bài 11. Phân tích thừa số cho nhiều truy vấn

**Độ khó:** Trung bình

### Đề bài
Cho \(N\) và \(Q\) truy vấn. Mỗi truy vấn cung cấp một số nguyên \(x\). Hãy phân tích \(x\) thành các thừa số nguyên tố.

### Input
- Dòng đầu chứa hai số nguyên \(N,Q\) (\(2 \le N \le 10^6\), \(1 \le Q \le 10^5\)).
- \(Q\) dòng tiếp theo, mỗi dòng chứa số nguyên \(x\) (\(2 \le x \le N\)).

### Output
- Với mỗi truy vấn, in các thừa số nguyên tố của \(x\) theo thứ tự không giảm, cách nhau bởi dấu cách.

### Ví dụ
Input:
```text
20 3
12
17
18
```

Output:
```text
2 2 3
17
2 3 3
```

---

## Bài 12. Đếm thừa số nguyên tố phân biệt

**Độ khó:** Trung bình

### Đề bài
Với mỗi số nguyên \(x\) từ 1 đến \(N\), gọi \(\omega(x)\) là số lượng thừa số nguyên tố phân biệt của \(x\).

Ví dụ:
- \(\omega(12)=2\), vì \(12=2^2\times3\).
- \(\omega(30)=3\), vì \(30=2\times3\times5\).
- \(\omega(1)=0\).

Hãy tính \(\omega(x)\) cho mọi \(x\) từ 1 đến \(N\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^6\)).

### Output
- In \(N\) số nguyên, lần lượt là \(\omega(1),\omega(2),\ldots,\omega(N)\).

### Ví dụ
Input:
```text
10
```

Output:
```text
0 1 1 1 1 2 1 1 2 2
```

---

## Bài 13. Hàm Euler phi

**Độ khó:** Trung bình–Khá

### Đề bài
Cho số nguyên dương \(N\). Hàm Euler \(\varphi(N)\) là số lượng số nguyên \(k\) thỏa mãn \(1 \le k \le N\) và \(\gcd(k,N)=1\).

Hãy tính \(\varphi(N)\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^{12}\)).

### Output
- In ra giá trị \(\varphi(N)\).

### Ví dụ
Input:
```text
9
```

Output:
```text
6
```

Giải thích: Các số nguyên dương không vượt quá 9 và nguyên tố cùng nhau với 9 là 1, 2, 4, 5, 7, 8.

---

## Bài 14. Số nguyên tố trong đoạn lớn

**Độ khó:** Khá

### Đề bài
Cho hai số nguyên \(L,R\). Hãy tìm tất cả số nguyên tố trong đoạn đóng \([L,R]\).

Do \(R\) có thể rất lớn, không được tạo mảng đánh dấu cho toàn bộ đoạn từ 0 đến \(R\). Hãy sử dụng kỹ thuật Segmented Sieve.

### Input
- Một dòng chứa hai số nguyên \(L,R\) (\(1 \le L \le R \le 10^{12}\)).
- Đảm bảo \(R-L \le 10^6\).

### Output
- In tất cả số nguyên tố thuộc đoạn \([L,R]\) theo thứ tự tăng dần, mỗi số trên một dòng.
- Nếu không có số nguyên tố nào, in `-1`.

### Ví dụ
Input:
```text
20 40
```

Output:
```text
23
29
31
37
```

---

## Bài 15. Đếm cặp số nguyên tố cùng nhau

**Độ khó:** Khá

### Đề bài
Cho số nguyên dương \(N\). Hãy đếm số cặp có thứ tự \((a,b)\) thỏa mãn:

- \(1 \le a \le N\).
- \(1 \le b \le N\).
- \(\gcd(a,b)=1\).

Hai số được gọi là nguyên tố cùng nhau nếu ước chung lớn nhất của chúng bằng 1.

Lưu ý: Cặp \((a,b)\) và \((b,a)\) được tính là hai cặp khác nhau nếu \(a \ne b\).

### Input
- Một dòng chứa số nguyên \(N\) (\(1 \le N \le 10^6\)).

### Output
- In ra số lượng cặp có thứ tự thỏa mãn yêu cầu.

### Ví dụ
Input:
```text
3
```

Output:
```text
7
```

Giải thích: Các cặp hợp lệ là \((1,1),(1,2),(1,3),(2,1),(2,3),(3,1),(3,2)\).

**Gợi ý:** Có thể sử dụng hàm Euler \(\varphi\) để tối ưu lời giải. Xét riêng trường hợp \(a=1\) hoặc \(b=1\) khi xây dựng công thức đếm.
