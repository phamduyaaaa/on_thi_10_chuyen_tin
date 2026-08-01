# Kiểm tra tháng 7

---

# Bài 1. Mật mã của nhà thám hiểm

## Đề bài

Một nhà thám hiểm tìm thấy một dãy số nguyên dương. Hai số được gọi là **cặp hợp lệ** nếu tổng của chúng đúng bằng `S`.

Cho `n` số nguyên và số nguyên `S`. Hãy đếm số cặp phần tử `(i, j)` thỏa mãn:

* `i < j`;
* `a[i] + a[j] = S`.

Mỗi cặp vị trí khác nhau được tính là một cặp riêng biệt.

## Input

* Dòng đầu gồm hai số nguyên `n`, `S`.
* Dòng thứ hai gồm `n` số nguyên `a[i]`.

## Output

In ra số lượng cặp hợp lệ.

## Ràng buộc

* `1 ≤ n ≤ 2 × 10^5`
* `-10^9 ≤ a[i], S ≤ 10^9`

## Ví dụ

### Input

```text
6 10
2 8 5 5 3 7
```

### Output

```text
3
```

### Giải thích

Các cặp hợp lệ là:

* `2 + 8 = 10`
* `5 + 5 = 10`
* `3 + 7 = 10`

Vậy có `3` cặp.

---

# Bài 2. Đường hầm bí mật

## Đề bài

Một đường hầm có `n` đoạn. Mỗi đoạn có một mức năng lượng `a[i]`.

Một nhóm thám hiểm muốn chọn **một đoạn liên tiếp** của đường hầm sao cho tổng năng lượng của các đoạn đó đúng bằng `S`.

Hãy tìm độ dài **nhỏ nhất** của đoạn liên tiếp có tổng bằng `S`.

Nếu không tồn tại đoạn nào, in ra `-1`.

## Input

* Dòng đầu gồm hai số nguyên `n`, `S`.
* Dòng thứ hai gồm `n` số nguyên dương `a[i]`.

## Output

In ra độ dài nhỏ nhất của đoạn liên tiếp có tổng bằng `S`, hoặc `-1` nếu không tồn tại.

## Ràng buộc

* `1 ≤ n ≤ 2 × 10^5`
* `1 ≤ a[i] ≤ 10^9`
* `1 ≤ S ≤ 10^18`

## Ví dụ

### Input

```text
6 7
2 3 1 2 4 3
```

### Output

```text
2
```

### Giải thích

Có đoạn:

```text
3 1 2  = 6
```

không hợp lệ.

Các đoạn có tổng `7` gồm:

```text
2 3 1 2  = 8
3 1 2  = 6
4 3 = 7
```

Đoạn `4 3` có độ dài `2`, và đây là độ dài nhỏ nhất.

---

# Bài 3. Kho hàng bị trùng mã

## Đề bài

Một kho hàng có `n` kiện hàng. Mỗi kiện có một mã số nguyên.

Người quản lý muốn biết **mã hàng xuất hiện nhiều nhất**.

Nếu có nhiều mã cùng có số lần xuất hiện lớn nhất, hãy in ra **mã có giá trị nhỏ nhất**.

## Input

* Dòng đầu chứa số nguyên `n`.
* Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In ra mã hàng xuất hiện nhiều nhất.

## Ràng buộc

* `1 ≤ n ≤ 2 × 10^5`
* `-10^9 ≤ a[i] ≤ 10^9`

## Ví dụ

### Input

```text
8
5 2 5 3 2 5 3 2
```

### Output

```text
2
```

### Giải thích

Số lần xuất hiện:

* `2` xuất hiện `3` lần.
* `5` xuất hiện `3` lần.
* `3` xuất hiện `2` lần.

`2` và `5` cùng xuất hiện nhiều nhất, nên chọn giá trị nhỏ hơn là `2`.

---

# Bài 4. Cánh cửa ngoặc bí ẩn

## Đề bài

Một cánh cửa chỉ mở khi chuỗi ngoặc được nhập vào là **hợp lệ**.

Chuỗi chỉ chứa hai ký tự:

```text
(
)
```

Một chuỗi ngoặc hợp lệ phải thỏa mãn:

* Mỗi dấu `(` phải có một dấu `)` tương ứng.
* Không được xuất hiện dấu `)` khi trước đó chưa có dấu `(` tương ứng.
* Sau khi xét hết chuỗi, không được còn dấu `(` chưa đóng.

Hãy kiểm tra chuỗi đã cho có hợp lệ hay không.

## Input

Một dòng chứa chuỗi `s`.

## Output

* In `YES` nếu chuỗi hợp lệ.
* In `NO` nếu chuỗi không hợp lệ.

## Ràng buộc

* `1 ≤ |s| ≤ 2 × 10^5`
* `s` chỉ chứa `(` và `)`.

## Ví dụ 1

### Input

```text
(()())
```

### Output

```text
YES
```

## Ví dụ 2

### Input

```text
())(
```

### Output

```text
NO
```

---

# Bài 5. Đoạn đường có tổng lớn nhất

## Đề bài

Một robot di chuyển qua `n` khu vực liên tiếp. Mỗi khu vực có một giá trị năng lượng `a[i]`.

Giá trị có thể dương hoặc âm.

Robot muốn chọn **một đoạn liên tiếp không rỗng** sao cho tổng năng lượng của đoạn đó là lớn nhất.

Hãy tìm tổng lớn nhất có thể đạt được.

## Input

* Dòng đầu chứa số nguyên `n`.
* Dòng thứ hai chứa `n` số nguyên `a[i]`.

## Output

In ra tổng lớn nhất của một đoạn liên tiếp không rỗng.

## Ràng buộc

* `1 ≤ n ≤ 2 × 10^5`
* `-10^9 ≤ a[i] ≤ 10^9`

## Ví dụ

### Input

```text
8
-2 1 -3 4 -1 2 1 -5
```

### Output

```text
6
```

### Giải thích

Đoạn có tổng lớn nhất là:

```text
4 -1 2 1
```

Tổng:

```text
4 + (-1) + 2 + 1 = 6
```

Vì vậy đáp án là `6`.
