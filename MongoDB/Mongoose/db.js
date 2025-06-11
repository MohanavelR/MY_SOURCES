const mongoose=require('mongoose')

let database;

async function databaseConnection () {
    const client = mongoose.connect('mongodb://127.0.0.1:27017/employee')
    .then(()=>console.log("Connected")).catch(()=>{console.log("Not Connected");
    })
    
}
exports.databaseConnection=databaseConnection