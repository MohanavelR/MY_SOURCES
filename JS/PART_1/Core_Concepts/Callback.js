console.log("Higher Order Function :")
function HigherOrder (fun){
     fun()
}
function callback(){
    console.log("Call back function")
}

HigherOrder(callback)