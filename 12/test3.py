from time import perf_counter as pc
from importlib import import_module as im

n=10**7
rep=10
tests = ('test_local', 'test_dict', 'test_empty')
tms={t:[] for t in tests}

while True:
  for t in tests:
    test =im(t).test
    for _ in range(rep):
      st=pc()
      test(n)
      ed=pc()
      tm= ed-st
      tms[t].append(tm)

  tm_min={t:min(tms[t]) for t in tests}
  tm_l=tm_min['test_local']-tm_min['test_empty']
  tm_a=tm_min['test_dict']-tm_min['test_empty']
  print(f'local: {tm_l} sec')
  print(f'dict: {tm_a} sec')
  print(f'ratio: {tm_a/tm_l:.2f}')
  tms={t:[tm_min[t]] for t in tests}