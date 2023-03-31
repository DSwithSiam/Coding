# s1 = {1, 3, 2, 3 ,4 , 5, 6}
# s2 = {10, 11, 12, 14, 15}
# s1.add(8)
# s1.update([7,9])
# s1.update(s2)
# s1.remove(15)
# s1.discard(16)

# print(s1)




# s1 = {1, 3, 2, 3 ,4 , 5, 6}
# s2 = {10, 11, 1, 2, 2, 3 ,4, 14, 15}

# common = s1.intersection(s2)
# dif = s1.difference(s2)
# print(common)
# print(dif)

# sd = s1.symmetric_difference(s2)
# print(sd)



#list to set
# s1 = [1, 3, 2, 3 ,4 , 5, 6]
# result = set(s1)
# print(result)

# # set to list
# s1 = {1, 3, 2, 3 ,4 , 5, 6}
# li = list(s1)
# print(li)


s1 = {1, 3, 2, 3 ,4 , 5, 6}
s2 = {7, 8, 9, 10, 11}
s3 = {1, 3, 14, 15, 18}

result = s1.union(s2, s3)  # / result = s1|s2|s3
print(result) 
