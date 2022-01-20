#!/usr/bin/python2.7
import sys

arr = bytearray.fromhex("66 34 6B 6D 6D 36 70 7C 3D 82 7F 70 82 6E 83 82 44 42 83 44 75 7B 7F 8C 89 0A")
arr = str(arr)

res = ""
for i in range(len(arr)):
    try:
        res += (chr(ord(arr[i]) - i))
    except:
        continue
print(res)