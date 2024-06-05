# import collections#修改前
from collections import Counter#修改後
words = ["bella","label","roller"]
for i in range(3):
  #counter = collections.Counter(words[i])#修改前
  counter = Counter(words[i])#修改後
  print(words[i],counter)
ans=Counter(words[0]) & Counter(words[1])&Counter(words[2])
print(ans)
