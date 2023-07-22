from time import perf_counter as pc
from importlib import import_module as im

n=10**6
rep=10
tests = ('test_nocall', 'test_call', 'test_method', 'test_empty')
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
  tm_n=tm_min['test_nocall']-tm_min['test_empty']
  tm_c=tm_min['test_call']-tm_min['test_empty']
  tm_m=tm_min['test_method']-tm_min['test_empty']
  print(f'nocall: {tm_n} sec')
  print(f'call:   {tm_c} sec, ratio: {tm_c/tm_n:.2f}')
  print(f'method: {tm_m} sec, ratio: {tm_m/tm_n:.2f}')
  tms={t:[tm_min[t]] for t in tests}
