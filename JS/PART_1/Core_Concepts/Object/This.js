console.log("This :",this)
var age=89
function This(){
    console.log(this)
    console.log(age)
}
This()
window.This()
let user={
    age:45,
    funct(){
        console.log(this)
       function mfun(){
        console.log("Nested Function",this.age)
        console.log("Nested Function",this)
       }
        const mnfun=()=>{
        console.log("NestedArrow Function",this.age)
        console.log("NestedArrow Function",this)
        console.log("Arrow is only object refer")
       }
       mfun()
       mnfun()
    
    },
    nest:{
        nfun:()=>{
            console.log("Nested :",age) 
            console.log("Nested :",this)
        }
        
    }

}
user.funct()
user.nest.nfun()
