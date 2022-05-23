

import time
start_time = time.time()

def oof(oop):
    if len(oop) != 2:
        print('Invalid args')
        return

    password = oop[1]
    counter = 0
    vals = list('tfzbwlyzljylawhzzdvyk')
    if len(password) != len(vals):
        print('incorrect')
        return
    while counter < len(password):
        x = ord(password[counter]) + 7
        if x > ord('z'):
            x -= 26
        if chr(x) != vals[counter]:
            print('incorrect2')
            return 
        counter += 1

    print('correct')

    return 0

oof(['', 'mysupersecretpassword'])

print(time.time() - start_time)

        


