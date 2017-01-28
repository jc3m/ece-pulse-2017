'''
Look at the main function for testing the queue
'''

class queue:
  def __init__(self):
    self.inStack = []
    self.outStack = []

  def enqueue(self, x):
    self.inStack.append(x)

  def dequeue(self):
    if len(self.inStack) == 0 and len(self.outStack) == 0:
      raise Exception('Queue is empty')
    if len(self.outStack) == 0:
      while len(self.inStack) > 0:
        self.outStack.append(self.inStack.pop())
    return self.outStack.pop()

  def front(self):
    if len(self.inStack) == 0 and len(self.outStack) == 0:
      raise Exception('Queue is empty')
    if len(self.outStack) == 0:
      while len(self.inStack) > 0:
        self.outStack.append(self.inStack.pop())
    return self.outStack[len(self.outStack)-1]

def main():
  q = queue()
  q.enqueue(5)
  q.enqueue(4)
  q.enqueue(3)
  q.enqueue(2)
  q.enqueue(1)
  
  print(q.front())
  print(q.dequeue())
  print(q.dequeue())
  print(q.dequeue())
  q.enqueue(23)
  print(q.dequeue())
  print(q.dequeue())
  print(q.dequeue())

if __name__ == '__main__':
  main()
