# Giải thích thuật toán Euclid

Thuật toán dựa trên tính chất quan trọng sau:

> **GCD(a, b) = GCD(b, a % b)**

Trong đó:

- `a % b` là phần dư khi chia `a` cho `b`.

---

## Vì sao tính chất này đúng?

Giả sử

```
a = b × q + r
```

trong đó

- `q` là thương,
- `r = a % b` là phần dư.

Ví dụ:

```
18 = 24 × 0 + 18
24 = 18 × 1 + 6
18 = 6 × 3 + 0
```

Giả sử có một số `d` chia hết cho cả `a` và `b`.

Khi đó:

```
a = d × x
b = d × y
```

Suy ra

```
r = a − b × q
```

Thay vào:

```
r = d × x − d × y × q
  = d × (x − yq)
```

Do đó:

- nếu `d` chia hết cho `a` và `b`
- thì `d` cũng chia hết cho `r`.

Ngược lại, nếu một số chia hết cho `b` và `r` thì:

```
a = b × q + r
```

nó cũng chia hết cho `a`.

Vì tập các ước chung của:

```
(a, b)
```

và

```
(b, r)
```

là giống nhau nên

```
GCD(a, b) = GCD(b, r)
```

---

## Ví dụ

Tính

```
GCD(48, 18)
```

Lần 1

```
48 % 18 = 12

=> GCD(48,18)
 = GCD(18,12)
```

Lần 2

```
18 % 12 = 6

=> GCD(18,12)
 = GCD(12,6)
```

Lần 3

```
12 % 6 = 0

=> GCD(12,6)
 = GCD(6,0)
```

Khi số dư bằng 0 thì kết quả là

```
6
```

---

## Vì sao thuật toán dừng?

Ở mỗi bước

```
a % b < b
```

Nghĩa là số thứ hai luôn nhỏ hơn số trước đó.

Ví dụ

```
48
18
12
6
0
```

Dãy số luôn giảm và không thể giảm mãi vì luôn không âm.

Cuối cùng sẽ có lúc

```
b = 0
```

và vòng lặp kết thúc.

---

## Độ phức tạp

Thuật toán Euclid chạy trong

```
O(log(min(a,b)))
```

Đây là một trong những thuật toán cổ điển nhanh nhất trong lý thuyết số.
