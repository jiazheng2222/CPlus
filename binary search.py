
def search(array,value):
    loc = -1
    l = 0
    r = len(array)-1
    if r == 0 and array[0] < value:
        loc = 0
    while l<=r:
        mid = (l+r)/2
        if array[mid] == value:
            loc = mid
            break;
        elif array[mid] < value:
            l = mid+1
        elif array[mid] > value:
            r = mid-1
    loc = r
  
# if the value exists in the array, I use the l<=r to find the location of it.
# l = mid + 1 / r = mid - 1 may locates it

# if the value doesn't exist in the array:
# l r will be switched between each other.
# The difference is the sequence:
# l: l = mid + 1 -> l = r. I find the value of mid (mid= l+r/2 = l = r) is greater than value, so r = mid - 1
# Therefore, I get r l
# For r, it's the same. The result will also be r l.
# This is the reason why I use ' loc = r' and insert the value after r
