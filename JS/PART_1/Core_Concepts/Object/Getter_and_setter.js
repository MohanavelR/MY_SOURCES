let obj={
    fname:"Mohan",
    get get_name(){
        return this.fname
    } ,
    set set_name(name){
         this.fname=name
    }
}
console.log("Obj :",obj)
console.log("Name :",obj.get_name)
obj.set_name='karthi'
console.log("Name :",obj.get_name)