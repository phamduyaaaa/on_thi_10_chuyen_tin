# Kiểm tra tháng 6

---

# Bài 1. Kho báu cổ đại

## Đề bài

Một cánh cửa dẫn vào kho báu chỉ mở khi nhập đúng **Ước chung lớn nhất (GCD)** của hai số nguyên dương.

Cho hai số nguyên dương `a` và `b`. Hãy tìm giá trị của **Ước chung lớn nhất** của chúng.

## Input

Một dòng duy nhất chứa hai số nguyên dương `a`, `b`.

## Output

In ra một số nguyên duy nhất là GCD của `a` và `b`.

## Ràng buộc

- `1 ≤ a, b ≤ 10^18`

## Ví dụ

### Input
```
18 24
```

### Output
```
6
```

---

# Bài 2. Hai ngọn hải đăng

## Đề bài

Có hai ngọn hải đăng.

- Hải đăng thứ nhất phát tín hiệu sau mỗi `a` giây.
- Hải đăng thứ hai phát tín hiệu sau mỗi `b` giây.

Ban đầu cả hai cùng phát sáng tại thời điểm `0`.

Hãy xác định thời điểm dương nhỏ nhất mà cả hai ngọn hải đăng lại cùng phát sáng.

## Input

Một dòng gồm hai số nguyên dương `a`, `b`.

## Output

In ra thời gian nhỏ nhất để hai hải đăng cùng phát sáng.

## Ràng buộc

- `1 ≤ a, b ≤ 10^9`

## Ví dụ

### Input
```
6 8
```

### Output
```
24
```

---

# Bài 3. Tìm kiếm trong kho hàng

## Đề bài

Một nhà kho chứa `n` kiện hàng đã được sắp xếp theo trọng lượng tăng dần.

Người quản lý cần tìm xem có kiện hàng nào có trọng lượng đúng bằng `x` hay không.

Nếu tồn tại, hãy in ra **vị trí đầu tiên** của kiện hàng (đánh số từ `1`).

Nếu không tồn tại, in ra `-1`.

## Input

- Dòng đầu gồm hai số nguyên `n`, `x`.
- Dòng thứ hai gồm `n` số nguyên đã được sắp xếp theo thứ tự không giảm.

## Output

In ra vị trí đầu tiên của phần tử bằng `x`, hoặc `-1` nếu không tồn tại.

## Ràng buộc

- `1 ≤ n ≤ 2 × 10^5`
- `-10^9 ≤ ai, x ≤ 10^9`

## Ví dụ

### Input
```
6 15
2 5 8 15 20 30
```

### Output
```
4
```

---

# Bài 4. Leo cầu thang

## Đề bài

Một cầu thang có `n` bậc.

Mỗi lần di chuyển, một người chỉ có thể:

- bước lên `1` bậc;
- hoặc bước lên `2` bậc.

Hãy tính số cách khác nhau để đi từ chân cầu thang lên đến bậc cuối cùng.

## Input

Một số nguyên `n`.

## Output

In ra số cách có thể đi lên cầu thang.

## Ràng buộc

- `1 ≤ n ≤ 40`

## Ví dụ

### Input
```
4
```

### Output
```
5
```

---

# Bài 5. Thống kê nhiệt độ

## Đề bài

Một trạm khí tượng ghi nhận nhiệt độ trong `n` ngày.

Hãy đọc toàn bộ dữ liệu và in ra:

- Nhiệt độ lớn nhất.
- Nhiệt độ nhỏ nhất.
- Nhiệt độ trung bình cộng (hiển thị đúng **2 chữ số sau dấu phẩy**).

## Input

- Dòng đầu chứa số nguyên `n`.
- Dòng tiếp theo chứa `n` số nguyên là nhiệt độ từng ngày.

## Output

In đúng theo định dạng sau:

```
Max: ...
Min: ...
Average: ...
```

Trong đó `Average` được in với đúng **2 chữ số sau dấu phẩy**.

## Ràng buộc

- `1 ≤ n ≤ 10^5`
- `-100 ≤ ai ≤ 100`

## Ví dụ

### Input
```
5
20 18 30 25 27
```

### Output
```
Max: 30
Min: 18
Average: 24.00
```
