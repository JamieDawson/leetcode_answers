var middleNode = function(head) {
    if(!head) return null
    
    let l = 1;
    let headCopy = head
    
    //get entire size of linked list.
    while(headCopy){
        headCopy = headCopy.next;
        l++
    }
    
    //skip the first half of the linked list.
    for(let i = 0; i < l/2-1; i++){
         head = head.next;
    }
    
    //return from the half way point of the linked list
    return head
};
