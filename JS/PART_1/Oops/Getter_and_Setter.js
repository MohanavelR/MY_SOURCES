class Obj{
    constructor(name){
    this.fname=name
    }
    get get_name(){
        return this.fname
    } 
    set set_name(name){
         this.fname=name
    }
}
let obj1=new Obj("Mohan")
console.log("Obj :",obj1)
console.log("Name :",obj1.get_name)
obj1.set_name='karthi'
console.log("Name :",obj1.get_name)