
let arr=[]
console.log("Arr :",arr)
console.log('arr Proto Type :',arr.__proto__)
console.log('arr Proto Type Join :',arr.__proto__.__proto__)
let obj={}
console.log("Obj :",obj)
console.log('Obj Proto Type :',obj.__proto__)
function myfun(){}
console.log("Function :",myfun)
console.log('Function Proto Type :',myfun.__proto__)

console.log("Object Inheritance :")
let obj1={
    name :'Mohan',
    city:'salem',
    fun(){
        console.log("Hello")
    }
}
let obj2={
    name:"mohan"
}
obj2.__proto__=obj1
console.log(obj2.city)
obj2.fun()