import numpy as np
import time

n = int(input())  
arr = list(map(int, input().split())) 

start = time.time() 

arr = np.sort(arr).tolist()

end = time.time()    

print(f"PythonSort: {(end - start) * 1000:.0f} ms")
