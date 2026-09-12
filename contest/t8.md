# Kiểm tra tháng 8

---

# Bài 1. Tìm ước chung lớn nhất

## Đề bài

Cho hai số nguyên dương `a` và `b`.

Hãy tìm **ước chung lớn nhất (GCD)** của hai số.

Ước chung lớn nhất là số nguyên dương lớn nhất đồng thời chia hết cho cả `a` và `b`.

## Input

Một dòng duy nhất chứa hai số nguyên dương `a`, `b`.

## Output

In ra ước chung lớn nhất của `a` và `b`.

## Ràng buộc

- `1 ≤ a, b ≤ 10^18`

## Ví dụ

### Input

    84 30

### Output

    6

### Giải thích

Các ước chung của `84` và `30` là:

    1, 2, 3, 6

Vậy ước chung lớn nhất là `6`.

---

# Bài 2. Tìm bội chung nhỏ nhất

## Đề bài

Một hệ thống có hai thiết bị hoạt động theo chu kỳ:

- Thiết bị thứ nhất hoạt động sau mỗi `a` giây.
- Thiết bị thứ hai hoạt động sau mỗi `b` giây.

Ban đầu cả hai thiết bị cùng hoạt động tại thời điểm `0`.

Hãy tìm **thời điểm dương nhỏ nhất** mà hai thiết bị lại cùng hoạt động.

## Input

Một dòng gồm hai số nguyên dương `a`, `b`.

## Output

In ra thời điểm dương nhỏ nhất mà hai thiết bị cùng hoạt động.

## Ràng buộc

- `1 ≤ a, b ≤ 10^9`

## Ví dụ

### Input

    15 20

### Output

    60

### Giải thích

Các thời điểm thiết bị thứ nhất hoạt động:

    15, 30, 45, 60, ...

Các thời điểm thiết bị thứ hai hoạt động:

    20, 40, 60, ...

Thời điểm dương đầu tiên cả hai cùng hoạt động là `60`.

---

# Bài 3. Đếm số lần xuất hiện

## Đề bài

Một hệ thống lưu `n` mã sản phẩm trong một dãy số nguyên.

Cho một mã sản phẩm `x`.

Hãy đếm xem mã `x` xuất hiện **bao nhiêu lần** trong dãy.

## Input

- Dòng đầu gồm hai số nguyên `n`, `x`.
- Dòng thứ hai gồm `n` số nguyên `a[i]`.

## Output

In ra số lần `x` xuất hiện trong dãy.

Nếu `x` không xuất hiện, in ra `0`.

## Ràng buộc

- `1 ≤ n ≤ 2 × 10^5`
- `-10^9 ≤ a[i], x ≤ 10^9`

## Ví dụ

### Input

    10 7
    3 7 5 7 8 7 2 1 7 9

### Output

    4

### Giải thích

Số `7` xuất hiện tại các vị trí:

    2, 4, 6, 9

Do đó có `4` lần xuất hiện.

---

# Bài 4. Phân tích dãy sản lượng

## Đề bài

Một nhà máy ghi nhận số sản phẩm được sản xuất trong `n` ngày.

Hãy xác định:

- Số sản phẩm lớn nhất được sản xuất trong một ngày.
- Số sản phẩm nhỏ nhất được sản xuất trong một ngày.
- Có bao nhiêu ngày có sản lượng **lớn hơn sản lượng trung bình**.

Lưu ý: Khi so sánh với giá trị trung bình, không cần làm tròn số thực.

## Input

- Dòng đầu chứa số nguyên `n`.
- Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In ra ba giá trị trên cùng một dòng:

    max min số_ngày

## Ràng buộc

- `1 ≤ n ≤ 10^5`
- `0 ≤ a[i] ≤ 10^9`

## Ví dụ

### Input

    5
    10 20 30 40 50

### Output

    50 10 2

### Giải thích

Tổng sản lượng:

    10 + 20 + 30 + 40 + 50 = 150

Sản lượng trung bình:

    150 / 5 = 30

Các ngày có sản lượng **lớn hơn** trung bình là:

    40, 50

Có `2` ngày.

**Chú ý:** Ngày có sản lượng đúng bằng trung bình **không được tính**.

---

# Bài 5. Phân tích điểm thi nâng cao

## Đề bài

Một lớp có `n` học sinh. Điểm của mỗi học sinh là một số nguyên từ `0` đến `100`.

Hãy đọc toàn bộ điểm và tính:

- Điểm cao nhất.
- Điểm thấp nhất.
- Số học sinh đạt từ `50` điểm trở lên.
- Số học sinh đạt **trên 80 điểm**.
- Điểm trung bình cộng của cả lớp.

Điểm trung bình phải được hiển thị với đúng **2 chữ số sau dấu phẩy**.

## Input

- Dòng đầu chứa số nguyên `n`.
- Dòng tiếp theo chứa `n` số nguyên là điểm của các học sinh.

## Output

In đúng theo định dạng:

    Max: ...
    Min: ...
    Passed: ...
    Excellent: ...
    Average: ...

Trong đó:

- `Max`: điểm cao nhất.
- `Min`: điểm thấp nhất.
- `Passed`: số học sinh có điểm `>= 50`.
- `Excellent`: số học sinh có điểm `> 80`.
- `Average`: điểm trung bình của cả lớp, có đúng 2 chữ số sau dấu phẩy.

## Ràng buộc

- `1 ≤ n ≤ 10^5`
- `0 ≤ a[i] ≤ 100`

## Ví dụ

### Input

    8
    45 80 60 35 90 50 85 70

### Output

    Max: 90
    Min: 35
    Passed: 6
    Excellent: 2
    Average: 64.38

### Giải thích

Có `6` học sinh đạt từ `50` điểm trở lên:

    80 60 90 50 85 70

Có `2` học sinh đạt **trên 80**:

    90 85

Tổng điểm:

    515

Điểm trung bình:

    515 / 8 = 64.375

Hiển thị với 2 chữ số sau dấu phẩy:

    64.38

---

# Phân bố độ khó tháng 8

| Bài | Nội dung | Kiến thức chính | Độ khó |
|---|---|---|---|
| 1 | GCD | Euclid, `%`, vòng lặp | ★★ |
| 2 | LCM | GCD + công thức LCM | ★★ |
| 3 | Đếm xuất hiện | Duyệt mảng, biến đếm | ★★ |
| 4 | Phân tích dãy | Duyệt mảng, tổng, so sánh | ★★☆ |
| 5 | Phân tích điểm | Duyệt mảng, nhiều điều kiện, số thực | ★★☆ |
