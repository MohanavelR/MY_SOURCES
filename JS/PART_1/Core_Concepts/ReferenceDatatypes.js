let user1={name:'Mohan'}
let user2=user1
console.log("User1 name :",user1.name)
console.log("User2 name :",user2.name)
user1.name='jegan'
console.log("user1.name='jegan'")
console.log("User1 name :",user1.name)
console.log("User2 name :",user2.name)
console.log("user1 reference only user2 save. not data")
console.log(`
let user1={name:'Mohan'}
let user2=user1
    |---------|- Stackmemory
    | a=adrs--||          |-----------------| --Heap memory
    | b=adrs--|-----------|---data          |
    |---------|           |                 |
                          |-----------------|                
you change original value change  also change copy value                     
    
    `)
















