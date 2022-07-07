
fp = open("type.cpp","rt")

s = 'namespace'

for lines in fp.readlines():
    if s in lines:
        print(lines)
