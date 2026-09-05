# Kiểm tra tháng 7

---

# Bài 1. Phân chia kho báu

## Đề bài

Một vị vua có hai kho báu chứa lần lượt `a` và `b` viên đá.

Ông muốn chia số đá thành các nhóm có **số lượng bằng nhau và lớn nhất có thể**, sao cho:

* Mỗi nhóm lấy cùng số viên đá từ cả hai kho.
* Không còn viên đá nào bị dư.

Cho hai số nguyên dương `a` và `b`. Hãy tìm số viên đá lớn nhất có thể có trong mỗi nhóm.

## Input

Một dòng duy nhất chứa hai số nguyên dương `a`, `b`.

## Output

In ra số viên đá lớn nhất trong mỗi nhóm.

## Ràng buộc

* `1 ≤ a, b ≤ 10^18`

## Ví dụ

### Input

```text
48 18
```

### Output

```text
6
```

---

# Bài 2. Chu kỳ hoạt động của máy

## Đề bài

Trong một nhà máy có hai máy tự động:

* Máy thứ nhất thực hiện một chu kỳ sau mỗi `a` giây.
* Máy thứ hai thực hiện một chu kỳ sau mỗi `b` giây.

Ban đầu cả hai máy cùng thực hiện chu kỳ tại thời điểm `0`.

Hãy tìm thời điểm dương nhỏ nhất mà hai máy lại cùng thực hiện chu kỳ.

## Input

Một dòng gồm hai số nguyên dương `a`, `b`.

## Output

In ra thời điểm nhỏ nhất mà hai máy cùng thực hiện chu kỳ.

## Ràng buộc

* `1 ≤ a, b ≤ 10^9`

## Ví dụ

### Input

```text
12 18
```

### Output

```text
36
```

---

# Bài 3. Tìm mã sản phẩm

## Đề bài

Một hệ thống quản lý kho lưu `n` mã sản phẩm theo thứ tự **không giảm**.

Người quản lý cần kiểm tra mã sản phẩm `x` có tồn tại hay không.

Nếu `x` xuất hiện nhiều lần, hãy in ra **vị trí đầu tiên** của nó, đánh số từ `1`.

Nếu không tồn tại, in ra `-1`.

## Input

* Dòng đầu gồm hai số nguyên `n`, `x`.
* Dòng thứ hai gồm `n` số nguyên đã được sắp xếp theo thứ tự không giảm.

## Output

In ra vị trí đầu tiên của `x`, hoặc `-1` nếu không tồn tại.

## Ràng buộc

* `1 ≤ n ≤ 2 × 10^5`
* `-10^9 ≤ a[i], x ≤ 10^9`

## Ví dụ

### Input

```text
8 12
2 5 7 12 12 12 18 20
```

### Output

```text
4
```

---

# Bài 4. Đếm số ngày đạt chuẩn

## Đề bài

Một nhà máy theo dõi số sản phẩm được sản xuất trong `n` ngày.

Một ngày được xem là **đạt chuẩn** nếu số sản phẩm sản xuất trong ngày đó lớn hơn hoặc bằng `k`.

Hãy đếm số ngày đạt chuẩn và tính tổng số sản phẩm được sản xuất trong những ngày đạt chuẩn đó.

## Input

* Dòng đầu gồm hai số nguyên `n`, `k`.
* Dòng thứ hai chứa `n` số nguyên `a[i]`, trong đó `a[i]` là số sản phẩm được sản xuất trong ngày thứ `i`.

## Output

In ra hai số nguyên trên cùng một dòng:

```text
số_ngày_đạt_chuẩn tổng_sản_phẩm
```

Nếu không có ngày nào đạt chuẩn, tổng sản phẩm cần in ra là `0`.

## Ràng buộc

* `1 ≤ n ≤ 10^5`
* `0 ≤ a[i] ≤ 10^9`
* `0 ≤ k ≤ 10^9`

## Ví dụ

### Input

```text
6 50
30 70 45 80 50 20
```

### Output

```text
3 200
```

### Giải thích

Các ngày đạt chuẩn là:

```text
70, 80, 50
```

Có `3` ngày.

Tổng:

```text
70 + 80 + 50 = 200
```

---

# Bài 5. Phân tích kết quả thi

## Đề bài

Một lớp có `n` học sinh. Điểm của mỗi học sinh là một số nguyên từ `0` đến `100`.

Hãy đọc toàn bộ điểm và in ra:

* Điểm cao nhất.
* Điểm thấp nhất.
* Số học sinh có điểm **từ 50 trở lên**.
* Điểm trung bình cộng của cả lớp, hiển thị đúng **2 chữ số sau dấu phẩy**.

## Input

* Dòng đầu chứa số nguyên `n`.
* Dòng tiếp theo chứa `n` số nguyên là điểm của các học sinh.

## Output

In đúng theo định dạng:

```text
Max: ...
Min: ...
Passed: ...
Average: ...
```

Trong đó:

* `Max` là điểm cao nhất.
* `Min` là điểm thấp nhất.
* `Passed` là số học sinh có điểm từ `50` trở lên.
* `Average` được in với đúng `2` chữ số sau dấu phẩy.

## Ràng buộc

* `1 ≤ n ≤ 10^5`
* `0 ≤ a[i] ≤ 100`

## Ví dụ

### Input

```text
6
45 80 60 35 90 50
```

### Output

```text
Max: 90
Min: 35
Passed: 4
Average: 60.00
```
