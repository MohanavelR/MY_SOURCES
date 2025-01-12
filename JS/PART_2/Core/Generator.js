console.log("Generator :")
function* Generator(){
    let n =1
    while (true){
        yield n++
    }
}
let serialnumber=Generator()
console.log(serialnumber.next().value,'mohan')
console.log(serialnumber.next().value,'karthi')
console.log(serialnumber.next().value,'jegan')
console.log(serialnumber.next().value,'bala')
console.log(serialnumber.next().value,'selva')