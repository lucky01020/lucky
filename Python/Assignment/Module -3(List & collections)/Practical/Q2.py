#Write a Python function to get the largest number, smallest num and sum of all from a list.

def members(numbers):        #function 
      largest = max(numbers)  
      smallest = min(numbers)
      total_sum = sum(numbers)   #finding largest,smallest,sum

      return largest , smallest , total_sum #returning the value


l = [23,21,45,233,66,9]

largest , smallest , total_sum = members(l) #calling function

print("largest : ",largest)
print("smallest : ",smallest)
print("Sum : ",total_sum)   #printing results