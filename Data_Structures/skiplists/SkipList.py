import numpy as np

class SkipNode:
  def __init__(self, key=None, forward=None):
    if forward is None:
      forward = [None]
    self.key = key
    self.forward = forward

class SkipList:
  def __init__(self):
    self.head = SkipNode()
    self.max_height = 1
    self.size = 0

  def find(self, key):
    cur = self.head
    for level in range(self.max_height-1, -1, -1):
      while cur.forward[level] and cur.forward[level].key < key:
        cur = cur.forward[level]

    res = cur.forward[0]
    if res and res.key == key:
      return True
    else:
      return False

  def insert(self, key):
    '''Return false if key exists already'''
    if self.find(key):
      return False

    new_node = None
    cur = self.head
    update = [None for _ in range(self.max_height)]
    for level in range(self.max_height - 1, -1, -1):
      while cur.forward[level] and cur.forward[level].key < key:
        cur = cur.forward[level]
      update[level] = cur

    height = np.random.geometric(0.5)
    new_forward = [n.forward[l] for l, n in enumerate(update[:height])]

    if height > self.max_height:
      new_forward += [None for _ in range(self.max_height, height)]
      self.head.forward += [None for _ in range(self.max_height, height)]
      update += [self.head for l in range(self.max_height, height)]
      self.max_height = height

    new_node = SkipNode(key=key, forward=new_forward)

    for l, n in enumerate(update[:height]):
      n.forward[l] = new_node

    self.size += 1

  def delete(self, key):
    cur = self.head
    update = [None for _ in range(self.max_height)]
    for level in range(self.max_height - 1, -1, -1):
      while cur.forward[level] and cur.forward[level].key < key:
        cur = cur.forward[level]
      update[level] = cur

    del_node = cur.forward[0]
    if del_node and del_node.key == key:
      for l, f in enumerate(del_node.forward):
        update[l].forward[l] = f
      self.size -= 1
      return True
    return False

def main():
  l = SkipList()
  l.insert(3)
  l.insert(10)
  l.insert(5)
  l.insert(76)
  l.insert(43)

  print(l.find(23))
  print(l.find(13))
  print()

  print(l.find(3))
  print(l.find(43))
  print()

  print(l.delete(5))
  print(l.find(5))

if __name__ == '__main__':
  main()
