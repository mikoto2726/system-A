class F:
  def add1(self,v): return v+1

def test(n):
  o=F()
  v=1
  for _ in range(n):
    o.add1(v) 
