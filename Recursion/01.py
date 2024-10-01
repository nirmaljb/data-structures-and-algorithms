def solve(N):
    if N > 0:
        print("Hello")
    N -= 1
    solve(N)

solve(5)