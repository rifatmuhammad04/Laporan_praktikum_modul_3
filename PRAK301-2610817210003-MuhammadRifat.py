number = input("masukkan angka: ").split()
nums = [int (x) for x in number]

if len(nums) == 1:
    print(nums[0])
elif len(nums) == 2:
    a, b = nums [0], nums [1]
    if a > b:
        a, b = b, a
    print(f"{a} {b}")
elif len(nums) >= 3:
    a, b, c = nums[0], nums[1], nums[2]
    if a > b:
        a, b = b, a
    if a > c:
        a, c = c, a
    if b > c:
        b, c = c, b
    print(f"{a} {b} {c}")