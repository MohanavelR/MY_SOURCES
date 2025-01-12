let a=null
console.log("a Value :",a??"No Value")

console.log("Object Use ??")
let user={
    name:null
}
console.log("name :",user.name)
console.log("Executed ??")
user.name??="No Name"
console.log("name :",user.name)