#!/usr/bin/python3
import json

file = open("packets.json", "r")
file = json.load(file)

buf = ""

for s in file:
    if "data" in s["_source"]["layers"]:
      for i in s["_source"]["layers"]["data"]["data.data"]:
          i = i.replace(":", "")
          buf += i

res = ""
for i in range(0, len(buf), 2):
    res += (chr(int(buf[i : i + 2], 16)))

print(res)