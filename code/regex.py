import re
n=input()
pattern = '[46]'
result = re.match(pattern, n)
if result:
  print("Search successful.")
else:
  print("Search unsuccessful.") 
