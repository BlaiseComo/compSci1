list2 = list('tfzbwlyzljylawhzzdvyk')

for i in range(0, len(list2)):

    list2[i] = ord(list2[i]) - 7

for x in range(0, len(list2)):

    if list2[x] > 122:

        list2[x] += 26

for y in range(0, len(list2)):

    list2[y] = chr(list2[y])

print(''.join(list2))
















