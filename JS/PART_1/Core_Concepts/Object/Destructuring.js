let user={
    name:"Mohan",
    age:34
}
console.log("Before Es6 version :")
console.log("Method-1 :")
console.log("Obj  :",user)
console.log("Name :",user.name)
console.log("Age  :",user.age)
console.log("Method-2 :")
console.log("Obj  :",user)
console.log("Name :",user['name'])
console.log("Age  :",user['age'])
console.log("After Es6 version :")
const{name,age,gender='male'}=user
console.log("Obj    :",user)
console.log("Name   :",name)
console.log("Age    :",age)
console.log("Gender :",gender)
let Data={
    contact:'298786543',
    address:{
        city:'salem'
    }
}
const {contact:contact2,address:{city}}=Data
console.log("contact   :",contact2)
console.log("city      :",city)