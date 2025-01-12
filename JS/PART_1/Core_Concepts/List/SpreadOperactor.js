let originalarr=[1,2,3,4,5,6]
let copyarr=[...originalarr]
console.log('Original Array :',originalarr)
console.log("CopyArray      :",copyarr)
console.log("Slice Method  :")
originalarr=[1,2,3,4,5,6]
copyarr=originalarr.slice()
console.log('Original Array :',originalarr)
console.log("CopyArray      :",copyarr)
console.log('Concatination  :')
originalarr=[1,2,3,4,5,6]
copyarr=[].concat(originalarr)
console.log('Original Array :',originalarr)
console.log("CopyArray      :",copyarr)
console.log('Array.from :')
originalarr=[1,2,3,4,5,6]
copyarr=Array.from(originalarr)
console.log('Original Array :',originalarr)
console.log("CopyArray      :",copyarr)
