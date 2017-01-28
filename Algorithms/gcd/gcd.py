def main():
  print(gcd(12,6))

def gcd(a, b):
  while b != 0:
    t = b
    b = a % b
    a = t
  return a

if __name__ == '__main__':
  main()