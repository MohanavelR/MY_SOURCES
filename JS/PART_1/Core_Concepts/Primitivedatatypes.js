let a=10
let b=a
console.log("Data store stackmemory")
console.log("a: ",a)
console.log("b: ",b)
console.log('b=a')
console.log("a=20")
a=20
console.log("a: ",a)
console.log("b: ",b)
console.log(` 
    b=a
    |-------|- Stackmemory
    | a=10  | 
    | b=10  |
    |-------|
    a=30
    |-------|- Stackmemory
    | a=30  | 
    | b=10  |
    |-------|  
 so primitive datatypes is not change original values   
    
    `)