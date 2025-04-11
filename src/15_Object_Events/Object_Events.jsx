import React from 'react'
import { useState } from 'react'
export const Object_Events = () => {
    const [obj1,setObj1]=useState({name:"",age:0,count:0})
  return (
   <>
   <label htmlFor="">Name :</label>
   <input type="text"  onChange={(e)=>setObj1({...obj1,name:e.target.value})}/>
   <label htmlFor="">Age  :</label>
   <input type="text" onChange={(e)=>setObj1({...obj1,age:e.target.value})}/>
   <button onClick={()=>setObj1({...obj1,count:obj1.count+1})}>Count</button>
   <h4><pre>Name   :  {obj1.name}</pre></h4>
   <h4><pre>Age    :  {obj1.age}</pre></h4>
   <h4><pre>Count  :  {obj1.count}</pre></h4>
   </>
  )
}
