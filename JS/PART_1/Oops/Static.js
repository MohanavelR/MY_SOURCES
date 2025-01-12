class Obj{
    static count=4
    constructor(name){
    this.fname=name
    }
    get get_name(){
        return this.fname
    } 
    set set_name(name){
         this.fname=name
    }
    static sayHello(){
        console.log("I am Static Method....")
    }
    
}
console.log("Static Method :")
Obj.sayHello()
console.log("Static Variable : ",Obj.count)
let b=new Obj("Mohan")
console.log("Name :",b.get_name)
class Color{
    static RED='#ff0000'
    static GREEN='#00ff00'
    static BLUE='#0000ff'
}
console.log(Color.RED)
console.log(Color.GREEN)
console.log(Color.BLUE)
class Mathamatical{
    static add(a,b){
       return a+b
    }
    static Sub(a,b){
       return a-b 
    }
    static Div(a,b){
     return a/b   
    }
    static Mul(a,b){
      return a*b  
    }
}
console.log("Value :",Mathamatical.add(4,5))
console.log("Value :",Mathamatical.Sub(6,3))
console.log("Value :",Mathamatical.Mul(5,6))
console.log("Value :",Mathamatical.Div(4,2))

