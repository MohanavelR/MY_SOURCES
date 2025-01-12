let obj={
    name:"Mohan",    
    method:function(){
        console.log("I am Method 1")
    },
    method2:()=>{
        console.log("I am Method 2")
    },
    method3(s){
        console.log(this.name,s)
    }   
}
function Mohan(s){
    console.log(this,s)
}
console.log("Function name       :",Mohan.name)
console.log("Function toString() :",Mohan.toString())

let obj2={
    name :'Jegan'
}
obj.method3.call(obj2,("Mohan"))
