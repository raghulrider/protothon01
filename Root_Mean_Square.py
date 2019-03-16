#software hackathon
import math  
def root_mean_square(number_array, num): 
    square = 0
    mean = 0.0
    root = 0.0
    n = num
    for i in range(0, int(n)): 
        square += (number_array[i]**2)   
    mean = (square / (float)(n))  
    root = math.sqrt(mean) 
    return root
number = str (input("Enter comma separated numbers: "))
list = number.split (",")
number_array = []
for i in list:
	number_array.append(float(i))
print(root_mean_square(number_array,len(number_array)))