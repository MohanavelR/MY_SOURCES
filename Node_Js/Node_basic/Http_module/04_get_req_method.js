const http=require('http')

const server=http.createServer((req,res)=>{
    console.log('Requested Method :',req.method)
    setTimeout(()=>{
        process.exit()
    },2000)
})
server.listen(4000)