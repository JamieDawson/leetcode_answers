var sortArrayByParity = function(A) {
    
    let parityArr = [];

    for(let i = 0; i < A.length; i++) {
      if(A[i] %2 == 0 ) {
        parityArr.unshift(A[i]); //beginning of array.
      } else {
        parityArr.push(A[i]); //end of array
      }
    }
    return parityArr; 
};

