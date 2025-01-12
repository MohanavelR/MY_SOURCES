console.log("class create in function :")

function Createclass(name ){
    this.name=name
}
Createclass.prototype.sayHello=function(){
    console.log('Hello',this.name)
}
let p=new Createclass("Mohan")
p.sayHello() 
console.log("Inheritance In function")
function anotherClass(name,age){
Createclass.call(this,name)  
   this.age=age          
}
anotherClass.prototype=Object.create(Createclass.prototype)
anotherClass.prototype.constractor=anotherClass
let p3=new anotherClass("Mohan",24)
console.log(p3.name)
p3.sayHello()