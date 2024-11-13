def kthChildNthGeneration(n, k):
    if n == 1 or k==1:
        return "Male"
    
    # Determine the parent's position
    parent_pos = (k + 1) // 2
    
    # Determine the parent's gender recursively
    parent_gender = kthChildNthGeneration(n - 1, parent_pos)
    
    # Determine the gender of the k-th child based on parent's gender and child's position
    if parent_gender == "Male":
        return "Male" if k % 2 == 1 else "Female"
    else:
        return "Female" if k % 2 == 1 else "Male"
