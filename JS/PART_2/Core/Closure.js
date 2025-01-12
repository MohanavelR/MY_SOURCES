function add(x){
    function s(y){
        return x+y
    }
    return s
}
let add40=add(40)
let add10=add(10)
console.log(add40(45))
console.log(add10(90))
