console.log("async function is always return promise ")

let reachB=new Promise((success,failure)=>{
    let reach=false
    if(reach){
       setTimeout(success,2000,' B  successfully reached')
    }
  else{
   failure('Not Reached...')
  }
})
reachB.then((m)=>{
    console.log(m)
}).catch((m)=>{
    console.log(m)
})
console.log('I want Waiting .....')
console.log('use Async function :')
async function Waiting(){
    console.log('Hi')
    let s=await reachB
    console.log(s)
    console.log(' Thank for Waiting .....')
}
Waiting()


