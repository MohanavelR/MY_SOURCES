function fun6(){
    let count=0
    return ()=>{
        count++
        return count
    }
}
let counter=fun6()

console.log(counter())
console.log(counter())
console.log(counter())
console.log(counter())