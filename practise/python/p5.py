# print odd number rang 0 to 100 find sum 
sum_odd = 0
print("Odd numbers from 0 to 100 are:")

for i in range(1, 101, 2):
    print(i, end=" ")
    sum_odd += i

print("\nSum of odd numbers =", sum_odd)
