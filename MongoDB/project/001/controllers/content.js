const { ObjectId } = require("mongodb")
const { getDatabase } = require("../db")
 async function getCollection(){
   
}
exports.home=async(req,res,next)=>{
    const DB= await getDatabase()
    const collection=(await DB).collection('users') 
    let users= await collection.find().toArray()
    let message;
    let status=req.query.status
    switch(status){
    case '1':
        message="Added Successfully"
        break
    case "2":
        message="Updated Successfully"  
        break  
    case "3":
        message="Deleted Successfully"  
        break  
    default:
        message =''    
   }
    
    res.status(200).render('content/home',{doctitle:'Home',users,message})
}
exports.add_emp=async(req,res,next)=>{
   const DB= await getDatabase()
   const collection=(await DB).collection('users')
   await collection.insertOne(req.body)
   res.status(200).redirect('/?status=1')
}
exports.update=async(req,res,next)=>{
  const edit_id = new ObjectId(req.params.edit_id)
  const database=getDatabase()
  const collection=(await database).collection('users')
  const user= await collection.findOne({_id:edit_id})
  res.status(200).render('content/update',{doctitle:'Update',user})
}
exports.update_process = async(req,res,next)=>{
    const edit_id= new ObjectId( req.query.edit_id)
    const database=getDatabase()
    const collection=(await database).collection('users')
    collection.updateOne({_id:(edit_id)},{$set:req.body})
    res.status(200).redirect('/?status=2')
}
exports.delete_emp = async(req,res,next)=>{
    const delete_id= new ObjectId(req.params.delete_id)
    const database=getDatabase()
    const collection=(await database).collection('users')
    collection.deleteOne({_id:(delete_id)})
    res.status(200).redirect('/?status=3')
}
