const http=require('http')

const server=http.createServer((req,res)=>{
    console.log(req.url)
   console.log('Received Request...')
   process.exit()
})


server.listen(2000)