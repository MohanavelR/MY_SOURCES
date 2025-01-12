let users={
    fname:"Mohan",
    age:19,
    city:'salem',
    salary:100000,
    about:function(){
     console.log(this.fname)
    },
    eligiblity:function(){
    if (this.age>18){
       console.log("Your Eligible")
    }
    else{
        console.log("Not Eligible")
    }
    }
}
console.log("UsersInObject :",users)
console.log("====================================================================")
console.log("create method 1 :")
function createObj(fname,age,city,salary){
     let user={}
     user.fname=fname
     user.age=age
     user.city=city
     user.salary=salary
     user.about=function(){
        console.log(this.fname)
       }
       user.eligiblity=function(){
       if (this.age>18){
          console.log("Your Eligible")
       }
       else{
           console.log("Not Eligible")
       }
    }
     return user;
}
let user1=createObj('Jegan',31,'erode',40000)
console.log("User :",user1)
console.log("===============================================")
console.log("Object Create Method 2")
const userMethod={
    about:function(){
        console.log(this.fname)
       },
    eligiblity:function(){
       if (this.age>18){
          console.log("Your Eligible")
       }
       else{
           console.log("Not Eligible")
       }
    }
}

function createObj2(fname,age,city,salary){
    let user={}
    user.fname=fname
    user.age=age
    user.city=city
    user.salary=salary
    user.about=userMethod.about
    user.eligiblity=userMethod.eligiblity
    return user;
}
let user2=createObj2('Jegan',31,'erode',40000)
console.log("User :",user2)
console.log("===============================================")
console.log("Object Create Method 3 : Prototype Inheritance")
function createObj2(fname,age,city,salary){
    let user=Object.create(userMethod)
    user.fname=fname
    user.age=age
    user.city=city
    user.salary=salary
    return user;
}
let user3=createObj2('Jegan',31,'erode',40000)
console.log("User :",user3)
console.log("===============================================")
console.log("Object Create Method 3 : Constractor")
let Boy={
    name:'naresh kumar',
    address:'roylur',
    age:11,
    year:2014
}
let Girl={
    name:'nandhini',
    address:'roylur',
    age:9,
    year:2016
}
let boy1=new Object()

boy1.name='narash'
boy1.age=23;
console.log("Boy1 name :",boy1.name)
console.log("Boy1 age  :",boy1.age)
console.log("===============================================")
console.log("Object Create Method 3 : Object.Create()")
let boy2=Object.create(Boy)
console.log("Boy1 name :",boy2.name)
console.log("Boy1 age  :",boy2.age)
console.log("===============================================")
console.log("Object Create Method 3 : Class")
class Persion {
constructor(name,age,address){
     this.name=name
     this.age=age
     this.address=address
}
classMethod(){
    console.log("Method in class")
}
}

let persion=new Persion("Mohan",34,"salem")
console.log("Persion name    :",persion.name)
console.log("Persion Age     :",persion.age)
console.log("Persion address :",persion.address)
persion.classMethod()