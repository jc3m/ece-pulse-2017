def ceasar(inputStr, shift):
  res = []
  for c in inputStr:
    if ord(c) >= ord('a') and ord(c) <= ord('z'):
      x = chr((ord(c)-ord('a') + shift) % 26 + ord('a'))
      res.append(x)
    elif ord(c) >= ord('A') and ord(c) <= ord('Z'):
      x = chr((ord(c)-ord('A') + shift) % 26 + ord('A'))
      res.append(x)
    else:
      res.append(c)
  return ''.join(res)

def main():
  i = input('Enter string to encrypt: ')
  s = int(input('Enter shift: '))
  print(ceasar(i, s))

if __name__ == '__main__':
  main()
