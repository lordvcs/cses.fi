input_str = list(input())
input_chars = {}
last_update = None
last_sum = 1

for c in input_str:
    if c in input_chars and last_update == c:
        last_sum += 1
    elif c not in input_chars:
        input_chars[c] = 1
    if last_update != None and last_update != c:
        if last_sum > input_chars[last_update]:
            input_chars[last_update] = last_sum
        last_sum = 1    
    last_update = c

if last_sum > input_chars[last_update]:
    input_chars[last_update] = last_sum

print(max(input_chars.values()))
