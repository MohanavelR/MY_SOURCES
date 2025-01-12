console.log("Function : function functionnam(){ // }")
function call(){
    console.log("Function called..")
}
call()
console.log("============================================")
console.log("Function with Aribitrary fun")
function fun(){
    let sum=0
     for (let i of arguments){
        console.log("Parameter Values :",i)
        sum+=i
     }
     console.log("Value of Sum :",sum)
}
fun(23,45,67,98)
console.log("============================================")
console.log("Function in  return")

function fun2(){
    let sum=0
     for (let i of arguments){
      
        sum+=i
     }
     return sum
}
console.log("Value of Sum :",fun2(23,45,66,89))

console.log("============================================")
console.log("function in spreadOperactor  ")
function fun3(...values){
    let sum=0
     for (let i of values){
      
        sum+=i
     }
     return (sum)
}
console.log("Value of Sum :",fun3(23,45,66,89))
console.log("============================================")
console.log("Function expression")
const fun4=function(...values){
    let sum=0
     for (let i of values){
      
        sum+=i
     }
     return (sum)
}
console.log("Value of Sum :",fun4(23,45,66,89))
console.log("============================================")
console.log("Function Arrow")
console.log("E6 Version introduced")
const fun5 =(...values)=>{
    let sum=0
     for (let i of values){
      
        sum+=i
     }
     return (sum)
}
console.log("Value of Sum :",fun5(23,45,66,89))
