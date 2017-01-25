import sys



def conv(s):
    x = list(s)
    return ''.join([str(ord(ch)) for ch in x])


lines = sys.stdin.readlines()

for l in lines:
    reg, num = l.split(",")
    print "#define " + reg + "_k " + conv(reg)
    print "#define " + reg + "_v " + str(num)
