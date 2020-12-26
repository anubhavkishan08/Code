#Given a non-negative number n, print True if n is within 2 of a multiple of 10,  else print false.  For example 22 is within 2 of a multiple of 10 (the multiple here is 20) and 23 is not within 2 of a multiple of 10 (it is within 3 of multiple 20).
def isNeighbor(num):
    a = num % 10
    if  (10 - (10-a)) <= 2 or (10 - a) <= 2:
        return True
    else:
        return False