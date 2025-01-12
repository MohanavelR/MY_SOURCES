let nums=[1,2,3,4,5,6,7,8,9,0]
let sum=nums.reduce((a,b)=>a+b)
console.log("Numberlist :",nums)
console.log("sumValue :",sum)
console.log("================================")
sum=nums.reduce((a,b)=>a+b,5)
console.log("Numberlist :",nums)
console.log("sumValue :",sum)
console.log("================================")
let nested=[[1,2,3],[4,5],[5,7,8]]
let single=nested.reduce((acc,curr)=>acc.concat(curr)
)
console.log("Nested Arr :",nested)
console.log("SingleArr  :",single)

let colors=['red','blue','red','yellow','orange']
let countcolors=colors.reduce((accu,curr)=>{
          if(curr in accu){
            accu[curr]++;
          }
          else{
            accu[curr]=1;
          }
          return accu
      },{});
console.log(countcolors)
console.log("================================")