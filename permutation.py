from itertools import permutations 
permlist = permutations("ProtoSem")
for letter in list(permlist): 
         print (''.join(letter))