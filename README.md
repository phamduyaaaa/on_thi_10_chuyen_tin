# Bài 1. Đoạn thẳng (line)

## Ý tưởng

Phần giao của hai đoạn:

- Trái: `max(a,c)`
- Phải: `min(b,d)`

Nếu trái > phải thì không giao nhau ⇒ in `-1`.

Ngược lại độ dài phần chung là:

`phải - trái`

## Code C++

```cpp
#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long left = max(a, c);
    long long right = min(b, d);

    if (left > right)
        cout << -1;
    else
        cout << right - left;

    return 0;
}
```

---

# Bài 2. Nhỏ nhất (Kmin)

## Ý tưởng

Tìm k nhỏ nhất sao cho:

`1 + 2 + ... + k >= n`

Ta có:

`1 + 2 + ... + k = k(k+1)/2`

Dùng tìm kiếm nhị phân.

## Code C++

```cpp
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long l = 1, r = 2000000000LL;
    long long ans = r;

    while (l <= r) {
        long long mid = (l + r) / 2;

        if ((__int128)mid * (mid + 1) / 2 >= n) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
```

---

# Bài 3. Chu vi nhỏ nhất (Perimeter)

## Ý tưởng

Cần:

`a*b >= N`

Chu vi:

`P = 2(a+b)`

Thử mọi a từ 1 đến √N.

Với mỗi a:

`b = ceil(N/a)`

Lấy chu vi nhỏ nhất.

## Code C++

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long ans = 1e18;

    for (long long a = 1; a * a <= N; a++) {
        long long b = (N + a - 1) / a;
        ans = min(ans, 2 * (a + b));
    }

    cout << ans;
    return 0;
}
```

---

# Bài 4. Fibonacci (fibonaci)

## Ý tưởng

Sinh dãy Fibonacci cho tới khi vượt quá n.

Số trước đó chính là đáp án.

## Code C++

```cpp
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = 1;
    long long b = 1;

    while (b <= n) {
        long long c = a + b;
        a = b;
        b = c;
    }

    cout << a;
    return 0;
}
```

---

# Bài 5. Đếm hình vuông (square)

## Ý tưởng

Tổng số hình vuông:

`1² + 2² + ... + n²`

Công thức:

`n(n+1)(2n+1)/6`

## Code C++

```cpp
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << n * (n + 1) * (2 * n + 1) / 6;

    return 0;
}
```

---

# Bài 6. Thẻ vào cổng (card)

## Ý tưởng

- 1 → có người vào → tăng số người hiện tại.
- 0 → có người ra → giảm số người hiện tại.

Đáp án là số người nhiều nhất có mặt cùng lúc.

## Code C++

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    int cur = 0;
    int ans = 0;

    while (cin >> x) {
        if (x == 1)
            cur++;
        else
            cur--;

        ans = max(ans, cur);
    }

    cout << ans;
    return 0;
}
```
