console.log("Create  class in classkey:")
class persion{
    constructor(name){
        this.name=name
    }
    sayHello(){
        console.log("Hello",this.name)
    }
}
let p2=new persion("Mohan")
p2.sayHello()
class Student extends persion{
    constructor (name,age){
    super(name)
    this.age=age
    }

}
let p4=new Student("Jegan",32)
p4.sayHello()