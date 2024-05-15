'''
Following is the structure of the Node class already defined.

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
'''

def reverseLinkedList(head):
    prev = None
    current = head
    
    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    
    return prev