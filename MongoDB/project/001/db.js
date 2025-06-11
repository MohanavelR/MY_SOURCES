const mongodb=require('mongodb')

const Client=mongodb.MongoClient
let database;
async function getDatabase () {
    const client = Client.connect('mongodb://127.0.0.1:27017')
    database=(await client).db('employee')
    if(!database){
        console.log('Database is Not Response')
    }
    return database
}
exports.getDatabase=getDatabase