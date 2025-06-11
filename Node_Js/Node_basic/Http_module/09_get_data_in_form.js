
const http=require('http')

const server=http.createServer((req,res)=>{
if (req.url==='/'){
    res.write("<html>")
    res.write("<form method='post'  action='/message' ><input name='message'></input><button type='submit'>send</button></form>")
    res.write("</html>")
    res.end()
}    
else if (req.url==="/message"){
    const body=[]
    // This reason Why node called Event Driven
    // Also called Non Blocking
    req.on("data",(data)=>{ // Async Function
        body.push(data)
    })
  return req.on('end',()=>{  // Async Function
        let write_value=''
        const parse= Buffer.concat(body).toString()
        let value=(parse.split("=")[1].split("+"))
        value.forEach((data)=>{
               write_value+=data+" "
        })
        console.log(write_value)
        res.write(`<h1>${write_value}</h1>`)
        res.end()
    })
}
})
server.listen(4000)