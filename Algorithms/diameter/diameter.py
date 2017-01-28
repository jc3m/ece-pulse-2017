class Node:
  def __init__(self):
    self.left = None
    self.right = None

def calcDiameter(node):
  if node is None:
    return -1
  lh = getHeight(node.left)
  rh = getHeight(node.right)

  ld = calcDiameter(node.left)
  rd = calcDiameter(node.right)

  return max((lh+rh), ld, rd)

def getHeight(node):
  if node is None:
    return 0
  return max(getHeight(node.left), getHeight(node.right)) + 1

def main():
  root = Node()
  print(calcDiameter(root))
  root.left = Node()
  print(calcDiameter(root))
  root.right = Node()
  print(calcDiameter(root))
  root.left.right = Node()
  root.left.left = Node()
  print(calcDiameter(root))

if __name__ == '__main__':
  main()
