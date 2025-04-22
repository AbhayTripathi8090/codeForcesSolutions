def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    minVal = min(a)
    count = 0
    minValCount = 0

    for x in a:
        if x % minVal == 0:
            count += 1
        if x == minVal:
            minValCount += 1

    if count > 2 or minValCount >= 2:
        print("Yes")
    else:
        print("No")


def main():
    T = int(input())
    for _ in range(T):
        solve()


if __name__ == "__main__":
    main()