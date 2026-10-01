// const http=require('http')
// const fs=require('fs')
// const server=http.createServer((req,res)=>{
//     if (req.url === "/redirect"){
//         fs.writeFileSync("Node_basic/Http_module/hello.txt","Hello world")
//         console.log("Redirecting....")
//         res.setHeader("Location","/")
//         res.statusCode = 302
//         return res.end()
//     }
//     // /
//         res.write("<h1>Welcome The Index Page</h1>")
//         res.end()
    

// })
// server.listen(4000)

const http = require('http');
const fs = require('fs');
const path = require('path');

const server = http.createServer((req, res) => {
    if (req.url === "/redirect") {
        // Resolve absolute path safely relative to this file
        const filePath = path.join(__dirname, "hello.txt");

        // Asynchronous write prevents event-loop blocking
        return fs.writeFile(filePath, "Hello world", (err) => {
            if (err) {
                res.statusCode = 500;
                return res.end("Error writing file");
            }

            console.log("Redirecting....");
            res.statusCode = 302;
            res.setHeader("Location", "/");
            return res.end();
        });
    }

    res.setHeader("Content-Type", "text/html");
    res.write("<h1>Welcome The Index Page</h1>");
    res.end();
});

server.listen(4000, () => {
    console.log("Server running at http://localhost:4000");
});