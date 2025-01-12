let users={fname:"Mohan",age:18,city:'salem',salary:100000}
let users2=Object.assign({},users)
console.log("Before Users Name  :",users.fname)
console.log("Before Users2 Name :",users2.fname)
console.log("users.fname='Jegan'")
users.fname="Jegan"
console.log("After Users Name  :",users.fname)
console.log("After Users2 Name :",users2.fname)
console.log("================================================")
users={fname:"Mohan",age:18,city:'salem',salary:100000}
users2={...users}
console.log("Before Users Name  :",users.fname)
console.log("Before Users2 Name :",users2.fname)
console.log("users.fname='Jegan'")
users.fname="Jegan"
console.log("After Users Name  :",users.fname)
console.log("After Users2 Name :",users2.fname)
console.log("================================================")