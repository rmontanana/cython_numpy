import numpy as np
from fimdlp import CFImdlp

sample = np.array([5e7, 31, 6e5, 17], dtype=np.int64)
test = CFImdlp()
res = test.cut_points(sample)
print(res)
