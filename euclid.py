# Method1
lst = []
for x in range(1, 21):
    if 8 % x == 0 and 20 % x == 0:
        lst.append(x)
print(max(lst))


# Method2
def gcd(a, b):
    while (b != 0):
        t = a
        a = b
        b = t % a
    return a


print(gcd(60, 96))
print(gcd(20, 8))
