# Kiểm tra giữa tháng 9

---

# Bài 1. Đếm ước số

## Đề bài

Cho một số nguyên dương `n`.

Hãy đếm số lượng **ước dương** của `n`.

Một số `d` được gọi là ước của `n` nếu `n` chia hết cho `d`.

## Input

Một dòng duy nhất chứa số nguyên dương `n`.

## Output

In ra số lượng ước dương của `n`.

## Ràng buộc

- `1 ≤ n ≤ 10^12`

## Ví dụ

### Input

    36

### Output

    9

### Giải thích

Các ước dương của `36` là:

    1, 2, 3, 4, 6, 9, 12, 18, 36

Có `9` ước.

---

# Bài 2. Số lớn thứ hai

## Đề bài

Cho một dãy gồm `n` số nguyên.

Hãy tìm **giá trị lớn thứ hai phân biệt** trong dãy.

Hai giá trị bằng nhau chỉ được tính là một giá trị.

Nếu dãy không có ít nhất hai giá trị khác nhau, in ra `-1`.

## Input

- Dòng đầu chứa số nguyên `n`.
- Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In ra giá trị lớn thứ hai phân biệt trong dãy.

Nếu không tồn tại, in ra `-1`.

## Ràng buộc

- `2 ≤ n ≤ 10^5`
- `-10^9 ≤ a[i] ≤ 10^9`

## Ví dụ

### Input

    7
    10 5 8 10 3 8 7

### Output

    8

### Giải thích

Các giá trị khác nhau theo thứ tự giảm dần:

    10, 8, 7, 5, 3

Giá trị lớn thứ hai là `8`.

---

# Bài 3. Đoạn tăng dài nhất

## Đề bài

Cho một dãy gồm `n` số nguyên.

Hãy tìm độ dài của **đoạn liên tiếp tăng nghiêm ngặt dài nhất**.

Một đoạn được gọi là tăng nghiêm ngặt nếu:

    a[i] < a[i+1]

với mọi cặp phần tử liên tiếp trong đoạn.

Nếu hai phần tử bằng nhau, đoạn tăng bị kết thúc.

## Input

- Dòng đầu chứa số nguyên `n`.
- Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In ra độ dài của đoạn liên tiếp tăng nghiêm ngặt dài nhất.

## Ràng buộc

- `1 ≤ n ≤ 2 × 10^5`
- `-10^9 ≤ a[i] ≤ 10^9`

## Ví dụ

### Input

    9
    1 3 5 4 6 7 8 2 10

### Output

    4

### Giải thích

Đoạn tăng dài nhất là:

    4 6 7 8

Độ dài là `4`.

---

# Bài 4. Đếm cặp có tổng bằng K

## Đề bài

Cho một dãy gồm `n` số nguyên và một số nguyên `k`.

Hãy đếm số cặp chỉ số `(i, j)` thỏa mãn:

- `i < j`
- `a[i] + a[j] = k`

Mỗi cặp chỉ số được tính riêng, kể cả khi hai cặp có cùng giá trị.

## Input

- Dòng đầu chứa hai số nguyên `n`, `k`.
- Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In ra số lượng cặp chỉ số thỏa mãn điều kiện.

## Ràng buộc

- `2 ≤ n ≤ 2 × 10^5`
- `-10^9 ≤ a[i], k ≤ 10^9`

## Ví dụ

### Input

    6 10
    2 8 3 7 5 5

### Output

    4

### Giải thích

Các cặp chỉ số thỏa mãn là:

    (1, 2) → 2 + 8 = 10
    (3, 4) → 3 + 7 = 10
    (5, 6) → 5 + 5 = 10

Có `3` cặp.

---

# Bài 5. Phân tích dãy số

## Đề bài

Cho một dãy gồm `n` số nguyên.

Hãy tính:

- Giá trị lớn nhất.
- Giá trị nhỏ nhất.
- Số phần tử là số chẵn.
- Số phần tử là số lẻ.
- Tổng các phần tử dương.
- Số lượng phần tử lớn hơn giá trị trung bình của cả dãy.

Khi so sánh với giá trị trung bình, **không cần tính số thực**.

## Input

- Dòng đầu chứa số nguyên `n`.
- Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In đúng theo định dạng:

    Max: ...
    Min: ...
    Even: ...
    Odd: ...
    PositiveSum: ...
    AboveAverage: ...

Trong đó:

- `Max`: giá trị lớn nhất.
- `Min`: giá trị nhỏ nhất.
- `Even`: số phần tử chẵn.
- `Odd`: số phần tử lẻ.
- `PositiveSum`: tổng các phần tử `> 0`.
- `AboveAverage`: số phần tử lớn hơn giá trị trung bình.

## Ràng buộc

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ a[i] ≤ 10^9`

## Ví dụ

### Input

    8
    -5 10 20 -2 30 10 5 2

### Output

    Max: 30
    Min: -5
    Even: 5
    Odd: 3
    PositiveSum: 77
    AboveAverage: 2

### Giải thích

Tổng của dãy:

    -5 + 10 + 20 - 2 + 30 + 10 + 5 + 2 = 70

Giá trị trung bình:

    70 / 8 = 8.75

Các phần tử lớn hơn `8.75` là:

    10, 20, 30, 10

Do đó có `4` phần tử lớn hơn giá trị trung bình.

---
