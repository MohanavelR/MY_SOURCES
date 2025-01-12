String.prototype.Str=function(){
    return this.length*3
}
let str="Mohan"
console.log("Custom String Method :",str.Str())
Array.prototype.Str=function(){
    return this.length*3
}
let arr=[1,2,3]
console.log("Custom Array Method :",arr.Str())
Function.prototype.Str=function(){
    console.log("I User define Function.....")
}
function fun(){

}
fun.Str()