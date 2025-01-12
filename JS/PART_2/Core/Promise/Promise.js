let promise= new Promise((success,failure)=>{
    let bool=true
    if(bool){
        success(30)
    }
    else{
          failure(0)

    }
})
promise.then((success)=>{
    console.log(success)
   console.log("I am success")
}).catch((failure)=>{
  console.log(failure)
  console.log("I am failure")
})

console.log("Promise return success and Failure success is then failure catch")
