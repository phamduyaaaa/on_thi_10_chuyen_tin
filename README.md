# Bài 1. Đoạn thẳng (line)

## Ý tưởng
Phần giao của hai đoạn:

- Đầu trái: `max(a, c)`
- Đầu phải: `min(b, d)`

Nếu `left > right` thì hai đoạn không giao nhau → in `-1`.

Ngược lại độ dài phần chung là:

`right - left`

## Code Python

```python
a, b, c, d = map(int, input().split())

left = max(a, c)
right = min(b, d)

if left > right:
    print(-1)
else:
    print(right - left)
```

---

# Bài 2. Nhỏ nhất (Kmin)

## Ý tưởng

Cần tìm số nhỏ nhất `k` sao cho:

`1 + 2 + ... + k >= n`

Ta có:

`1 + 2 + ... + k = k*(k+1)/2`

Dùng tìm kiếm nhị phân trên giá trị `k`.

## Code Python

```python
n = int(input())

l, r = 1, n
ans = n

while l <= r:
    mid = (l + r) // 2

    if mid * (mid + 1) // 2 >= n:
        ans = mid
        r = mid - 1
    else:
        l = mid + 1

print(ans)
```

---

# Bài 3. Chu vi nhỏ nhất (Perimeter)

## Ý tưởng

Cần chọn hình chữ nhật `a × b` sao cho:

`a*b >= N`

và chu vi:

`P = 2(a+b)`

là nhỏ nhất.

Thử mọi `a` từ `1` đến `sqrt(N)`.

Với mỗi `a`:

`b = ceil(N/a)`

Tính chu vi và lấy nhỏ nhất.

## Code Python

```python
import math

N = int(input())

ans = 10**18

for a in range(1, math.isqrt(N) + 1):
    b = (N + a - 1) // a
    ans = min(ans, 2 * (a + b))

print(ans)
```

---

# Bài 4. Fibonacci (fibonaci)

## Ý tưởng

Sinh dãy Fibonacci:

`1, 1, 2, 3, 5, 8, ...`

Cho đến khi số tiếp theo vượt quá `n`.

Số Fibonacci lớn nhất không vượt quá `n` chính là số đứng trước.

## Code Python

```python
n = int(input())

a, b = 1, 1

while b <= n:
    a, b = b, a + b

print(a)
```

---

# Bài 5. Đếm hình vuông (square)

## Ý tưởng

Số hình vuông kích thước:

- `1×1`: có `n²`
- `2×2`: có `(n-1)²`
- ...
- `n×n`: có `1`

Tổng số hình vuông:

`1² + 2² + ... + n²`

Công thức:

`n(n+1)(2n+1)/6`

## Code Python

```python
n = int(input())

print(n * (n + 1) * (2 * n + 1) // 6)
```

---

# Bài 6. Thẻ vào cổng (card)

## Ý tưởng

- Gặp `1` → có người vào → tăng số người trong bảo tàng.
- Gặp `0` → có người ra → giảm số người trong bảo tàng.

Số thẻ tối thiểu cần in chính là số người có mặt nhiều nhất cùng lúc.

Ta dùng:

- `cur`: số người hiện tại.
- `ans`: giá trị lớn nhất của `cur`.

## Code Python

```python
import sys

cur = 0
ans = 0

for x in sys.stdin.read().split():
    if x == '1':
        cur += 1
    else:
        cur -= 1

    ans = max(ans, cur)

print(ans)
```
